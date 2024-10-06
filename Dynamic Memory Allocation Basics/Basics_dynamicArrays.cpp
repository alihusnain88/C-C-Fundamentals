// Write a C++ program to dynamically allocate an array of integers and strings.
#include <iostream>
using namespace std;
# define size 5

int main(){
    int *intarr = new int[size];
    char *ch_arr = new char[100];
    string *strptr = new string[size];
   
   // Integer array*****************************
   cout <<"Enter integer array elements : "<<endl;
   for(int i=0; i<size; i++){
    cin >>intarr[i];
   }
   cout <<"Integer array :"<<endl;
   for(int i=0; i<size; i++){
    cout <<intarr[i]<<" ";
   }
   // Character array*****************************
   cout <<"Enter Character array elements : "<<endl;
   char ch;
   int i;

   for(i=0; ch != '\n'; i++){
    cin >>ch;
    ch_arr[i] = ch;
   }
   ch_arr[i] = '\0';
   cout <<"Character array :"<<endl;

   for(i=0; ch_arr[i] != '\0'; i++){
    cout <<ch_arr[i];
   }
   
   

   
   // Integer array*****************************

    
    return 0;
}
