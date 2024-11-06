# Refactoring Practice Questions

## Instructions
Refactor the following code snippets to improve readability, maintainability, and efficiency. Identify areas where functions can be used to encapsulate logic and reduce redundancy. Consider breaking down complex tasks into smaller, more manageable functions.



### **Bad Code 1: Complicated Main Function**

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10, z = 15;
    
    int a = x + y;
    int b = y - z;
    int c = x * z;
    int d = y / x;
    
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "b is greater than a" << endl;
    }
    
    if (c > d) {
        cout << "c is greater than d" << endl;
    } else {
        cout << "d is greater than c" << endl;
    }
    
    int sum = a + b + c + d;
    int product = a * b * c * d;
    int average = sum / 4;
    
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << average << endl;
    
    for (int i = 0; i < sum; i++) {
        cout << "i: " << i << endl;
    }
    
    return 0;
}
```

**Problem:** The `main()` function does everything—calculating, comparing, printing, looping, etc. This can be broken down into smaller functions for readability and maintainability.

---

### **Bad Code 2: Repeated Code in Multiple Places**

```cpp
#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    
    if (num1 > 0) {
        cout << num1 << " is positive." << endl;
    } else {
        cout << num1 << " is not positive." << endl;
    }
    
    if (num2 > 0) {
        cout << num2 << " is positive." << endl;
    } else {
        cout << num2 << " is not positive." << endl;
    }
    
    if (num3 > 0) {
        cout << num3 << " is positive." << endl;
    } else {
        cout << num3 << " is not positive." << endl;
    }
    
    return 0;
}
```

**Problem:** The code checking whether each number is positive or not is repeated three times. This can be refactored into a separate function.

---

### **Bad Code 3: Function with Complex Logic**

```cpp
#include <iostream>
using namespace std;

void performOperations(int a, int b) {
    if (a == 0 || b == 0) {
        cout << "One of the values is zero, cannot perform operations!" << endl;
        return;
    }
    
    cout << "Adding: " << a + b << endl;
    cout << "Subtracting: " << a - b << endl;
    cout << "Multiplying: " << a * b << endl;
    
    if (b != 0) {
        cout << "Dividing: " << a / b << endl;
    }
}

int main() {
    performOperations(10, 5);
    performOperations(0, 5);
    performOperations(7, 0);
    performOperations(6, 3);
    
    return 0;
}
```

**Problem:** The `performOperations` function handles multiple tasks and is somewhat complex. It could be refactored into separate functions, e.g., one for addition, one for subtraction, etc.

---

### **Bad Code 4: Function Returning Wrong Type**

```cpp
#include <iostream>
using namespace std;

int getValue() {
    cout << "Enter a number: ";
    int num;
    cin >> num;
    
    if (num < 0) {
        cout << "Error: negative number entered!" << endl;
        return 0;
    }
    
    return num;
}

int main() {
    getValue();
    
    return 0;
}
```

**Problem:** The function `getValue()` is declared to return an `int`, but it also uses `cout` for error messages instead of handling errors in a cleaner way (e.g., by returning a `bool` or throwing an exception). Also, it doesn't use the return value from `getValue()` in the `main()` function, which suggests unnecessary return type usage.

---

### **Bad Code 5: Overcomplicated Looping Logic**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                cout << a[i] + a[j] + a[k] << " ";
            }
        }
    }
    
    return 0;
}
```

**Problem:** This code has an unnecessarily complicated nested loop that sums triplets of numbers. The logic is hard to follow, and a simpler approach could be used. It could also benefit from using helper functions to break down the problem.

---

### **Bad Code 6: Lack of Function Separation**

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius = 5.0;
    double length = 4.0;
    double width = 3.0;
    
    double areaCircle = M_PI * radius * radius;
    double areaRectangle = length * width;
    
    double perimeterCircle = 2 * M_PI * radius;
    double perimeterRectangle = 2 * (length + width);
    
    cout << "Circle Area: " << areaCircle << ", Perimeter: " << perimeterCircle << endl;
    cout << "Rectangle Area: " << areaRectangle << ", Perimeter: " << perimeterRectangle << endl;
    
    return 0;
}
```

**Problem:** The code calculates the area and perimeter of both a circle and a rectangle in the `main()` function. This logic should be separated into distinct functions for calculating areas and perimeters, making it more modular and reusable.

---

### **Bad Code 7: Using Global Variables**

```cpp
#include <iostream>
using namespace std;

int globalVar = 10;

void multiplyByGlobalVar(int x) {
    cout << "Result: " << x * globalVar << endl;
}

void divideByGlobalVar(int x) {
    cout << "Result: " << x / globalVar << endl;
}

int main() {
    multiplyByGlobalVar(20);
    divideByGlobalVar(20);
    
    return 0;
}
```

**Problem:** The code uses a global variable `globalVar` for calculations, making the code harder to maintain and understand. This should be avoided, and values should be passed explicitly to functions instead.

---

### **Bad Code 8: Unnecessary Repetitive Loops**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    
    for (int i = 0; i < 10; i++) {
        cout << "Iteration " << i << endl;
    }
    
    for (int i = 0; i < 10; i++) {
        cout << "Iteration " << i << endl;
    }
    
    return 0;
}
```

**Problem:** The code has two identical loops that do the same thing. The logic can be simplified by removing redundant loops.

---

### **Bad Code 9: Hardcoded Values and Magic Numbers**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3, c = 4;
    
    int sum = a + b + c;
    int result = sum * 5;
    int finalResult = result - 10;
    
    cout << "Final result: " << finalResult << endl;
    
    return 0;
}
```

**Problem:** The code uses hardcoded values like `5` and `10` without explanation, which are considered "magic numbers." These values should be assigned to variables with meaningful names to improve readability.

