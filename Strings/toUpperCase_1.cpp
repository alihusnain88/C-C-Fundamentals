// Write a program to convert lowercase string to uppercase.
#include <iostream>
using namespace std;

int main(){
    char array[100];
    cout <<"Enter string :"<<endl;
    fgets(array, 100, stdin);

    for(int i=0; array[i] != '\0'; i++){

        if(array[i] >= 'a' && array[i] <= 'z'){
            // array[i] = array[i] - 32;
            array[i] = toupper(array[i]);
            
        }
    }
    cout <<"In upper case :"<<endl;
    cout <<array;

   
    

    
    return 0;
}