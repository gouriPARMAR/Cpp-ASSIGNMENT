
---

**1. What is an object in C++?**

An object is an instance of a class. It contains data and functions defined by the class. Objects are used to access class members and perform operations.

**2. What is a class in C++ and how does it differ from an object?**

A class is a blueprint for creating objects, defining data members and member functions. An object is a real-world instance of that class.

**3. Explain the concept of encapsulation with an example.**

Encapsulation binds data and functions into a single unit called a class, hiding implementation details.
*Example:*

```cpp
class Student {
private:
    int marks;
public:
    void setMarks(int m) { marks = m; }
    int getMarks() { return marks; }
};
```

**4. How do you define a class in C++?**

Use the `class` keyword followed by the class name and body enclosed in braces.
*Example:*

```cpp
class MyClass {
    int x;
public:
    void display();
};
```

**5. Describe the syntax for creating an object of a class.**

To create an object, use the class name followed by the object name:

```cpp
MyClass obj;  // obj is an object of MyClass
```

**6. What are private members in a class and how are they accessed?**

Private members are accessible only within the class. They are accessed via public member functions.

**7. What are public members in a class and how are they accessed?**

Public members are accessible from outside the class using an object.
*Example:* `obj.display();`

**8. Explain the significance of access specifiers in a class.**

Access specifiers (`public`, `private`, `protected`) control access to class members, ensuring data security and modular design.

**9. Provide an example of a class with both private and public members.**

```cpp
class Sample {
private:
    int x;
public:
    void setX(int val) { x = val; }
    int getX() { return x; }
};
```

**10. How does data hiding work in C++?**

Data hiding restricts access to internal object details using private/protected access specifiers, promoting security and encapsulation.

**11. What is a static data member in C++?**

A static data member is shared among all objects of a class and is initialized only once.

**12. How do you declare and initialize a static data member?**

Declare inside the class and define outside using scope resolution:

```cpp
class A { static int count; };  
int A::count = 0;
```

**13. What is a static function member in C++?**

A static function member can access only static data and is called using the class name.

**14. How do static function members differ from regular function members?**

Static functions don't require objects to be called and cannot access non-static members.

**15. Provide an example of a class with static data and function members.**


```cpp
class Test {
    static int count;
public:
    static void show() { cout << count; }
};
int Test::count = 5;
```

**16. What is a constructor in C++ and why is it important?**

A constructor is a special function that initializes objects when they are created. It has the same name as the class.

**17. Explain the different types of constructors in C++.**

* Default constructor
* Parameterized constructor
* Copy constructor

**18. What is a default constructor and when is it used?**

A default constructor has no parameters and initializes objects with default values.

```cpp
class A { A() { } };
```

**19. How do parameterized constructors work?**

They accept arguments and initialize class members with specific values.

```cpp
class A { A(int x) { } };
```

**20. What is a copy constructor and what is its purpose?**

It creates a new object as a copy of an existing object, used in object copying.

```cpp
A(A &obj) { }
```

**21. Explain the concept of constructor overloading.**

Multiple constructors with different parameter lists allow object initialization in various ways.

**22. How does a constructor initializer list work?**

It initializes data members before the constructor body runs.

```cpp
A(int x) : data(x) { }
```

**23. What is a destructor in C++ and what is its purpose?**

A destructor cleans up resources when an object goes out of scope. It starts with `~` and has no return type.

**24. How is a destructor declared and defined?**

```cpp
class A {
    ~A(); // declaration
};
A::~A() { } // definition
```

**25. What happens if a destructor is not explicitly defined in a class?**

The compiler provides a default destructor which may not free dynamic memory.

**26. Explain the concept of automatic and dynamic storage duration in relation to destructors.**

Automatic objects are destroyed when they go out of scope. Dynamic objects need explicit deletion using `delete`.

**27. How do destructors differ from constructors?**

Constructors initialize objects, while destructors clean up. Constructors can be overloaded; destructors cannot.

**28. What is operator overloading in C++ and why is it useful?**

Operator overloading allows custom behavior for operators on user-defined types, improving code readability.

**29. Describe the syntax for overloading an operator.**

```cpp
class A {
    A operator+(A obj);
};
```

**30. Which operators can and cannot be overloaded in C++?**

Most operators can be overloaded. Operators like `::`, `.`, `.*`, and `sizeof` cannot be overloaded.

**31. Provide an example of overloading the "+" operator for a custom class.**

```cpp
class Point {
    int x;
public:
    Point operator+(Point p) {
        Point temp;
        temp.x = x + p.x;
        return temp;
    }
};
```

**32. Explain the concept of friend functions in the context of operator overloading.**

Friend functions can access private members and are often used for symmetric operator overloading.

**33. What is a friend function in C++ and how is it declared?**

A friend function is defined outside the class but has access to private data.

```cpp
friend void show();
```

**34. How do friend functions differ from member functions?**

Friend functions aren't class members but can access private members. They don’t require object calls.

**35. Explain the benefits and potential drawbacks of using friend functions.**

They allow external access to private data, useful in operator overloading. But they break encapsulation.

**36. What is inheritance in C++ and why is it important?**

Inheritance allows a class to acquire properties of another class, promoting code reusability and hierarchy.

**37. Explain the different types of inheritance in C++.**

* Single
* Multiple
* Multilevel
* Hierarchical
* Hybrid

**38. How do you implement single inheritance in C++?**

```cpp
class A { };  
class B : public A { };
```

**39. What is multiple inheritance and how does it differ from single inheritance?**

A class inherits from more than one base class. It adds complexity over single inheritance.

**40. Describe hierarchical inheritance with an example.**

Multiple derived classes inherit from a single base class.

```cpp
class A { };  
class B : public A { };  
class C : public A { };
```

**41. What is multilevel inheritance and how is it implemented in C++?**

Inheritance across multiple levels:

```cpp
class A { };  
class B : public A { };  
class C : public B { };
```

**42. Explain the concept of hybrid inheritance.**

Hybrid inheritance combines two or more types of inheritance (e.g., multiple + hierarchical).

**43. What are access modifiers in C++ and what are the different types?**

They define the visibility of class members: `public`, `private`, and `protected`.

**44. How do public, private, and protected access modifiers affect inheritance?**

They control member access in derived classes. `public` keeps access, `private` hides base members, `protected` allows limited access.

**45. Explain how access modifiers control member accessibility in derived classes.**

* Public inheritance: public & protected stay same
* Protected: public → protected
* Private: all become private

**46. What is function overriding in the context of inheritance?**

A derived class redefines a base class function with the same signature to provide specific behavior.

**47. How do you override a base class function in a derived class?**

Define a function in the derived class with the same signature as the base class virtual function.

**48. Explain the use of the "virtual" keyword in function overriding.**

It allows dynamic binding of functions, enabling runtime polymorphism in base-derived hierarchy.

**49. What is the significance of the "override" specifier in C++11 and later?**

It ensures the function overrides a base class function, helping avoid errors in overriding.

**50. What is a virtual base class in C++ and why is it used?**

It prevents multiple copies of base class in multiple inheritance, solving the diamond problem.

**51. How do you declare and implement a virtual base class?**

```cpp
class A { };  
class B : virtual public A { };  
class C : virtual public A { };
```

**52. Explain the role of virtual base classes in resolving ambiguity in multiple inheritance.**

They ensure only one instance of the base class is inherited, removing ambiguity in shared base classes.

**53. Provide an example of using a virtual base class to avoid the diamond problem.**

```cpp
class A { };  
class B : virtual public A { };  
class C : virtual public A { };  
class D : public B, public C { }; // only one A instance
```

---


