# Summary
This program demonstrates the use of classes, inheritance, and custom exception handling to validate employee data. It models an Employee and a ProductionWorker, enforcing rules on employee numbers, shift assignments, and hourly pay rates. Several test cases are executed to show how valid and invalid data is handled through structured exception mechanisms.

# Program Behavior
- The program defines an Employee base class and a ProductionWorker derived class.
- Each class contains validation logic for its data members, such as employee number ranges, acceptable shift values, and non-negative pay rates.
- Custom exception classes are used to signal invalid input.
- The main function runs four test cases:
  - Valid data
  - Invalid employee number
  - Invalid shift
  - Invalid pay rate
- The program catches and reports errors for each invalid case while confirming successful object creation for valid data.

# Key Concepts Demonstrated
- Object-oriented programming with classes and inheritance
- Constructor initialization and validation
- Custom exception class creation and usage
- Encapsulation through private members and public mutators/accessors
- Using try/catch blocks to safely test object creation
- Modular design using a separate test function

# How to Compile and Run
## Using g++ (Windows MinGW, MacOS, Linux)
g++ -o employeeApp nazarioCPP216.cpp
./employeeApp

## Using Visual Studio Developer PowerShell
cl nazarioCPP216.cpp
employeeApp.exe
