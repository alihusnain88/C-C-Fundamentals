// Uaing pointers approach
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
    cout <<strcat(arr1, arr2);

    char originalarr1[100];
    strcpy(originalarr1, arr1); // because after the program ends, arr1 would have been concatenated and we want to print original arr1 again , so we copied it already.

    char *ptr1 = arr1;
    char *ptr2 = arr2;

    while(*(ptr1++));

    while(*(ptr1++) = *(ptr2++));

    cout <<"First string :"<<endl;
    cout<<originalarr1<<endl;
    
    cout <<"Second string :"<<endl;
    cout<<arr2<<endl;

    cout <<"String 1 after concatenation :"<<endl;
    cout<<arr1<<endl;
      
    
    return 0;
}