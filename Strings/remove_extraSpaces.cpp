// Write a program to remove all extra blank spaces from a given string.
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char array[100];
    cout <<"Enter string :"<<endl;
    fgets(array, 100, stdin); 
    
    int len = strlen(array);
    for(int i=1; i<len-1; i++){
        if(array[i] == ' ' && array[i+1] == ' '){

            for(int j=i+1; j<len; j++){
                // if(array[j] == ' ' && array[j-1] == ' ')
                array[j] = array[j+1];
            }
            if(array[i+1] == ' '){
                i--;
            }
        }
    }

    cout <<"String without extra spaces :" <<endl;
    cout <<array;  
    return 0;
}