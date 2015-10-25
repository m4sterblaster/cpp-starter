# C++ - Crash Course 

There are loads of resources out there teaching you how to get started on cpp, esp on youtube if you are the kind of learner who learn best wih videos! I've written this repo based on multiple videos and free learning resources out there, to spread more free learnings! Enjoy this c++ crash course.

Watch the following video when you run code with the specified prefix:

* 01-14: Code created following Derek Banas' great tutorial: https://youtu.be/Rub-JsjMhWY
* 15: Code created based on ICT Tutorials C++ Part 72-75: https://www.youtube.com/watch?v=qRJUPN0NWRU&index=74&list=PL792F8AED9E6F3E9F
* 16: Code created based on mycodeschool's pointers and (2D) arrays tutorial: https://youtu.be/sHcnvZA2u88

## Pre-Requisit
* Install c/c++ compiler (on windows): https://www.youtube.com/watch?v=lqzuR2USKRM

## Usage
Once you have installed the compiler and opened a command prompt as per the tutorial in the pre-requisit section: 
* g++ <filename>
* a.exe
* the first command will compile to an a.exe output and running the a.exe will show you the results of each program (per file)

### Random Notes

Note on windows, instead a.out, g++ compiles to a.exe by default. It's runnable.

Check your version: it would occur that gcc 4.8.1 supports c++11 standard but somehow the minGW does not include the string conversion function ('stoi' was not declared) which needs to be patched. [http://stackoverflow.com/questions/16132176/problems-with-stdstoi-not-working-on-mingw-gcc-4-7-2]. This patch enables the following list of C++11 functions and templates in the std namespace: stoi, stol, stoul, stoll, stof, stod, stold, to_string, to_wstring

