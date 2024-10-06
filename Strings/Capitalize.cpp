// Write a C++ program to capitalize the first letter of each word in a given string.

#include <iostream>
#include <string.h>
using namespace std;

int main(){

    string str;
    cout <<"Enter string :"<<endl;
    getline(cin, str);

    int size = str.size();
    for(int i=0; i<size; i++){
        if(str[i-1] == ' ' || i == 0){
            str[i] = toupper(str[i]);
        }
    }
    for(int i=0; i<size-1; i++){
        cout <<str[i];
    }

    
    return 0;
}