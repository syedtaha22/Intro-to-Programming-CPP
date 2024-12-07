#include <iostream>

struct Rectangle {
    int width;
    int height;
};

int main() {
    Rectangle rectangles[2] = { {3, 4}, {5, 6} };

    for (int i = 0; i < 2; i++) {
        std::cout << "Rectangle " << i + 1 << " - Width: " << rectangles[i].width << ", Height: " << rectangles[i].height << std::endl;
    }

    return 0;
}
