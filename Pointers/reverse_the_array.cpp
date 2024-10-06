// Write a program to reverse an array using pointers.
#include <iostream>
using namespace std;
# define SIZE 10

int main(){
    long long int array[SIZE] ;
    cout <<"Enter array elements (size = 10):"<<endl;

    for(int i=0; i<SIZE; i++){
        scanf("%d", &array[i]);
    }

    cout <<"Original array : "<<endl;
    for(int i:array){
        cout <<i <<" ";
    }

    long long int *startptr = &array[0];
    long long int *endptr = &array[SIZE-1];

    while(startptr < endptr){
        swap(*startptr,*endptr);
        startptr++;
        endptr--;
    }
    cout <<endl;
    cout <<"Reversed array : "<<endl;
    for(int i:array){
        cout <<i <<" ";
    }
    
    return 0;
}