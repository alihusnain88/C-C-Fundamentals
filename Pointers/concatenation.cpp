// Write a program to concatenate two strings using pointers.
#include <iostream>
// #include <cstring>
using namespace std;

int main(){
    char  str1[100] = "Muhammad Ali ";
    char  str2[100] = "Husnain"; 
    char  concatenate[300];

    cout <<"Before concatenation :"<<endl;

    cout <<"String 1 = "<<endl;
    cout <<str1<<endl;

    cout <<"String 2 = "<<endl;
    cout <<str2<<endl<<endl;

    
    // With pointers
    char *ptr1 = str1;
    char *ptr2= str2;

    while(*ptr1){
        ptr1++; //Move the pointer to the place where to add next string
    }
    while(*(ptr1++) = *(ptr2++)); //Add the second string to first one

    cout <<"After concatenation :"<<endl;

    cout <<"String 1 = "<<endl;
    cout <<str1<<endl;

    cout <<"String 2 = "<<endl;
    cout <<str2<<endl;

    return 0;
}