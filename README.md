#  7-Segment Display Decoder (C++)

##  Overview
This project is a simple C++ program that simulates a **7-segment display decoder**.  
It takes a **7-digit binary input** and determines which numeric digit (0–9) it represents.

##  Features
- Accepts only **7-digit binary input**
- Validates input (only `0` and `1` allowed)
- Matches binary pattern with **7-segment digit mapping**
- Displays the corresponding digit (0–9)
- Runs continuously using a loop

##  How It Works
Each digit (0–9) has a predefined **7-segment binary pattern**:

| Digit | Binary Pattern |
|------|--------------|
| 0 | 1111110 |
| 1 | 0110000 |
| 2 | 1001101 |
| 3 | 1111001 |
| 4 | 0110011 |
| 5 | 1011011 |
| 6 | 1011111 |
| 7 | 1110000 |
| 8 | 1111111 |
| 9 | 1110011 |

The program compares user input with these patterns to identify the digit.

##  Example
##  Invalid Input Handling
- If input is not 7 digits → shows error  
- If input contains characters other than 0 or 1 → shows error  
- If pattern doesn't match → displays message  

##  Requirements
- C++ Compiler (GCC / Dev C++ / CodeBlocks / VS Code)
  

##  How to Run
1. Compile the program:

##  Note
This project is built for learning:
- Loops  
- String handling  
- Input validation  
- Basic pattern matching  

## Author
Siraj u din  
BS Computer Science Student  
FAST NUCES Peshawar
