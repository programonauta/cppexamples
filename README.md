# C++ programs Examples

On this repository you can find some basic examples in C++

## History

I started this repository when I attended the course [C++ for C Programmers](https://www.coursera.org/learn/c-plus-plus-a/home/welcome "Coursera").
Then, I decided use this as a quick reference when need to use some features that are normally confused, like pointers, lists, casting, etc.
## Organization
Each subdirectory has one or more source codes, someones has C and C++ files to show differences between them.
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

* File
 * dyn-array.cpp
* Subjects
 * `new` and `delete` chuncks of memory
 * pointers to array

#### Inheritance
Basic examples of inheritance:
 Shape -> Rectangle -> Square
 Shape -> Triangle

* File
 * inheritance.cpp
* Subjects
 * Inheritance
 * Derived classes
 * Constructors

#### Inner block
Shows the "value" of a variable inside a block

* File
 * innerblock.c

#### IO Example
A very simple examples of IO: read and write files, `cin` and `cout`

* Files
 * ioexample.cpp
 * readFile.cpp
* Subjects
 * `namespace std`
 * `cout`
 * `cin`
 * `ifstream`
 * `ofstream`

#### List
Chaining list`

* File
 * list.cpp
* Subjects
 * constructor
 * destructor
 * memory allocation
 * pointers

#### Point Class
These examples use classes to store multidimensional points. 
Using overloading to allow basic operations with points as display, add and multiply

The pointAtt.cpp file shows classes inheritence, including a new attribute on the new Class derived from Point Class

Here there is an example on how separate header and implementation files of a Class

to run just execute `g++ main.cpp point.cpp -o main -std=c++11` include option `-g` to debug

Or you can run `make` to compile and generate executable file `main`

 * Files
  * point.h
  * point.cpp
  * pointAtt.cpp
  * main.cpp
  * Makefile
* Subjects
 * Classes
 * `ostream`
 * Operators overloading
 * Dynamic allocation
 * `<vector>`
 * Inheritance
 * Makefile

#### Template
Use of template. You don't need to worry about convertions

* Files
 * copyVector.cpp
 * template.cpp
* Subjects
 * template
 * Casting

#### Type def
Example of how to define a varible type. 

* File
 * typedef.cpp
* Subjects
 * `typedef'
 * `template`
 * Casting
 * Operators overloading 

#### Two functions, same name
This example shows how to use two functions with same name. The only difference is the parameters types.

* Files
 * swap.c
 * swap.cpp
* Subjects
 * `inline`
 * Use two different functions with same name


