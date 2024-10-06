// Write a program to concatenate two strings.
// It's actually a C program

#include <iostream>
#include <string.h> // To use strcat(), strcpy() etc.

using namespace std;

int main(){
    char arr1[200]; // We are to get arr1 = "arr1arr2" after concatenation
    char arr2[100];

    cout <<"Enter first string : "<<endl;
    // fgets(arr1, 100, stdin);
    gets(arr1);
    
    cout <<"Enter second string : "<<endl;
    fgets(arr2, 100, stdin);

    char originalarr1[100];
    strcpy(originalarr1, arr1); // because after the program ends, arr1 would have been concatenated and we want to print original arr1 again , so we already copied it.

    int i=0;
    while (arr1[i] != '\0'){
        i++;
    }

    int j=0;
    while(arr2[j] != '\0'){
        arr1[i] = arr2[j];
        i++;  j++;
    }
    arr1[i] = '\0';
    

    cout <<"String 1 after concatenation :"<<endl;
    cout<<arr1<<endl;


    return 0;
}