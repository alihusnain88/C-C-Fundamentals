// Write a program to check whether a string is palindrome or not.
#include <iostream>
using namespace std;

int main(){
    char array[100];
    char copy[100];

    cout <<"Enter string :"<<endl;
    fgets(array, 100, stdin);

    int j=0;
    int i=0;    
    while(copy[j] = array[i]){ // This while loop will copy null character as well
        if(array[i] != ' '){
            j++; 
        }
        i++;
    }
    j = j - 2; // Now j is on last character (character before null character)
    
    bool isPalindrome = true;
    for(int k=0; k<j/2; k++,j--){
        if(copy[k] != copy[j]){
            isPalindrome = false;
            break;            
        }
    }
    if(isPalindrome == true){
        cout <<"The string is palindrome."<<endl;
    }
    else{
        cout <<"The string is not palindrome."<<endl;
    }




    





    
    return 0;
}