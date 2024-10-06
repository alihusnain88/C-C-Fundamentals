// Write a program to convert lowercase string to uppercase.
// (Using pointers) and (using while approach)
#include <iostream>
using namespace std;

int main(){
    char array[100];
    cout <<"Enter string :"<<endl;
    fgets(array, 100, stdin);

    char *ch = array; // Initialize a pointer pointing to the 0th element of the array

    while(*ch){  // The loop will automatically terminate when null character ('\0') reaches because it will be treated as 0 and condition will become false

        if(*ch >= 'a' && *ch <= 'z'){
            *ch = *ch - 32;
        }
        ch++;
    }
    cout <<"In upper case :"<<endl;
    cout <<array;


    
    return 0;
}