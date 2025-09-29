

# EXPERIMENT 11: C++ CLASSES AND OBJECTS PROGRAMS IN C++

## AIM
To understand the concept of classes and objects in C++ and implement programs that demonstrate the creation, usage, and manipulation of class members.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY

In C++, a **class** is a user-defined data type that acts as a blueprint for creating objects. It encapsulates data members (variables) and member functions (methods) into a single unit, enabling the principles of **Object-Oriented Programming (OOP)** such as **encapsulation**, **abstraction**, **inheritance**, and **polymorphism**.

- **Data Members** – Variables that hold the state (attributes) of the object.
- **Member Functions** – Functions that operate on the data members and define the behavior of the object.

An **object** is an instance of a class. Multiple objects can be created from the same class, each with its own separate copy of the class's non-static data members but sharing the same structure and behavior.

**Key Characteristics:**
1. **Encapsulation** – Bundling of data and functions into a single unit to protect internal states.
2. **Access Specifiers** – Control how members are accessed:
   - `public` – Accessible from anywhere.
   - `private` – Accessible only within the class.
   - `protected` – Accessible within the class and derived classes.
3. **Constructor** – A special function with the same name as the class, automatically called when an object is created, used for initialization.
4. **Destructor** – A special function with the same name as the class prefixed by `~`, automatically called when an object is destroyed, used for cleanup.
5. **Member Function Definition** – Can be done inside the class (inline) or outside the class using the scope resolution operator `::`.

---

### **Generic Syntax of a Class in C++**

```cpp
class ClassName {
private:
    // Private data members

public:
    // Public data members

    // Constructor
    ClassName();

    // Destructor
    ~ClassName();

    // Member functions
    void functionName();
};
```

## EXPERIMENT 11(A): BASIC CLASS AND OBJECT IMPLEMENTATION IN C++

### ALGORITHM

1. **Start** the program.
2. **Define** a class `Student` with the following **public** data members:
   - `name` (string)  
   - `branch` (string)  
   - `subject` (string)  
   - `year` (string)  
   - `result` (float)
3. **In the `main()` function**, declare an object `s1` of the `Student` class.
4. **Assign** appropriate values to the data members of `s1`:
   - Set `name` to `"Abhisar Behera"`.
   - Set `branch` to `"Electronics and Telecommunication"`.
   - Set `subject` to `"CPP"`.
   - Set `year` to `"2025"`.
   - Set `result` to `8.59`.
5. **Display** the values of all data members using `cout` statements, each on a new line.
6. **End** the program.

## EXPERIMENT 11(B): CLASS WITH MULTIPLE OBJECTS IN C++

### ALGORITHM

1. **Start** the program.
2. **Define** a class `car` with the following **public** data members:
   - `carName` (string)  
   - `carModel` (string)  
   - `carYear` (string)
3. **In the `main()` function**, declare two objects: `car1` and `car2` of the `car` class.
4. **Input details for `car1`**:
   - Prompt and read `carName`.
   - Prompt and read `carModel`.
   - Prompt and read `carYear`.
5. **Input details for `car2`**:
   - Prompt and read `carName`.
   - Prompt and read `carModel`.
   - Prompt and read `carYear`.
6. **Display** the details of `car1`:
   - Print `"Car 1"` heading.
   - Print `Name`, `Model`, and `Year` of `car1`.
7. **Display** the details of `car2`:
   - Print `"Car 2"` heading.
   - Print `Name`, `Model`, and `Year` of `car2`.
8. **End** the program.

## EXPERIMENT 11(C): CLASS WITH PRIVATE DATA MEMBERS AND MEMBER FUNCTIONS

### ALGORITHM

1. **Start** the program.
2. **Define** a class `Rectangle` with:
   - **Private data members**:
     - `length` (int)  
     - `width` (int)  
   - **Public member functions**:
     - `set_length_width(int x, int y)` – sets the values of `length` and `width`.
     - `rect_area()` – returns the product of `length` and `width` (area).
3. **In the `main()` function**, declare two objects: `rect1` and `rect2` of the `Rectangle` class.
4. **For Rectangle 1**:
   - Prompt the user to enter length and width in meters (space-separated).
   - **If** either length or width ≤ 0, display `"Invalid dimensions!"` and terminate the program.
   - **Else if** length equals width:
     - Display `"The given input corresponds to a square"`.
     - Calculate and display the area as `length * length`.
   - **Else**:
     - Call `set_length_width()` for `rect1` with the entered values.
     - Call `rect_area()` and display the result as `"The area of the rectangle 1: X sq. mtr"`.
5. **For Rectangle 2**:
   - Prompt the user to enter length and width in meters (space-separated).
   - **If** length equals width:
     - Display `"The given input corresponds to a square"`.
     - Calculate and display the area as `length * length`.
   - **Else**:
     - Call `set_length_width()` for `rect2` with the entered values.
     - Call `rect_area()` and display the result as `"The area of the rectangle 2 is X sq. mtr"`.
6. **End** the program.

## EXPERIMENT 11(D): CLASS IMPLEMENTATION OF A SIMPLE CALCULATOR

### ALGORITHM

1. **Start** the program.
2. **Define** a class `Calculator` with:
   - **Private data members**:
     - `num_1` (float)  
     - `num_2` (float)  
     - `sum` (int) – not used in this program.  
   - **Public member functions**:
     - `get_num(int a, int b)` – stores the given numbers into `num_1` and `num_2`.
     - `addition()` – returns the sum of `num_1` and `num_2`.
     - `subtraction()` – returns the difference between `num_1` and `num_2`.
     - `multiplication()` – returns the product of `num_1` and `num_2`.
     - `division()` – returns the quotient of `num_1` divided by `num_2`.
3. **In the `main()` function**:
   - Declare a `Calculator` object named `calc`.
   - Declare two variables `a` and `b` (float).
4. **Prompt** the user to enter two numbers `a` and `b` (space-separated) and read their values.
5. **Call** `calc.get_num(a, b)` to store the values in the calculator.
6. **Display**:
   - `"Addition:"` followed by the integer part of the sum.
   - `"Subtraction:"` followed by the integer part of the difference.
   - `"Multiplication:"` followed by the product.
7. **For Division**:
   - **If** `b` is not zero:
     - Display `"Division:"` followed by the quotient.
   - **Else**:
     - Display `"Division: Division by zero is undefined"`.
8. **End** the program.

## EXPERIMENT 11(E): CLASS WITH PRIVATE DATA AND FUNCTION FOR CUBE VOLUME

### ALGORITHM

1. **Start** the program.
2. **Define** a class `Cube` with:
   - **Private data member**:
     - `side` (float) – stores the length of the cube's side.
   - **Public member functions**:
     - `set_side(float s)` – sets the value of `side`.
     - `get_side()` – returns the value of `side`.
3. **Define** a function `cube_volume(Cube c)` **outside** the class that:
   - Uses the `get_side()` method to access `side`.
   - Calculates the cube's volume as:  
     **Volume = side × side × side**
   - Returns the calculated volume.
4. **In the `main()` function**:
   - Declare a `Cube` object named `cube`.
   - Declare a variable `side` (float).
5. **Prompt** the user to enter the side length of the cube.
6. **Call** `cube.set_side(side)` to store the cube's side length.
7. **Call** `cube_volume(cube)` and display the result with the message:  
   `"Volume using method inside the class: <calculated volume>"`.
8. **End** the program.
