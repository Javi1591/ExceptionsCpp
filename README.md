# Summary
This program prompts the user to enter five test scores, validates each score, removes the lowest value, and calculates the average of the remaining four scores. It demonstrates fundamental function usage, input validation, and basic logic operations commonly used in introductory programming assignments.

# Program Behavior
- The program asks the user to enter five individual test scores.
- Each score is validated to ensure it falls between 0 and 100.
- After all scores are entered, the program identifies the lowest score.
- The lowest score is dropped, and the average of the four remaining scores is calculated.
- The results (average and lowest score) are displayed with two-decimal precision.

# Key Concepts Demonstrated
- Function definitions and prototypes
- Passing arguments by reference
- Input validation with loops
- Using functions to modularize logic
- Calculating totals and averages
- Conditional comparisons to find minimum values
- Formatted output using <iomanip>

# How to Compile and Run
## Using g++ (Linux, MacOS, Windows with MinGW)
g++ -o lowestScoreDrop nazarioCPP16.cpp
./lowestScoreDrop

## Using Visual Studio Developer PowerShell
cl nazarioCPP16.cpp
lowestScoreDrop.exe
