// Write a program to check if a given string is a palindrome or not using recursion.
#include <iostream>
#include <string.h>
using namespace std;

bool palidromeOrNot(char str[], int start, int end);

int main(){

    char arr[100];
    cout <<"Enter string : "<<endl;
    fgets(arr, 100, stdin);

   
    while(arr[0] == '\n'){
        cout <<"You entered nothing ! Enter something : "<<endl;
        fgets(arr, 100, stdin);
    }

    int size = strlen(arr);

   if(palidromeOrNot(arr, 0, size-2)){ // If functions returns 1, if condition becomes true
          cout << "This is a palindrome !"<<endl;
   }
   else{ // If function returns 0, if condition becomes false
          cout << "Not a palindrome !"<<endl;
   }
    
    return 0;
}
bool palidromeOrNot(char str[], int start, int end){
    if(start >= end){
        // Do nothing 
        // It is the case when we want our recursive function to stop 
    }
    else{
        if(str[start] != str[end]){
            return false;
        }
        palidromeOrNot(str, start+1, end-1);
    }
    return true;
}
