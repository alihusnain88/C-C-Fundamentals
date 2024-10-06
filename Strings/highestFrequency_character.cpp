// Write a program to find highest frequency character in a string.
// Remaining***************************
#include <iostream>
#include <vector>
using namespace std;

int main(){
    char array[100];
    cout <<"Enter string :"<<endl;
    fgets(array, 100, stdin);

    int integer;

    int frequency[26] = {0}; // initializing all elements to zero
    for(int i=0; array[i] != '\0'; i++){
        integer = int (array[i]);
        frequency[integer]++;
    }
    int most_frequent = frequency[0];
    for(int i=0; i<25; i++){
        if(most_frequent < frequency[i+1]){
            most_frequent = frequency[i+1];
        }       
    }
    // char ch = char(most_frequent);
    // cout <<"The most frequent character is : "<<ch;
    printf("%d", most_frequent);
    
    

    


    
    return 0;
}