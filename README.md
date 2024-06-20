# Findroots
## Description
Simple code which calculates the roots given for the general function of a quadratic equation. The code can be run by calling the exe on a terminal followed by the 3 parameters of a quadratic formula (a, b and c).

The code prints the roots with the format {r1, r2}. If there are no roots for those specific parameters, "{ }" will be printed.

### Examples
***Two real and different roots (positive discriminant)***
1.  a = 1 b = -5 c = 6
    - r1 = 3 r2= 2
2.  a = 2 b = -3 c = 1
    - r1 = 3 r2= 0.5

***Two real and equal roots (cero discriminant)***
1.  a = 1 b = -4 c = 4
    - r = 2
2.  a = 4 b = -12 c = 9
    - r = 1.5

***Two complex and imaginary roots (negative discriminant)***
1.  a = 1 b = 1 c = 1
2.  a = 2 b = 2 c = 5

## Algorithm
The function "roots" receives 3 doubles and proceeds to calculate the discriminant for the equation. The discrimant allows us to figure out if and equation has 2 different real roots, 2 equal real roots, or 2 complex imaginary roots. 

## Configuration (this was done on Windows 10)
### Install C++ and CMake
[Recommended tutorial for C++ installation](https://www.youtube.com/watch?v=DMWD7wfhgNY)

[Recommended tutorial for CMake installation](https://www.youtube.com/watch?v=8_X5Iq9niDE)

### How to run the code
Once CMake and C++ have been correctly configured, you will need to set up the executable with CMake. 
Create the CMakeLists.txt or just clone the one from this repository.
In the terminal and on the same directory as the cpp file. Copy the following code, this will generate the CMake build files.
```
cmake -S . -B build -G "MinGW Makefiles"
```
Then move to the created build directory with 
```
cd .\build\
```
and then build the project with
```
cmake --build
```
Your project has been built and you can now execute it with **.\findroots.exe [a] [b] [c]**
