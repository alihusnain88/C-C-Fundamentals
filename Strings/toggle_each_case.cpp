// Write a program to toggle case of each character of a string.
// Convert each character to opposite case
// (Using pointers)
#include <iostream>
using namespace std;

int main(){
    char array[100];
    cout <<"Enter string :"<<endl;
    fgets(array, 100, stdin);

    char *ch = array; // Initialize a pointer pointing to the 0th element of the array

    while(*ch){  // The loop will automatically terminate when null character ('\0') reaches because it will be treated as 0 and condition will become false

        if(*ch >= 'A' && *ch <= 'Z'){
            *ch = *ch + 32;
        }

        else if(*ch >= 'a' && *ch <= 'z'){
            *ch = *ch - 32;
        }
        
        ch++;
    }
    cout <<"In lower case :"<<endl;
    cout <<array;
    return 0;
}