

# EXPERIMENT 12: C++ CONSTRUCTORS AND DESTRUCTORS PROGRAMS IN C++

## AIM
To understand and implement **constructors** and **destructors** in C++ and demonstrate their usage through example programs.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY

Constructors and destructors are special member functions of a class that are automatically invoked when objects are created and destroyed respectively. They are essential for initializing object state, acquiring resources, and releasing resources, enabling safe and predictable object lifecycle management.

### Constructor
- A **constructor** has the **same name as the class** and **no return type**.
- It is automatically invoked when an object is created.
- Constructors are used to initialize data members and allocate or acquire resources if necessary.
- **Types of constructors**:
  1. **Default Constructor** — takes no arguments; provides default initialization.
  2. **Parameterized Constructor** — accepts parameters to initialize an object with specific values.
  3. **Copy Constructor** — constructs a new object as a copy of an existing object.
  4. **Move Constructor** (modern C++) — transfers resources from a temporary object (not covered in examples below).

### Destructor
- A **destructor** has the same name as the class prefixed with a tilde `~` and **no return type or parameters**.
- It is automatically called when an object goes out of scope or is explicitly deleted.
- Destructors are used to free resources (memory, file handles, network sockets) and perform cleanup.
- There can be **only one destructor per class** and it **cannot be overloaded**.

### Importance
- Constructors ensure objects start life in a valid state.
- Destructors ensure resources are released deterministically (RAII — Resource Acquisition Is Initialization).
- Proper use prevents resource leaks, undefined behavior, and makes code safer and easier to maintain.

---

## SYNTAX

```cpp
class ClassName {
public:
    // Default constructor
    ClassName();

    // Parameterized constructor
    ClassName(int a, double b);

    // Copy constructor
    ClassName(const ClassName &other);

    // Destructor
    ~ClassName();

private:
    int data;
};
```

## EXPERIMENT 12(A): STUDENT CLASS WITH CONSTRUCTOR AND MEMBER FUNCTIONS IN C++

### ALGORITHM

1. **Start** the program.
2. **Define** a class `Student` with the following **private** data members:
   - `name` (string)  
   - `r_no` (long long int)
3. **Add public member functions**:
   - Default constructor to initialize `name` to `"[USER]"` and `r_no` to `0`.
   - `set_name(string x)` to assign a name to the student.
   - `set_r_no(long long int x)` to assign a roll number to the student.
   - `display()` to print the name and roll number of the student.
4. **In the `main()` function**, create an object `s` of the `Student` class.
5. **Call** `s.set_name("Abhisar Behera")` to set the student's name.
6. **Call** `s.set_r_no(24070123002LL)` to set the student's roll number.
7. **Call** `s.display()` to print the student's details.
8. **End** the program.

## EXPERIMENT 12(B): STUDENT CLASS WITH CONSTRUCTOR AND OUT-OF-CLASS MEMBER FUNCTION DEFINITIONS

### ALGORITHM

1. **Start** the program.
2. **Define** a class `Student` with the following **private** data members:
   - `name` (string)  
   - `r_no` (int)
3. **Add public member functions**:
   - Default constructor to initialize `name` to `"[USER]"` and `r_no` to `0`.
   - `set_name(string x)` to assign a name to the student.
   - `set_r_no(int x)` to assign a roll number to the student (**defined outside the class using scope resolution operator `::`**).
   - `display()` to print the name and roll number (**defined outside the class using `::`**).
4. **In the `main()` function**, create an object `s` of the `Student` class.
5. **Call** `s.display()` to print the default values of the student object.
6. **End** the program.

## EXPERIMENT 12(C): DATE CLASS WITH PARAMETERIZED CONSTRUCTOR

### ALGORITHM

1. **Start** the program.
2. **Define** a class `Date` with the following **private** data members:
   - `day` (int)  
   - `month` (int)  
   - `year` (int)
3. **Add a public parameterized constructor** `Date(int x, int y, int z)` that:
   - Initializes `day`, `month`, and `year` to `0`.
   - Checks if `x > 31` or `y > 12`; if so, prints `"Invalid date figure"` and returns.
   - Otherwise, assigns `day = x`, `month = y`, and `year = z`.
4. **Add a public member function** `display()` to print the date in `day/month/year` format.
5. **In the `main()` function**:
   - Read integer inputs `d`, `m`, `y` from the user.
   - Create an object `userDate` of class `Date` with the input values.
   - Call `userDate.display()` to print the date.
6. **End** the program.

## EXPERIMENT 12(D): STUDENT CLASS WITH COPY CONSTRUCTOR

### ALGORITHM

1. **Start** the program.
2. **Define** a class `Student` with the following **private** data members:
   - `name` (string)  
   - `age` (int)
3. **Add public member functions**:
   - A **parameterized constructor** `Student(string x, int y)` to initialize `name` and `age`.
   - A **copy constructor** `Student(const Student &a)` to copy the values of `name` and `age` from another object and print `"Copy constructor invoked!"`.
   - `display()` to print the `name` and `age` of the student.
4. **In the `main()` function**:
   - Create an object `s1` of class `Student` using the parameterized constructor.
   - Create another object `s2` as a **copy of `s1`** (copy constructor invoked).
   - Print `"Original object"` and call `s1.display()`.
   - Print `"Copied object"` and call `s2.display()`.
5. **End** the program.

## EXPERIMENT 12(E): DESTRUCTOR DEMONSTRATION IN C++

### ALGORITHM

1. **Start** the program.
2. **Define** a global variable `count` and initialize it to `0`.
3. **Define** a class `destruct` with:
   - A **constructor** that:
     - Increments `count` by 1.
     - Prints `"Total objects created: "` followed by the current `count`.
   - A **destructor** that:
     - Prints `"Total objects destroyed: "` followed by `count - 1`.
     - Decrements `count` by 1.
4. **In the `main()` function**:
   - Create multiple objects `d1, d2, d3, d4` of class `destruct`.
   - The constructor is automatically invoked for each object creation, updating and printing `count`.
   - At the end of `main()`, the destructor is automatically called for each object in reverse order of creation, updating and printing `count`.
5. **End** the program.
# Experiment_12
