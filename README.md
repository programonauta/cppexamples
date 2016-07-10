# C++ programs Examples

On this repository you can find some basic examples in C++

## History

I started this repository when I attended the course [C++ for C Programmers](https://www.coursera.org/learn/c-plus-plus-a/home/welcome "Coursera").
Then, I decided use this as a quick reference when need to use some features that are normally confused, like pointers, lists, casting, etc.
## Organization
Each subdirectory has one or more source codes, someones has C and C++ files to show differences between them.=
## How to compile and run
### Compile
Just use `g++ <source file>.cpp -o <executable>` 
To generate debug information, just use `-g` option
### Run
`./<executable>`

`lldb ./<executable>` To debug

## Source codes
#### Assign
Some basic differences between C and C++

* Files: 
 * `assign1.c`
 * `assign1.cpp`
* Subjects
 * Comments
 * `<iostream>` and `namespace`
 * `<vector>`
 * `const` instead `define`
 * `inline`

#### Dynamic Array
Create multidimensional arrays dynamicaly

* File:
 * dyn-array.cpp
* Subjects
 * `new` and `delete` chuncks of memory
 * pointers to array
