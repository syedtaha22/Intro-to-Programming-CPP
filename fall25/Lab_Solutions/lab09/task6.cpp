/*********************************************************************************************
 * @file   task6.cpp
 * 
 * @details Task 6: Email Verification for IBA Students
 * 
 * IBA student email addresses follow a strict naming format that combines a name and an ERP
 * number, followed by the official domain. Each valid email must satisfy the following
 * conditions:
 * 
 * Component Rule:
 *   Name Part: Contains only lowercase letters and dots (e.g., s.raza, samreen.kazi)
 *   ERP Part: Exactly 5 digits (e.g., 32448)
 *   Domain: Must end with @khi.iba.edu.pk
 * 
 * Examples:
 *   - s.raza.32448@khi.iba.edu.pk → Valid
 *   - samreen.kazi.12345@khi.iba.edu.pk → Valid
 *   - s.raza32448@khi.iba.edu.pk → Invalid (missing dot before ERP)
 *   - s.raza.32448@iba.edu.pk → Invalid (wrong domain)
 *   - s.Taha.29208@iba.edu.pk → Invalid (wrong domain, capital letter not allowed)
 * 
 * Write a C++ program that verifies whether email addresses follow the correct IBA format.
 * 
 * 1. bool isValidIBAEmail(string email);
 *    This function should:
 *      • Extract the local part (portion before @) using substr().
 *      • Use rfind('.') to locate the ERP separator.
 *      • Use <cctype> functions (isdigit(), islower()) to validate each section.
 *      • Return true if all rules are met; otherwise, return false.
 * 
 * 2. In main():
 *      • Declare a string array containing at least five sample email addresses.
 *      • For each email, print whether it is Valid or Invalid based on your function result.
 * 
 * Write comments in code to answer the following questions:
 *   1. Which string method did you find most useful and why?
 *   2. How could you modify this program to handle faculty emails (@iba.edu.pk)
 *********************************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


// Get the domain from an email
std::string get_domain(const std::string& email) {
    size_t at_pos = email.find('@');
    return (at_pos != std::string::npos) ? email.substr(at_pos) : "";
}

// Get the ERP from an email
std::string get_erp(const std::string& email) {
    size_t at_pos = email.find('@');
    if (at_pos == std::string::npos) return "";

    size_t last_dot = email.rfind('.', at_pos);
    if (last_dot == std::string::npos) return "";

    return email.substr(last_dot + 1, at_pos - last_dot - 1);
}

// Get the name from an email
std::string get_name(const std::string& email) {
    size_t at_pos = email.find('@');
    if (at_pos == std::string::npos) return "";

    size_t last_dot = email.rfind('.', at_pos);
    if (last_dot == std::string::npos) return "";

    return email.substr(0, last_dot);
}


// Check if the email has a valid domain
bool has_valid_domain(const std::string& email) {
    static const std::string domains[] = {
        "@khi.iba.edu.pk",
        "@iba.edu.pk" // to handle faculty emails
    };

    std::string email_domain = get_domain(email);

    for (const auto& domain : domains) {
        if (email_domain == domain) {
            return true;
        }
    }

    return false;
}

// Check if the email has a valid ERP
bool has_valid_erp(const std::string& email) {
    std::string erp = get_erp(email);

    if (erp.length() != 5) return false;

    for (char c : erp) {
        if (!isdigit(c)) return false;
    }

    return true;
}

// Check if the email has a valid name
bool has_valid_name(const std::string& email) {
    std::string name = get_name(email);

    if (name.empty()) return false;

    int dot_count = 0;

    for (size_t i = 0; i < name.size(); i++) {
        char c = name[i];

        if (c == '.') {
            dot_count++;
            // dot can't be first or last
            if (i == 0 || i == name.size() - 1) return false;
        } else 
            if (!islower(c)) 
                return false;
    }

    // must contain exactly one dot
    return dot_count == 1;
}

// Validate the entire IBA email
// and email is valid if all components are valid
bool isValidIBAEmail(const std::string& email) {
    return has_valid_domain(email) && has_valid_erp(email) && has_valid_name(email);
}

int main() {
    std::vector<std::string> emails = {
        "s.raza.32448@khi.iba.edu.pk",
        "samreen.kazi.12345@khi.iba.edu.pk",
        "Firstname.lastname@khi.iba.edu.pk",
        "s.raza32448@khi.iba.edu.pk",
        "s.Taha.29208@khi.iba.edu.pk",
    };

    for (const auto& email : emails) {
        bool ok = isValidIBAEmail(email);
        std::cout << std::left << std::setw(40) << email << ": " << (ok ? "Valid" : "Invalid") << std::endl;
    }

    return 0;
}
