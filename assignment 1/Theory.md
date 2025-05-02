1.	What is the fundamental difference between procedural and object-oriented programming paradigms? Provide a brief example to illustrate.
 

---

## **1. Fundamental Differences Between Procedural and Object-Oriented Programming**  

| Feature | Procedural Programming | Object-Oriented Programming (OOP) |
|---------|------------------------|----------------------------------|
| **Approach** | Follows a **top-down** approach | Follows a **bottom-up** approach |
| **Focus** | Focuses on **functions (procedures)** | Focuses on **objects & classes** |
| **Data Handling** | Data is **global** and shared | Data is **encapsulated** |
| **Code Reusability** | Less reusable | Highly reusable using **inheritance** |
| **Security** | Less secure (data is exposed) | More secure (data hiding using **encapsulation**) |

### **Example**  
#### **Procedural Approach:**
```cpp
#include <iostream>
using namespace std;

void display() {
    cout << "Hello, Procedural Programming!";
}

int main() {
    display();
    return 0;
}
```
#### **OOP Approach:**
```cpp
#include <iostream>
using namespace std;

class Greeting {
public:
    void display() {
        cout << "Hello, Object-Oriented Programming!";
    }
};

int main() {
    Greeting g;
    g.display();
    return 0;
}
```
2. Define OOP. What are its core characteristics?

---

## **2. Definition of Object-Oriented Programming (OOP) and Core Characteristics**  
### **Definition:**  
**Object-Oriented Programming (OOP)** is a programming paradigm based on the concept of **objects**, which contain **data (attributes)** and **methods (functions)** to operate on that data.

### **Core Characteristics:**  
1. **Encapsulation** – Data hiding within classes.  
2. **Abstraction** – Hiding implementation details and exposing only necessary functionalities.  
3. **Inheritance** – Reusing existing code by deriving new classes from existing ones.  
4. **Polymorphism** – Ability to process objects differently based on their class.

---

3. Explain the concept of "abstraction" within the context of OOP. why is it important?

## **3. Abstraction in OOP**  
**Definition:** Abstraction hides unnecessary implementation details and only exposes essential features.

### **Example:**
```cpp
#include <iostream>
using namespace std;

class Car {
public:
    void startCar() { cout << "Car Started!"; } // Abstraction
};

int main() {
    Car myCar;
    myCar.startCar(); // Only essential function is exposed
    return 0;
}
```

✅ **Why is it important?**  
- Simplifies complex systems  
- Reduces programming complexity  
- Enhances code maintainability  

---

4. What are the benifits of using OOP over procedural programming?

## **4. Benefits of Using OOP Over Procedural Programming**
✅ Code **Reusability** using **Inheritance**  
✅ Better **Modularity** and **Organization**  
✅ **Encapsulation** ensures **data security**  
✅ **Polymorphism** provides **flexibility**  
✅ Suitable for **large and complex** applications  

---

5. Give a real world example of a problem that is well suited to be solved using OOP approch.

## **5. Real-World Example of OOP**
### **Bank Management System**  
- **Classes:** `Customer`, `Account`, `Transaction`  
- **Encapsulation:** Hides sensitive data (e.g., account balance)  
- **Inheritance:** `SavingsAccount` and `CurrentAccount` inherit from `Account`  
- **Polymorphism:** Different transaction types (e.g., `deposit()`, `withdraw()`)  

---

6. Define the four key principles of OOP .

## **6. Four Key Principles of OOP**
1. **Encapsulation** – Hides data within a class.  
2. **Inheritance** – Allows new classes to derive properties from existing ones.  
3. **Polymorphism** – Allows multiple forms of a function.  
4. **Abstraction** – Hides internal implementation details.  

---

7. Explain how encapsulation helps to protect data and create modular code . Give example.

## **7. Encapsulation in C++**
### **Example:**
```cpp
class BankAccount {
private:
    double balance; // Encapsulation: Hidden from outside access
public:
    void deposit(double amount) { balance += amount; }
    double getBalance() { return balance; }
};
```

✅ **Encapsulation helps:**  
- **Protect data** from unauthorized access  
- **Maintain modular code**  

---

8. What is inheritance? How does it promote code reuse and maintainability?

## **8. Inheritance in C++**
```cpp
class Animal {
public:
    void makeSound() { cout << "Animal Sound"; }
};

class Dog : public Animal { };

int main() {
    Dog d;
    d.makeSound(); // Inherited function
}
```
✅ **Promotes Code Reusability**  

---

9. Describe polymorphism . How does it contribute to flexibility and extensibility? give example of function overloading and overriding.

## **9. Polymorphism in C++**
### **Function Overloading:**
```cpp
class Math {
public:
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
};
```

### **Function Overriding:**
```cpp
class Animal {
public:
    virtual void sound() { cout << "Animal Sound"; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Bark!"; }
};
```
✅ **Enhances flexibility & extensibility**  

---

10. Explain the difference between "overloading" & "overriding" .

## **10. Difference Between Overloading & Overriding**
| Feature | Overloading | Overriding |
|---------|------------|------------|
| **Definition** | Multiple functions with the same name but different parameters | Redefining a base class function in a derived class |
| **Scope** | Same class | Different classes (base & derived) |
| **Polymorphism Type** | Compile-time | Run-time |

---

11. List at least three advantages of using OOP in software development .

## **11. Advantages of OOP**
✅ **Code reusability**  
✅ **Better security** with encapsulation  
✅ **Scalability & maintainability**  

---

12. Give examples of of application domains where OOP is commonly used.

## **12. Application Domains Using OOP**
- **Game Development** (e.g., Unity)  
- **GUI Applications** (e.g., Qt, GTK)  
- **Web Development** (e.g., ASP.NET)  
- **Database Systems**  

---

13. Discuss the impact of OOP on code maintainability & reusability.

## **13. Impact of OOP on Code Maintainability & Reusability**
✅ **Encapsulation** ensures code integrity  
✅ **Inheritance** allows reusing existing classes  
✅ **Modular structure** improves maintainability  

---

14. How does OOP contribute to development of large and complex software system.

## **14. OOP in Large-Scale Software Development**
- Reduces **complexity**  
- Promotes **code reusability**  
- Improves **collaboration** in large teams  

---

15. Describe the basic structure of a C++ program. What are the essential components?

## **15. Basic Structure of a C++ Program**
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}
```
✅ **Components:** Preprocessor, Namespace, Main Function, Statements  

---

16. Explain the purpose of namespaces in C++. 

## **16. Purpose of Namespaces in C++**
✅ **Avoids naming conflicts**  
✅ Groups related functions/classes  

```cpp
namespace Library {
    void display() { cout << "Library Function"; }
}
int main() {
    Library::display();
}
```

---

17. What are identifiers in C++ ? What rules must be followed while creating them ? 

## **17. Identifiers in C++**
✅ **Rules:**  
✔ Must start with a letter or `_`  
✔ Cannot use keywords  
✔ Case-sensitive  

✅ **Example:**  
```cpp
int myVar = 10; // Valid
```

---

18. What are the differnces between variables and constants in C++ ? 

## **18. Variables vs. Constants in C++**
| Feature | Variable | Constant |
|---------|---------|---------|
| **Mutability** | Can be changed | Cannot be changed |
| **Declaration** | `int x = 5;` | `const int x = 5;` |

---

19. How to use control structures to control the flow of execution in C++ program .

## **19. Control Structures in C++**
✅ **`if-else` for decision making**  
✅ **Loops (`for`, `while`, `do-while`) for iteration**  
✅ **`switch` for multiple cases**  

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
```

---

20. Explain the benefits of using OOP in software development.

### **Benefits of Using OOP in Software Development**  

Object-Oriented Programming (OOP) offers several advantages that make it a **preferred approach** for modern software development. It improves **code organization, reusability, security, and scalability**, making development more efficient and maintainable.

---

### **1. Code Reusability (Through Inheritance)**  
✔ **Existing code can be reused** in new programs, reducing redundancy.  
✔ **Example:** A `Vehicle` class can be inherited by `Car` and `Bike`, reusing common attributes like `speed` and `fuelCapacity`.

---

### **2. Modularity (Better Code Organization)**  
✔ OOP **divides complex systems into smaller, manageable objects**, making them easier to develop and maintain.  
✔ **Example:** In an e-commerce system, separate classes for `User`, `Product`, and `Order` keep the system well-structured.

---

### **3. Maintainability (Easy Debugging & Updates)**  
✔ OOP makes it **easy to update and modify** specific parts of a program without affecting the rest.  
✔ **Example:** A `Payment` class in a shopping app can be modified to support new payment methods **without changing the entire system**.

---

### **4. Flexibility & Scalability (Using Polymorphism)**  
✔ **Polymorphism** allows multiple implementations of the same method, making software more flexible.  
✔ **Example:** A `draw()` method in a `Shape` class can be overridden for `Circle`, `Rectangle`, and `Triangle`.

---

### **5. Data Security (Using Encapsulation)**  
✔ **Encapsulation** restricts direct access to data, protecting it from accidental modification.  
✔ **Example:** A `BankAccount` class keeps `balance` private and only allows updates through `deposit()` and `withdraw()`.

---





