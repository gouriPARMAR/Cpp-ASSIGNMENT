

### **1. What is the purpose of the `main` function in a C++ program?**  
The `main` function serves as the entry point for a C++ program. It is where execution begins and typically controls the flow of the program.

### **2. Explain the significance of the return type of the `main` function.**  
The return type of `main` is `int`, which indicates the exit status of the program. Returning `0` signifies successful execution, while non-zero values indicate errors.

### **3. What are the two valid signatures of the `main` function in C++?**  
```cpp
int main();
int main(int argc, char* argv[]);
```
The first signature takes no arguments, while the second allows command-line arguments.

### **4. What is function prototyping and why is it necessary in C++?**  
Function prototyping declares a function before its definition, enabling the compiler to check for correct usage and parameter types before encountering the actual function.

### **5. How do you declare a function prototype for a function that returns an integer and takes two integer parameters?**  
```cpp
int add(int, int);
```

### **6. What happens if a function is used before it is prototyped?**  
If a function is called before its prototype or definition, the compiler generates an error due to an undeclared function.

### **7. What is the difference between a declaration and a definition of a function?**  
- **Declaration**: Specifies the function signature without implementation.  
- **Definition**: Provides the full implementation of the function.

Example:
```cpp
// Declaration
int add(int, int);

// Definition
int add(int a, int b) {
    return a + b;
}
```

### **8. How do you call a simple function that takes no parameters and returns `void`?**  
```cpp
void greet() {
    std::cout << "Hello!";
}

int main() {
    greet(); // Function call
    return 0;
}
```

### **9. Explain the concept of "scope" in the context of functions.**  
Scope defines the region where a variable or function is accessible. Variables can have:
- **Local scope** (inside a function)
- **Global scope** (outside all functions)
- **Block scope** (inside `{}` braces)

### **10. What is call by reference in C++?**  
Call by reference allows a function to modify the actual arguments by passing their memory addresses instead of copies.

### **11. How does call by reference differ from call by value?**  
- **Call by Value**: Passes a copy; changes do not affect the original value.  
- **Call by Reference**: Passes the actual variable; changes reflect in the caller.

### **12. Provide an example of a function that uses call by reference to swap two integers.**  
```cpp
#include <iostream>
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y);
    std::cout << "x: " << x << ", y: " << y;
    return 0;
}
```

### **13. What is an inline function in C++?**  
An inline function suggests the compiler replace its call with its code to reduce function call overhead.

### **14. How do inline functions improve performance?**  
They reduce function call overhead by inserting code directly at the call site.

### **15. Explain the syntax for declaring an inline function.**  
```cpp
inline int square(int x) {
    return x * x;
}
```

### **16. What are macros in C++ and how are they different from inline functions?**  
Macros are preprocessor directives (`#define`), while inline functions are actual C++ functions processed by the compiler.

### **17. Explain the advantages and disadvantages of using macros over inline functions.**  
**Advantages**:
- Macros are faster as they are expanded at compile-time.
  
**Disadvantages**:
- No type checking.
- Harder to debug.

### **18. Provide an example to illustrate the differences between macros and inline functions.**  
```cpp
#define SQUARE(x) (x * x) // Macro

inline int square(int x) { return x * x; } // Inline function
```

### **19. What is function overloading in C++?**  
Function overloading allows multiple functions with the same name but different parameter lists.

### **20. How does the compiler differentiate between overloaded functions?**  
By their parameter list (number and type of parameters).

### **21. Provide an example of overloaded functions in C++.**  
```cpp
#include <iostream>
void display(int x) { std::cout << "Integer: " << x; }
void display(double y) { std::cout << "Double: " << y; }

int main() {
    display(5);
    display(3.14);
    return 0;
}
```

### **22. What are default arguments in C++?**  
Default arguments allow a function to have parameters with pre-defined values.

### **23. How do you specify default arguments in a function declaration?**  
```cpp
int add(int a, int b = 5);
```

### **24. What are the rules for using default arguments in functions?**  
- Default values must be assigned from right to left.
- Only in the declaration, not the definition.

### **25. Provide an example of a function with default arguments.**  
```cpp
#include <iostream>
void greet(std::string name = "User") {
    std::cout << "Hello, " << name;
}

int main() {
    greet();
    greet("Alice");
    return 0;
}
```

### **26. Write a C++ program that prints "Hello, World!" using the `main` function.**  
```cpp
#include <iostream>
int main() {
    std::cout << "Hello, World!";
    return 0;
}
```

