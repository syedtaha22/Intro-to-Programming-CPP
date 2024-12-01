# Pointer Basics

## What is a Pointer?

A pointer, as the name suggests, is something that "points" to something else. Think of it as a signpost or a redirection tool. It doesn’t hold the actual value of the object it points to but instead holds the information about where that object is located.

Take a look at the following example:

```
ptr ====> Something
```

Here, `ptr` is pointing to `Something`. Instead of containing `Something` itself, `ptr` serves as a reference that tells you where to look to find `Something`. So, anyone looking at `ptr` can follow it and be "redirected" to the actual `Something`.

This is the essence of what a pointer does.

---

## Pointers in Programming

In programming terms, a **pointer** is a special type of variable that stores the **memory address** of another variable. It allows for indirect access to or manipulation of data stored in memory.

### Defining a Pointer
In C++, a pointer is defined by placing an asterisk (`*`) in front of the data type. Here's how it looks:

```
DataType *ptr ==> Pointer to `DataType`
```

We can create a pointer to any data type we like. just by using '*' infront of the datatype.


1. **Pointer to an Integer:**
   ```
   int *ptr ==> Pointer to an integer
   ```

2. **Pointer to a Float:**
   ```
   float *ptr ==> Pointer to a float
   ```

3. **Pointer to Any Data Type:**
   ```
   DataType *ptr ==> Pointer to `DataType`
   ```

Since pointers are also a type of variable, you can create a **pointer to a pointer**, which is essentially a pointer that holds the memory address of another pointer.

```
DataType* *ptr ==> Pointer to a pointer to `DataType`
```

For example:
```
int **ptr ==> Pointer to a pointer to an integer
```

---

### Wrapping Up

Pointers are all about **memory locations**. A pointer "points to" something by storing that "something's" memory address. 

For now, focus on understanding what a pointer is conceptually. We'll cover how to use pointers and retrieve memory addresses in [AsteriskAndAmpersand.md](AsteriskAndAmpersand.md).