// C++ program to dynamically allocate an integer, a character and a string.
#include <iostream>
// #include <string>
using namespace std;

int main(){
    
    int *intptr = new int;
    char *chptr = new char;
    string *strptr = new string;

    *intptr = 5;
    *chptr = 'c';
    *strptr = "Ali Husnain";

    cout << *intptr <<endl;
    cout << *chptr <<endl;
    cout << *strptr <<endl; 

    return 0;
}