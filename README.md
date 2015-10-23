h1 C++ - Crash Course

Code created following Derek Banas' great tutorial: [https://www.youtube.com/watch?v=Rub-JsjMhWY]

h2 Pre-Requisit
* Install c/c++ compiler (on windows): [https://www.youtube.com/watch?v=lqzuR2USKRM]


h3 Random Notes

Note on windows, instead a.out, g++ compiles to a.exe by default. It's runnable.

Check your version: it would occur that gcc 4.8.1 supports c++11 standard but somehow the minGW does not include the string conversion function ('stoi' was not declared) which needs to be patched. [http://stackoverflow.com/questions/16132176/problems-with-stdstoi-not-working-on-mingw-gcc-4-7-2]. This patch enables the following list of C++11 functions and templates in the std namespace: stoi, stol, stoul, stoll, stof, stod, stold, to_string, to_wstring

