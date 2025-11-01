/****************************************************************************************
 * @file    task5.cpp
 *
 * @brief   A software development firm recently fired a developer, and as a form of revenge,
 *          he deliberately rewrote the system in a messy, unstructured way. All logic is contained
 *          within the main() function, variable names are inconsistent, user prompts are vague
 *          or misleading, and there is no documentation. This has made it extremely difficult
 *          for other developers to understand, maintain, or extend the system.
 *
 * @details Your task is to:
 *          • Analyze the given unstructured code.
 *          • Break it down into meaningful functions.
 *          • Write proper documentation for each function using the format below:
 *
 *            @brief <short summary>
 *            @param <name> <description>
 *            @param ...
 *            @return <description if applicable>
 *
 *          Identify logical groupings of operations (input, processing, and output).
 *          Refactor the code so that each function has a single clear purpose.
 *          Add brief and relevant comments where appropriate.
 *
 *          Additional Notes:
 *          • The original code is poorly formatted and uses inconsistent indentation,
 *            spacing, and brace placement.
 *          • Variable names are not meaningful or consistent, and user prompts are vague
 *            or unhelpful.
 *          • There are multiple repeated or similar blocks of code that could be refactored
 *            into reusable functions.
 *          • Loops and logic are often repeated unnecessarily across different control paths.
 *
 * @note    The unstructured program to be refactored is included in the file
 *          legacy_code.cpp, which is attached with the lab PDF.
 *          You must not change the program’s functionality — only its structure,
 *          readability, clarity, and user interface if needed.
 ****************************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>

 /**
  * @brief Prints help information and optionally a menu header.
  *
  * @param menu     If true, prints the main menu header.
  */
void help(bool menu = false) {
    if (menu) std::cout << "\n--- Student Management System ---\n";
    std::cout << "Commands:\n";
    std::cout << "  help                  Show this help message\n";
    std::cout << "  add <number>          Add <number> students\n";
    std::cout << "  report                Print report of all students\n";
    std::cout << "  find <id>             Print details of student with roll number <id>\n";
    std::cout << "  find <program>        Print names of students enrolled in <program>\n";
    std::cout << "  quit                  Exit the program\n";
}

/**
 * @brief Checks if a given string represents a valid non-negative integer.
 *
 * @param s The string to check.
 * @return true if the string is a valid non-negative integer, false otherwise.
 */
bool isNum(const std::string& s) {
    if (s.empty()) return false;
    for (char c : s)
        if (c < '0' || c > '9')
            return false;
    return true;
}

/**
 * @brief Prompts the user to enter details for 'n' students and
 * adds them to the system.
 *
 * @param students A reference to the main student data vector
 *                 (2D vector of strings).
 * @param n        The number of students to add.
 */
void addStudents(std::vector<std::vector<std::string>>& students, int n) {
    for (int i = 0; i < n; ++i) {
        std::string name, grade, program;
        std::cout << "Enter name: ";        std::getline(std::cin, name);
        std::cout << "Enter grade (A-F): "; std::cin >> grade;
        std::cout << "Enter program: ";     std::cin >> program;
        students.push_back({ name, grade, program });

        // Print new line if not the last student
        if (i < n - 1) std::cout << "\n";

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear input buffer
    }
}

/**
 * @brief Prints the full details of a single student based on their roll number (index).
 *
 * @param students A constant reference to the main student data vector.
 * @param roll The zero-based index/roll number of the student to print.
 * @return void
 */
void printStudent(const std::vector<std::vector<std::string>>& students, int roll) {
    if (roll < 0 || roll >= students.size())
        std::cout << "No student with roll " << roll << "\n"; return;

    std::cout << "ID: " << roll << "\n";
    std::cout << "Name: " << students[roll][0] << "\n";
    std::cout << "Grade: " << students[roll][1] << "\n";
    std::cout << "Program: " << students[roll][2] << "\n";
}

/**
 * @brief Prints a formatted table report of all students currently in the system.
 *
 * @param students A constant reference to the main student data vector.
 * @return void
 */
void printReport(const std::vector<std::vector<std::string>>& students) {
    if (students.empty()) { std::cout << "No students in the system.\n"; return; }
    std::cout << "\n--- Student Report ---\n";
    std::cout << std::left << std::setw(5) << "ID"
        << std::setw(20) << "Name"
        << std::setw(8) << "Grade"
        << std::setw(10) << "Program" << "\n";
    std::cout << std::string(43, '-') << "\n";
    for (int i = 0; i < students.size(); ++i) {
        std::cout << std::left << std::setw(5) << i
            << std::setw(20) << students[i][0]
            << std::setw(8) << students[i][1]
            << std::setw(10) << students[i][2] << "\n";
    }
}

/**
 * @brief Finds and prints the names of all students enrolled in a specific program.
 *
 * @param students A constant reference to the main student data vector.
 * @param program The name of the program to search for.
 */
void findByProgram(const std::vector<std::vector<std::string>>& students, const std::string& program) {
    bool found = false;
    std::cout << "Students in " << program << ":\n";
    for (int i = 0; i < students.size(); ++i) {
        if (students[i][2] == program) {
            std::cout << "  " << students[i][0] << "\n";
            found = true;
        }
    }
    if (!found) std::cout << "  None\n";
}

/**
 * @brief Parses a command line string into a vector of arguments.
 * The first element is the command, and the second (if present) is the parameter.
 *
 * @param line The input string containing the command and optional parameter.
 * @return A vector containing the parsed command arguments.
 */
std::vector<std::string> parseCommand(const std::string& line) {
    std::vector<std::string> args;
    std::string word;
    for (char c : line) {
        if (c == ' ') {
            if (!word.empty()) {
                args.push_back(word);
                word.clear();
            }
        }
        else word += c;
    }
    if (!word.empty()) args.push_back(word);
    return args;
}

/**
 * @brief The main function of the Student Management System.
 * Initializes the student vector and runs the command loop.
 *
 * @return int Returns 0 on successful exit.
 */
int main() {

    /**
     * @brief Students
     * A 2D vector where each inner vector represents a student with
     * the following fields:
     *      0: Name (string)
     *      1: Grade (string, A-F)
     *      2: Program (string)
     * @note  The roll number of a student is their index in this vector.
     *
     */
    std::vector<std::vector<std::string>> students;
    help(true);

    std::string line;
    while (true) {
        std::cout << "\n# ";
        std::getline(std::cin, line);
        std::vector<std::string> args = parseCommand(line);
        if (args.empty()) continue;

        std::string command = args[0];
        std::string param = (args.size() > 1) ? args[1] : "";

        if (command == "help") help();
        else if (command == "add") {
            // Check if parameter is provided, and is a valid number
            if (!param.empty() && isNum(param)) {
                int n = std::stoi(param);
                addStudents(students, n);
            }
            else std::cout << "Specify a valid number of students to add.\n";
        }
        else if (command == "report") printReport(students);
        else if (command == "find") {
            if (!param.empty()) {
                if (isNum(param))
                    printStudent(students, std::stoi(param));
                else findByProgram(students, param);
            }
            else std::cout << "Specify roll number or program.\n";
        }
        else if (command == "quit") { std::cout << "Exiting program.\n"; break; }
        else std::cout << "Unknown command. Type 'help' for commands.\n";
    }
    return 0;
}
