// Write a program to count total number of words in a string.
#include <iostream>
using namespace std;

int main(){
    char array[100];
    cout <<"Enter string :"<<endl;
    fgets(array, 100, stdin);  

    int words = 0;
    int i;

    for (i=1; array[i] != '\0'; i++){
        if(array[i] == '\0'){
           // words++;
        }
        if(array[i] == ' ' && array[i-1] != ' '){
            words++;
        }
    }
    cout <<"Total words : "<<words;   


    
    return 0;
}