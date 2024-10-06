// Write a program to remove all spaces from given string.
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char array[100];
    cout <<"Enter string :"<<endl;
    fgets(array, 100, stdin); 
    
    int len = strlen(array);
    for(int i=0; i<len; i++){
        if(array[i] == ' '){

            for(int j=i; j<len; j++){
                array[j] = array[j+1];
            }
            len--;
        }
        if(array[i] == ' '){
            i--;
        }
    }
    cout <<"After removing all the spaces :"<<endl;
    cout <<array;    
    return 0;
}