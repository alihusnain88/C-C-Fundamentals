// Write a program to reverse a string using recursion.
#include <iostream>
#include <string.h>
using namespace std;

void reverseString (char str[], int start, int end);

int main(){
    char array[100];
    cout <<"Enter string : "<<endl;
    fgets(array,100,stdin); // Null character added

    int size = strlen(array);

    reverseString(array, 0, size-2);
    cout <<"After reversing the string : "<<endl;
    puts(array);  // cout <<array;
    
    return 0;
}
void reverseString (char str[], int start, int end){
    if(start >= end){
        // do nothing
    }
    else{
        char *ptrStart = &str[start];
        char *ptrEnd = &str[end];
        
        swap(*ptrStart, *ptrEnd);  
        //  swap(str[start], str[end]); ----> This will also actually swap the characters in memory (means we can do the same thing without pointers)
        reverseString(str, start+1, end-1);
    }
}
