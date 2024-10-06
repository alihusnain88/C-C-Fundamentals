// Write a program to copy one string to another string.
// A new method using while
#include <iostream>
using namespace std;

int main(){
    char arr[100];
    char copy[100];

    cout <<"Enter string :"<<endl;
    fgets(arr, 100, stdin);

    int i=-1;
    while(copy[i] = arr[++i]);
    copy[i] = '\0';   

    cout<<arr;
    
    return 0;
}