
---


1. **What is polymorphism in C++ and why is it important?**

   Polymorphism allows objects of different classes to be treated as objects of a common base class. It enables a single interface to represent different underlying forms (data types). It is important for achieving runtime flexibility and extending code without modifying existing functionality.

2. **Explain the concept of compile-time (static) polymorphism with examples.**

   Compile-time polymorphism occurs through **function overloading** and **operator overloading**.

   ```cpp
   class Print {
   public:
       void show(int i) { cout << "Integer: " << i << endl; }
       void show(string s) { cout << "String: " << s << endl; }
   };
   ```

3. **Describe the concept of runtime (dynamic) polymorphism with examples.**

   Dynamic polymorphism is achieved using **virtual functions**. The decision of which function to call is made at runtime.

   ```cpp
   class Animal {
   public:
       virtual void sound() { cout << "Some sound\n"; }
   };
   class Dog : public Animal {
       void sound() override { cout << "Bark\n"; }
   };
   ```

4. **What is the difference between static and dynamic polymorphism?**


   | Aspect       | Static Polymorphism           | Dynamic Polymorphism           |
   | ------------ | ----------------------------- | ------------------------------ |
   | Binding Time | Compile-time                  | Runtime                        |
   | Achieved By  | Function/operator overloading | Virtual functions, inheritance |
   | Flexibility  | Less flexible                 | More flexible and extensible   |

5. **How is polymorphism implemented in C++?**

   * Static polymorphism: function and operator overloading.
   * Dynamic polymorphism: virtual functions, vtables, and inheritance.





6. **What are pointers in C++ and how do they work?**

   Pointers are variables that store memory addresses. They allow dynamic memory access, function arguments by reference, and array manipulation.

7. **Explain the syntax for declaring and initializing pointers.**

   ```cpp
   int a = 5;
   int *ptr = &a; // ptr points to a
   ```

8. **How do you access the value pointed to by a pointer?**

   Use the dereference operator `*`:

   ```cpp
   cout << *ptr; // prints value of a
   ```

9. **Describe the concept of pointer arithmetic.**

   You can add/subtract integers to/from pointers to move through memory.

   ```cpp
   int arr[] = {1, 2, 3};
   int *ptr = arr;
   ptr++; // now points to arr[1]
   ```

10. **What are the common pitfalls when using pointers?**

* Dereferencing null/uninitialized pointers
* Memory leaks
* Dangling pointers
* Invalid pointer arithmetic




11. **How are pointers used with objects in C++?**
    Object pointers can point to instances and access members using `->` operator.

```cpp
class Test {
public:
    void show() { cout << "Hello"; }
};
Test obj, *ptr = &obj;
ptr->show();
```

12. **Explain the process of dynamically allocating objects using pointers.**

    Use `new` keyword:

```cpp
Test *ptr = new Test;
ptr->show();
```

13. **Provide an example of accessing object members using pointers.**

```cpp
class Box {
public:
    int length;
    void setLength(int l) { length = l; }
};
Box *b = new Box;
b->setLength(10);
```

14. **What is the difference between a pointer to an object and a reference to an object?**

* Pointer can be null and reassigned; reference must be initialized and cannot change.
* Syntax difference: `*` for pointer, `&` for reference.

15. **How do you release dynamically allocated objects in C++?**
    Use the `delete` keyword:

```cpp
delete ptr;
```


16. **What is the this pointer in C++ and what is its significance?**

    `this` is an implicit pointer available in all non-static member functions. It points to the current object.

17. **How is the this pointer used in member functions?**

```cpp
class Test {
int x;
public:
    void setX(int x) { this->x = x; }
};
```

18. **Explain how the this pointer can be used to return the current object.**

```cpp
class Test {
public:
    Test* getObj() { return this; }
};
```


19. **What is a virtual function in C++ and why is it used?**

    A virtual function allows derived classes to override functions and enables runtime polymorphism.

20. **Describe the syntax for declaring a virtual function.**

```cpp
class Base {
public:
    virtual void show();
};
```

21. **Explain the concept of a vtable (virtual table) and its role in virtual functions.**

    A vtable is a lookup table used at runtime to resolve virtual function calls. Each class with virtual functions has a vtable.

22. **What is a pure virtual function and how is it declared?**

    A function with `= 0` and no body:

```cpp
virtual void draw() = 0;
```

23. **Provide an example of a class with pure virtual functions.**

```cpp
class Shape {
public:
    virtual void draw() = 0;
};
```

24. **What are the implications of having pure virtual functions in a class?**

* Class becomes abstract
* Cannot create objects of the class directly
* Must override pure virtual functions in derived classes

25. **How is polymorphism implemented using inheritance and virtual functions?**

    By defining a virtual function in a base class and overriding it in derived classes, then calling via base class pointer.

26. **Provide an example of implementing polymorphism with base and derived classes.**

```cpp
class Animal {
public:
    virtual void sound() { cout << "Animal sound"; }
};
class Cat : public Animal {
    void sound() override { cout << "Meow"; }
};
Animal *a = new Cat;
a->sound(); // Outputs: Meow
```

27. **Explain the concept of late binding in the context of polymorphism.**

    Late binding refers to resolving function calls at runtime using virtual functions.

28. **How does the compiler manage polymorphism in C++?**

    The compiler uses vtables and vptr (virtual pointer) in objects to enable runtime dispatch of virtual functions.



29. **What is an abstract class in C++?**

    A class containing at least one pure virtual function.

30. **How do abstract classes differ from regular classes?**

    Cannot instantiate abstract classes; must be inherited and pure virtual functions implemented.

31. **Explain the role of abstract methods in abstract classes.**

    They enforce derived classes to provide their own implementation.

32. **Provide an example of defining and using an abstract class.**

```cpp
class Vehicle {
public:
    virtual void move() = 0;
};
class Car : public Vehicle {
    void move() override { cout << "Driving"; }
};
```

33. **What are the benefits of using abstract classes in C++?**

* Enforces a contract for derived classes
* Promotes code reusability and interface-based design



34. **What is exception handling in C++ and why is it important?**

    Exception handling allows detection and management of runtime errors, improving robustness.

35. **Describe the syntax for throwing and catching exceptions in C++.**

```cpp
try {
    throw "Error!";
} catch (const char* msg) {
    cout << msg;
}
```

36. **Explain the concept of try, catch, and throw blocks.**

* `try`: block to monitor errors
* `throw`: signal an exception
* `catch`: handles exceptions

37. **What is the role of the catch block in exception handling?**

    To provide code that reacts to specific thrown exceptions.

38. **Provide an example of handling multiple exceptions in C++.**

```cpp
try {
    throw 10;
} catch (int e) {
    cout << "Int exception";
} catch (...) {
    cout << "Generic exception";
}
```

39. **How does the throw keyword work in exception handling?**

    It raises an exception that transfers control to a matching `catch` block.

40. **What is the purpose of the finally block in exception handling?**

    C++ does not have `finally`; cleanup is done using destructors or `try`/`catch`.

41. **How do you create custom exception classes in C++?**

```cpp
class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "My custom exception";
    }
};
```


42. **What are templates in C++ and why are they useful?**

    Templates allow generic programming by writing code independent of data types.

43. **Describe the syntax for defining a function template.**

```cpp
template <typename T>
T add(T a, T b) { return a + b; }
```

44. **Provide an example of a function template that performs a generic operation.**

```cpp
template <typename T>
T max(T a, T b) { return (a > b) ? a : b; }
```

45. **What is a class template and how is it different from a function template?**

    A class template defines a class with generic types. Function templates define reusable functions.

46. **Explain the syntax for defining a class template.**

```cpp
template <class T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    T getValue() { return value; }
};
```

47. **Provide an example of a class template that implements a generic data structure.**

```cpp
template <typename T>
class Stack {
    T arr[100];
    int top = -1;
public:
    void push(T val) { arr[++top] = val; }
    T pop() { return arr[top--]; }
};
```

48. **How do you instantiate a template class in C++?**

```cpp
Stack<int> s;
s.push(10);
```

49. **What are the advantages of using templates over traditional class inheritance?**

* Compile-time type safety
* Code reuse without overhead of inheritance
* Avoids runtime polymorphism cost

50. **How do templates promote code reusability in C++?**

    One template can work with multiple data types, reducing code duplication.

---


