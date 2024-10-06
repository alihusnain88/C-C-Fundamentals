// Write a program to search all occurrences of a character in given string.
// Finding all the indices for a given character

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main(){
    char array[100];
    cout <<"Enter string :"<<endl;
    fgets(array, 100, stdin);

    char keyChar;
    cout <<"Enter key character to find its indices : ";
    cin >>keyChar;

    int length = strlen(array)-1; // Eliminating null character

    vector <int> indices;
    int i=0, j=0;
    while(array[i] != '\0'){

        if(array[i] == keyChar){
            indices.push_back(i);
            j++;
        }
        i++;
    }

    cout <<"Key character found at following indices :"<<endl;
    for(int i:indices){
        cout <<i <<",";
    }
    

    return 0;
}