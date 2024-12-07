# Structures in C++

## Overview  

A **structure** in C++ is a user-defined data type that allows you to group related variables under a single name. It is particularly useful for representing real-world entities with multiple attributes. For example, if you want to represent a **Student** with attributes like `name`, `roll number`, and `marks`, a structure provides a clean way to organize this information.

Structures make it easier to manage and work with complex data, providing a foundation for understanding objects and classes later in programming.

---

## 1. **Defining a Structure**

A structure is defined using the `struct` keyword, followed by its name and a block that contains **member variables** (data) and optionally **member functions**.

### General Syntax:
```cpp
struct StructureName {
    // Member variables
    dataType variable1;
    dataType variable2;
    // ... more variables

    // Member functions (optional)
    returnType functionName() {
        // Function body
    }

    // ... more functions
};
```

- **`struct`**: Keyword used to define a structure.  
- **StructureName**: The name you give to the structure (e.g., `Person`, `Book`).  
- **Member Variables**: Variables that store data belonging to the structure.  
- **Member Functions**: Functions defined inside the structure that can operate on the data (optional).  

The structure acts as a **template** or blueprint. Once defined, you can create **objects** (or instances) of the structure to hold specific values.

---

## 2. **Using a Structure**

To use a structure, you first **create an object** of the structure type. Once created, you can access the **member variables** and **member functions** of the structure using the **dot operator (`.`)**.

### General Steps:
1. Define the structure.  
2. Create an object of the structure.  
3. Access or assign values to the members using the dot operator.  

### Example Format:
```cpp
struct StructureName {
    dataType variable1;
    dataType variable2;

    void functionName() {
        // Function logic
    }
};

// Creating an object and using it
StructureName objectName;   // Create an object of the structure
objectName.variable1 = value;  // Assign value to a member variable
objectName.functionName();     // Call a member function
```

For instance, a structure for a **Book** might have variables like `title` and `pages`. Once you create an object of this structure, you can assign and retrieve values specific to that object.

---

## 3. **Constructors in Structures**

A **constructor** is a special function that is automatically called when an object of the structure is created. Its main role is to **initialize the member variables** with default or user-provided values. In C++, constructors share the same name as the structure.

### Types of Constructors:
1. **Default Constructor**: Takes no arguments and sets default values.  
2. **Parameterized Constructor**: Takes arguments to initialize member variables with specific values.  

### General Syntax:  
```cpp
struct StructureName {
    // Member variables
    dataType variable1;

    // Default Constructor
    StructureName() {
        variable1 = defaultValue;
    }

    // Parameterized Constructor
    StructureName(dataType value) {
        variable1 = value;
    }
};
```

When you create an object, the constructor is called automatically.

---

## 4. **Destructors in Structures**

A **destructor** is a special function that is called automatically when an object of the structure goes **out of scope**. Its purpose is to **clean up resources** or perform any final actions before the object is removed from memory.

### General Syntax:
```cpp
struct StructureName {
    // Destructor
    ~StructureName() {
        // Cleanup logic
    }
};
```

- A destructor always has the same name as the structure, preceded by a **tilde (`~`)**.  
- It takes **no arguments** and has **no return value**.

Destructors are useful when you allocate resources (like memory) that need to be released when the program finishes using an object.

---

## 5. **Summary**

- A structure in C++ is a way to group related variables under one name, making it easier to manage complex data.  
- You can create objects of a structure type and access members using the dot operator.  
- **Constructors** are special functions that initialize member variables when an object is created.  
- **Destructors** clean up resources when an object is destroyed.  

By mastering structures, you gain a solid understanding of how to organize and manage data, which serves as a stepping stone for learning about **classes** and object-oriented programming in C++.  

Now that you know the basics of structures, we'll see how to use them to create **linked lists** in [LinkedLists.md](LinkedLists.md). 

