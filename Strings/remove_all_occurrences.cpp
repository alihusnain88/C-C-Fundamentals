// Write a program to remove all occurrences of a character from string.
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char array[100];
    cout <<"Enter string :"<<endl;
    fgets(array, 100, stdin); // Will also take null character as a character
    // gets(array); // Will not take null character

    char key;
    cout <<"Enter key character to remove it from the string :"<<endl;
    cin >>key;

    int len = strlen(array); // strlen() counts null character as well in case of fgets, otherwise not
    // cout <<len;

    for(int i=0; i<len-1; i++){     
        if(array[i] == key){
            for(int j=i; j<len; j++){
                array[j] = array[j+1];
            }
            len--;
            i--;
        }
    }

    cout <<"String with removed '"<<key <<"' :"<<endl;
    cout <<array;    
    return 0;
}