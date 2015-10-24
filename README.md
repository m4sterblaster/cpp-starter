# C++ - Crash Course 

* 01-14: Code created following Derek Banas' great tutorial: https://youtu.be/Rub-JsjMhWY
* 15: Code created following ICT Tutorials C++ Part 72-75: https://www.youtube.com/watch?v=qRJUPN0NWRU&index=74&list=PL792F8AED9E6F3E9F

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

