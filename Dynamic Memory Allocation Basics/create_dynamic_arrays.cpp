// Write a program to dynamically allocate an array of integers and strings and initialize its elements.
#include <iostream>
using namespace std;
# define size 10

int main(){
    int *intArr = new int[size];    
    string *strptr = new string[size];

    cout <<"Enter integer array elements : "<<endl;
    for (int i=0; i<size; i++){
        cin >>intArr[i];
    }   
    
    cout <<"Integer array : "<<endl;
    for (int i=0; i<size; i++){
        cout <<intArr[i]<<" ";
    }

    // delete arr;
    cout <<"Enter strings :"<<endl;
    for (int i=0; i<size; i++){
        getline(cin, strptr[i]);
    }
    cout <<"Strings :"<<endl;
    for(int i=0; i<size; i++){
        cout <<strptr[i]<<endl;
    }

    delete [] intArr;
    delete [] strptr; 
    
    return 0;
}