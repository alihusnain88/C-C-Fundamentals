// Write a program to replace all occurrences of a character with another in a string.
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char array[100];
    cout <<"Enter string :"<<endl;
    fgets(array, 100, stdin); // Will also take null character as a character
    // gets(array); // Will not take null character

    char key;
    cout <<"Enter key character to be replaced: ";
    cin >>key;
    // key = getchar();

    char replace;
    cout <<"Enter character to add: ";
    cin >>replace;
    // replace = getchar();

    int len = strlen(array); // strlen() counts null character as well in case of fgets, otherwise not

    for(int i=0; i<len-1; i++){     
        if(array[i] == key){
            array[i] = replace;           
        }
    }

    cout <<"String with '"<<key <<"' replaced by '"<<replace<<"' :"<<endl;
    cout <<array;    
    return 0;
}