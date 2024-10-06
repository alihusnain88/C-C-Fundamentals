// Write a program to convert lowercase string to uppercase.
// Using built-in function 
#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char array[100];
    cout <<"Enter string :"<<endl;
    fgets(array, 100, stdin);

    cout <<"To upper-case using built-in function :"<<endl; 
    strupr(array);
    
    cout <<array;
    
    return 0;
}