<div align="center">

# 🚀 OOPS-cpp: Mastering Object-Oriented Programming in C++

### A complete, hands-on journey through OOP: from classes and objects to polymorphism, inheritance, and design principles

![Language](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Paradigm](https://img.shields.io/badge/Paradigm-OOP-success?style=for-the-badge)
![Level](https://img.shields.io/badge/Level-Beginner%20to%20Advanced-orange?style=for-the-badge)
![Examples](https://img.shields.io/badge/Examples-Fully%20Commented-blueviolet?style=for-the-badge)
![PRs Welcome](https://img.shields.io/badge/PRs-Welcome-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-lightgrey?style=for-the-badge)

**Clean code • Real-world examples • Concept-by-concept explanations**

</div>

---

## 📖 Table of Contents

1. [About the Project](#-about-the-project)
2. [What You Will Learn](#-what-you-will-learn)
3. [Repository Structure](#-repository-structure)
4. [Getting Started](#-getting-started)
5. [The Four Pillars of OOP](#-the-four-pillars-of-oop)
6. [Core Concepts in Detail](#-core-concepts-in-detail)
7. [Types of Inheritance](#-types-of-inheritance)
8. [Polymorphism Explained](#-polymorphism-explained)
9. [Mini Projects](#-mini-projects)
10. [Best Practices](#-best-practices)
11. [Common Mistakes to Avoid](#-common-mistakes-to-avoid)
12. [Learning Roadmap](#-learning-roadmap)
13. [Contributing](#-contributing)
14. [Author](#-author)
15. [License](#-license)

---

## 🎯 About the Project

**OOPS-cpp** is a **structured, practical guide to Object-Oriented Programming in C++**. Every concept is explained through **well-commented, compilable examples** that you can run, modify, and break to truly understand how things work.

Whether you are a university student preparing for exams, a beginner learning C++, or a developer revising fundamentals for interviews, this repo is designed to take you from **"What is a class?"** to **"I can design a clean, extensible system."**

### ✨ Highlights

- ✅ Every OOP concept covered with **dedicated, runnable code**
- ✅ **All five types of inheritance** with diagrams and examples
- ✅ Both **compile-time and runtime polymorphism**
- ✅ Real-world examples (bank accounts, shapes, employees, vehicles)
- ✅ Mini projects that combine multiple concepts
- ✅ Best practices and common pitfalls explained
- ✅ Modern C++ features (`override`, `final`, smart pointers, `nullptr`)

---

## 📚 What You Will Learn

| # | Topic | Key Ideas |
|---|-------|-----------|
| 01 | Classes & Objects | Blueprint vs instance, members, access specifiers |
| 02 | Constructors & Destructors | Default, parameterized, copy, move, initializer lists |
| 03 | Encapsulation | Data hiding, getters/setters, invariants |
| 04 | Abstraction | Abstract classes, interfaces, pure virtual functions |
| 05 | Inheritance | Single, multilevel, multiple, hierarchical, hybrid |
| 06 | Polymorphism | Overloading, overriding, virtual functions, vtable |
| 07 | Operator Overloading | `+`, `==`, `<<`, `[]`, `++`, and more |
| 08 | Friend Functions & Classes | Controlled access to private members |
| 09 | Static Members | Shared data and utility functions |
| 10 | `this` Pointer | Method chaining, self-reference |
| 11 | Dynamic Memory in Classes | Rule of Three / Five / Zero, deep vs shallow copy |
| 12 | Templates in Classes | Generic programming with class templates |
| 13 | Exception Handling | `try`, `catch`, `throw`, custom exceptions |
| 14 | Design Principles | SOLID, composition vs inheritance |

---

## 📂 Repository Structure

```
OOPS-cpp/
│
├── 01_Classes_and_Objects/
│   ├── basic_class.cpp
│   ├── access_specifiers.cpp
│   └── object_arrays.cpp
│
├── 02_Constructors_Destructors/
│   ├── default_constructor.cpp
│   ├── parameterized_constructor.cpp
│   ├── copy_constructor.cpp
│   ├── move_constructor.cpp
│   └── destructor_demo.cpp
│
├── 03_Encapsulation/
│   └── bank_account.cpp
│
├── 04_Abstraction/
│   ├── abstract_class.cpp
│   └── interface_example.cpp
│
├── 05_Inheritance/
│   ├── single_inheritance.cpp
│   ├── multilevel_inheritance.cpp
│   ├── multiple_inheritance.cpp
│   ├── hierarchical_inheritance.cpp
│   └── hybrid_inheritance.cpp
│
├── 06_Polymorphism/
│   ├── function_overloading.cpp
│   ├── function_overriding.cpp
│   ├── virtual_functions.cpp
│   └── pure_virtual.cpp
│
├── 07_Operator_Overloading/
├── 08_Friend_Functions/
├── 09_Static_Members/
├── 10_This_Pointer/
├── 11_Dynamic_Memory/
├── 12_Templates/
├── 13_Exception_Handling/
│
├── Mini_Projects/
│   ├── Library_Management_System/
│   ├── Bank_Management_System/
│   └── Student_Record_System/
│
├── CONTRIBUTING.md
├── LICENSE
└── README.md
```

---

## ⚙️ Getting Started

### Prerequisites

- A C++ compiler supporting **C++17** or later (`g++`, `clang++`, or MSVC)
- Any code editor or IDE (VS Code, CLion, Code::Blocks, Visual Studio)
- Git (optional, for cloning)

### Clone the Repository

```bash
git clone https://github.com/<your-github-username>/OOPS-cpp.git
cd OOPS-cpp
```

### Compile and Run

**Linux / macOS**
```bash
g++ -std=c++17 -Wall -Wextra 05_Inheritance/single_inheritance.cpp -o single
./single
```

**Windows (MinGW)**
```bash
g++ -std=c++17 -Wall -Wextra 05_Inheritance\single_inheritance.cpp -o single.exe
single.exe
```

### Helpful Compiler Flags

| Flag | Purpose |
|------|---------|
| `-std=c++17` | Use the C++17 standard |
| `-Wall -Wextra` | Enable useful warnings |
| `-g` | Add debug info (for `gdb`) |
| `-fsanitize=address` | Catch memory errors at runtime |

---

## 🏛️ The Four Pillars of OOP

```
                    ┌───────────────────────┐
                    │   OBJECT-ORIENTED     │
                    │     PROGRAMMING       │
                    └───────────┬───────────┘
        ┌───────────────┬───────┴───────┬───────────────┐
        ▼               ▼               ▼               ▼
  ENCAPSULATION    ABSTRACTION     INHERITANCE     POLYMORPHISM
  Bundle data &    Hide the "how", Reuse and        One interface,
  methods; hide    show the "what" extend existing  many forms
  internals                        classes
```

| Pillar | One-line meaning | C++ tools |
|--------|------------------|-----------|
| **Encapsulation** | Keep data safe inside the class | `private`, `protected`, getters/setters |
| **Abstraction** | Expose only what is necessary | Abstract classes, pure virtual functions, simple public interfaces |
| **Inheritance** | Build new classes from existing ones | `class Derived : public Base` |
| **Polymorphism** | Same call, different behavior | Overloading, `virtual`, `override` |

---

## 🔍 Core Concepts in Detail

### 1️⃣ Classes and Objects

A **class** is a blueprint. An **object** is a real instance created from it.

```cpp
class Student {
public:
    string name;
    int rollNo;

    void display() const {
        cout << rollNo << " - " << name << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Hamza";
    s1.rollNo = 1;
    s1.display();
}
```

### 2️⃣ Constructors and Destructors

```cpp
class Box {
    int* data;
public:
    Box() : data(new int(0)) {}                 // default
    Box(int v) : data(new int(v)) {}            // parameterized
    Box(const Box& other) : data(new int(*other.data)) {}   // copy (deep)
    ~Box() { delete data; }                     // destructor
};
```

| Type | When it runs |
|------|--------------|
| Default | Object created with no arguments |
| Parameterized | Object created with values |
| Copy | Object created from another object |
| Move | Object created from a temporary (steals resources) |
| Destructor | Object goes out of scope or is deleted |

### 3️⃣ Encapsulation

Protect data and control how it changes.

```cpp
class BankAccount {
    double balance;                         // hidden from outside
public:
    BankAccount() : balance(0) {}

    void deposit(double amt) {
        if (amt > 0) balance += amt;        // validation lives here
    }
    bool withdraw(double amt) {
        if (amt > 0 && amt <= balance) { balance -= amt; return true; }
        return false;
    }
    double getBalance() const { return balance; }
};
```

> 💡 **Why it matters:** the class guarantees `balance` can never become invalid, because no outside code can touch it directly.

### 4️⃣ Abstraction

Show *what* an object does, hide *how*.

```cpp
class Shape {                               // abstract class
public:
    virtual double area() const = 0;        // pure virtual
    virtual ~Shape() = default;
};

class Circle : public Shape {
    double r;
public:
    explicit Circle(double r) : r(r) {}
    double area() const override { return 3.14159 * r * r; }
};
```

Abstraction can also be achieved **without** abstract classes, simply by keeping data `private` and exposing a small set of clean public member functions.

### 5️⃣ Access Specifiers

| Specifier | Same class | Derived class | Outside |
|-----------|:---------:|:-------------:|:-------:|
| `private` | ✅ | ❌ | ❌ |
| `protected` | ✅ | ✅ | ❌ |
| `public` | ✅ | ✅ | ✅ |

### 6️⃣ Static Members

```cpp
class Counter {
public:
    static int count;                       // shared by all objects
    Counter() { ++count; }
    static void show() { cout << count << endl; }
};
int Counter::count = 0;
```

### 7️⃣ Friend Functions

```cpp
class Box {
    int width = 10;
    friend void printWidth(const Box& b);   // can access private members
};
void printWidth(const Box& b) { cout << b.width; }
```

### 8️⃣ The `this` Pointer and Method Chaining

```cpp
class Builder {
    int x = 0, y = 0;
public:
    Builder& setX(int v) { x = v; return *this; }
    Builder& setY(int v) { y = v; return *this; }
};
// Builder b; b.setX(5).setY(10);
```

### 9️⃣ Operator Overloading

```cpp
class Vec {
public:
    int x, y;
    Vec(int x = 0, int y = 0) : x(x), y(y) {}

    Vec operator+(const Vec& o) const { return Vec(x + o.x, y + o.y); }
    bool operator==(const Vec& o) const { return x == o.x && y == o.y; }

    friend ostream& operator<<(ostream& os, const Vec& v) {
        return os << "(" << v.x << ", " << v.y << ")";
    }
};
```

---

## 🧬 Types of Inheritance

### 1. Single Inheritance
One derived class inherits from one base class.
```
A ──▶ B
```
```cpp
class Animal { public: void eat() { cout << "Eating\n"; } };
class Dog : public Animal { public: void bark() { cout << "Barking\n"; } };
```

### 2. Multilevel Inheritance
A chain of inheritance.
```
A ──▶ B ──▶ C
```
```cpp
class Vehicle { public: void start() { cout << "Start\n"; } };
class Car : public Vehicle { public: void drive() { cout << "Drive\n"; } };
class ElectricCar : public Car { public: void charge() { cout << "Charge\n"; } };
```

### 3. Multiple Inheritance
One class inherits from several base classes.
```
A ──┐
    ├──▶ C
B ──┘
```
```cpp
class Printer { public: void print() { cout << "Print\n"; } };
class Scanner { public: void scan()  { cout << "Scan\n"; } };
class AllInOne : public Printer, public Scanner {};
```

### 4. Hierarchical Inheritance
Many classes inherit from one base class.
```
      ┌──▶ B
A ────┤
      └──▶ C
```
```cpp
class Employee { public: string name; };
class Manager   : public Employee {};
class Developer : public Employee {};
```

### 5. Hybrid Inheritance
A combination of the above, such as the **diamond**.
```
        Person
       ┌──┴──┐
   Student  Employee
       └──┬──┘
   TeachingAssistant
```
```cpp
class Person { public: string name; };
class Student  : virtual public Person {};
class Employee : virtual public Person {};
class TeachingAssistant : public Student, public Employee {};
```
> ⚠️ **The Diamond Problem:** without `virtual` inheritance, `TeachingAssistant` would contain two copies of `Person`. Virtual inheritance ensures only one shared copy.

### Inheritance Comparison

| Type | Structure | Common use |
|------|-----------|------------|
| Single | A → B | Simple specialization |
| Multilevel | A → B → C | Layered functionality |
| Multiple | A, B → C | Combining capabilities / interfaces |
| Hierarchical | A → B, C, D | Shared behavior, many variants |
| Hybrid | Mix | Complex designs (use carefully) |

### Inheritance Modes

| Base member | `public` inheritance | `protected` inheritance | `private` inheritance |
|-------------|:-------------------:|:----------------------:|:---------------------:|
| public | public | protected | private |
| protected | protected | protected | private |
| private | inaccessible | inaccessible | inaccessible |

---

## 🎭 Polymorphism Explained

### Compile-Time Polymorphism (Static Binding)

Resolved by the compiler.

**Function overloading**
```cpp
int add(int a, int b)       { return a + b; }
double add(double a, double b) { return a + b; }
```

**Operator overloading** (see above).

### Runtime Polymorphism (Dynamic Binding)

Resolved at runtime using **virtual functions** and the **vtable**.

```cpp
class Animal {
public:
    virtual void sound() const { cout << "Some sound\n"; }
    virtual ~Animal() = default;
};
class Dog : public Animal {
public:
    void sound() const override { cout << "Woof\n"; }
};
class Cat : public Animal {
public:
    void sound() const override { cout << "Meow\n"; }
};

int main() {
    Dog d; Cat c;
    Animal* a[] = { &d, &c };
    for (Animal* p : a) p->sound();     // Woof, Meow
}
```

### How Virtual Dispatch Works

```
Object (Dog)                 vtable for Dog
┌─────────────┐             ┌────────────────────┐
│ vptr ───────┼────────────▶│ &Dog::sound        │
│ data...     │             │ &Dog::~Dog         │
└─────────────┘             └────────────────────┘
```

Each polymorphic object holds a hidden pointer (`vptr`) to its class's table of virtual functions. The call is resolved by looking up that table at runtime.

### Overloading vs Overriding

| | Overloading | Overriding |
|---|-------------|------------|
| Binding | Compile time | Runtime |
| Scope | Same class | Base and derived class |
| Signature | Must differ | Must be identical |
| Needs `virtual` | No | Yes |

---

## 🛠️ Mini Projects

| Project | Concepts used |
|---------|---------------|
| **Bank Management System** | Encapsulation, inheritance (Savings/Current accounts), polymorphism |
| **Library Management System** | Classes, vectors of objects, file handling |
| **Student Record System** | Constructors, static members, operator overloading |
| **Shape Calculator** | Abstraction, runtime polymorphism, pure virtual functions |
| **Employee Payroll** | Hierarchical inheritance, virtual functions |

---

## 🏆 Best Practices

- ✅ Make data members `private` and expose behavior, not raw data
- ✅ Always declare a **virtual destructor** in polymorphic base classes
- ✅ Use `override` (and `final` when appropriate) on overriding functions
- ✅ Mark non-modifying functions `const`
- ✅ Prefer **member initializer lists** over assignment in constructors
- ✅ Use `explicit` on single-argument constructors
- ✅ Follow the **Rule of Zero**; if you manage resources, follow the **Rule of Five**
- ✅ Prefer **composition over inheritance** when the relationship is "has-a"
- ✅ Prefer smart pointers (`unique_ptr`, `shared_ptr`) over raw `new`/`delete`
- ✅ Use inheritance only for true **"is-a"** relationships

### SOLID Principles

| Letter | Principle | Idea |
|:------:|-----------|------|
| **S** | Single Responsibility | A class should have one reason to change |
| **O** | Open/Closed | Open for extension, closed for modification |
| **L** | Liskov Substitution | Derived objects must be usable wherever base objects are |
| **I** | Interface Segregation | Prefer small, focused interfaces |
| **D** | Dependency Inversion | Depend on abstractions, not concrete classes |

---

## ⚠️ Common Mistakes to Avoid

| Mistake | Why it is a problem | Fix |
|---------|--------------------|-----|
| Non-virtual base destructor | Derived destructor is skipped, causing leaks | `virtual ~Base() = default;` |
| Shallow copy of pointers | Double delete / dangling pointers | Implement deep copy or use smart pointers |
| Forgetting `override` | Typos silently create a new function | Always write `override` |
| Object slicing | Derived part is cut off when passed by value | Pass by reference or pointer |
| Calling virtual functions in constructors | Derived version is not called | Avoid it |
| Overusing multiple inheritance | Ambiguity and diamond problem | Use interfaces or composition |
| Public data members | Breaks encapsulation | Make them private |

---

## 🗺️ Learning Roadmap

```
Classes & Objects
      │
      ▼
Constructors & Destructors
      │
      ▼
Encapsulation  ──▶  Abstraction
      │
      ▼
Inheritance (all 5 types)
      │
      ▼
Polymorphism (static + dynamic)
      │
      ▼
Operator Overloading, Friends, Static, this
      │
      ▼
Dynamic Memory & Rule of Three/Five
      │
      ▼
Templates & Exception Handling
      │
      ▼
SOLID Principles & Design Patterns
      │
      ▼
Build Real Projects 🚀
```

### Suggested Next Steps

- Learn the **STL** (vectors, maps, algorithms) and use it with your classes
- Study **design patterns**: Singleton, Factory, Observer, Strategy
- Explore **move semantics** and **smart pointers** in depth
- Practice with **unit testing** (Google Test / Catch2)

---

## 🤝 Contributing

Contributions are welcome and appreciated!

1. **Fork** the repository
2. **Create** a branch: `git checkout -b feature/new-example`
3. **Commit** your changes: `git commit -m "Add observer pattern example"`
4. **Push** to the branch: `git push origin feature/new-example`
5. **Open** a Pull Request

**Guidelines**
- Keep examples small, focused, and well commented
- Make sure code compiles with `-std=c++17 -Wall -Wextra` without warnings
- Follow the existing folder and naming style

---

## 👨‍💻 Author

**Hamza Toufeeque**
BS Computer Science Student, PUCIT, Lahore, Pakistan

- 🔗 GitHub: [@your-github-username](https://github.com/your-github-username)
- 💼 LinkedIn: [your-linkedin](https://linkedin.com/in/your-linkedin)

---

## 📄 License

This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for details.

---

<div align="center">

### ⭐ If you found **OOPS-cpp** helpful, please give it a star! ⭐

*Happy coding!* 💻

</div>

