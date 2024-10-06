// Write a program to copy one string to another string.
#include <iostream>
using namespace std;

int main(){
    char arr[100];
    char copy[100];


    cout <<"Enter string :"<<endl;
    fgets(arr, 100, stdin);

    int i=0;
    while(arr[i] != '\0'){
        copy[i] = arr[i];
        i++;
    }
    copy[i] = '\0';

    cout <<"Copy of string : "<<endl;
    cout <<copy; 

    return 0;
}