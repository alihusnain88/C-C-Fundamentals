// Write a program to access two dimensional array using pointers.

#include <iostream>
using namespace std;
# define rows 3
# define cols 3

int main(){
    int array[rows][cols] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int *ptr;

    ptr = &array[0][0];
    cout <<"Element [0][0] = "<<*ptr<<endl;

    ptr++; // Pointers moves from "1" to "2"
    cout<<"Element [0][1] = "<<*ptr<<endl;

    ptr = &array[1][0]; // Directing the pointer to first element of 2nd row
    cout <<"Element [1][0] = "<<*ptr<<endl;

    ptr = &array[2][2]; // Directing the pointer to last element of last row
    cout <<"Element [2][2] = "<<*ptr<<endl;

    
    return 0;
}