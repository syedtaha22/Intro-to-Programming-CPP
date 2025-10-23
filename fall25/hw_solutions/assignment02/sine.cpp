#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<limits>

int main() {
    // --- User Input for X-Range ---
    double x_start, x_end;

    std::cout << "Enter the start of the x-range (e.g., 0.0): ";
    while (!(std::cin >> x_start)) {
        std::cout << "Invalid input. Please enter a number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Enter the end of the x-range (e.g., " << 4.0 * M_PI << "): ";
    while (!(std::cin >> x_end) || x_end <= x_start) {
        if (x_end <= x_start && std::cin) {
            std::cout << "End must be greater than start. Please re-enter: ";
        }
        else {
            std::cout << "Invalid input. Please enter a number greater than " << x_start << ": ";
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // --- Plotting Setup ---
    std::cout << "\nPlotting sin(x) from x = " << x_start << " to x = " << x_end << ":\n";

    const int width = 80;
    const int height = 20;
    const double x_range = x_end - x_start;

    // Calculate the column index for x = 0
    // The formula to map a value 'x' from [x_start, x_end] to an index 'c' from [0, width-1] is:
    // c = floor( (x - x_start) / x_range * width )
    int y_axis_col = -1; // Initialize to -1 (off-screen)

    // Check if x=0 is within the range (x_start <= 0 <= x_end)
    if (x_start <= 0.0 && x_end >= 0.0) {
        // Calculate the column index where x is 0.0.
        // The width must be slightly reduced to ensure the index fits within [0, width-1]
        y_axis_col = static_cast<int>((0.0 - x_start) / x_range * (width - 1));
    }

    // --- Drawing Loop ---
    for (int r = 0; r < height; ++r) {
        for (int c = 0; c < width; ++c) {
            // Scale the column 'c' from [0, width-1] to the user-defined [x_start, x_end]
            double x = x_start + (static_cast<double>(c) / width) * x_range;

            // Compute sine value
            double y = sin(x);

            // Scale y (which is in [-1, 1]) to the row range [0, height-1]
            int y_pos = static_cast<int>((y + 1) / 2 * (height - 1));

            // Plotting priority:

            // 1. Plot the function point
            if (y_pos == height - r - 1) std::cout << "*";

            // 2. Plot the Y-axis (vertical line at x=0)
            else if (c == y_axis_col) {
                // If this is the column for x=0, and we're not plotting the x-axis, plot the '|'
                // The x-axis (row r == height / 2) is handled below.
                if (r != height / 2) std::cout << "|";
                else // This is the origin (0,0), so we print a '*'. Sine(0) = 0, so it coincides.
                    std::cout << "*";
            }
            // 3. Plot the X-axis (horizontal line at y=0)
            else if (r == height / 2) std::cout << "-";
            // 4. Empty space
            else std::cout << " ";
        }
        std::cout << "\n";
    }

    return 0;
}