// Write a program to reverse a string using pointers.
#include <iostream>
using namespace std;

int main(){
    string str;
    cout <<"Enter string :"<<endl;
    getline(cin, str);
    int size = str.size();

    char *ptr1 = &str[0];
    char *ptr2 = &str[size - 1];

    for(int i=0; i<size/2; i++,ptr1++,ptr2--){
        swap(*ptr1, *ptr2);
    }
    cout <<"Reversed string :"<<endl<<str;   

    return 0;
}