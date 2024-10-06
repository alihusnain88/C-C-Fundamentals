// Write a program to search an element in array using pointers.
#include <iostream>
using namespace std;
#define SIZE 10

int main()
{
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 8;

    int *startptr = 0; // Pointer to starting index

    int sizeaddress = (SIZE - 1);
    int *endptr = &sizeaddress; // Pointer to ending index

    int middle;
    int index;

    while (*startptr <= *endptr){
        middle = (*startptr + *endptr) / 2;
        if (key == array[middle]){
            index = middle;
        }
        else if (key > array[middle]){
            *startptr = middle + 1;
        }
        else if (key < array[middle]){
            *endptr = middle - 1;
        }
    }
    if(array[*endptr] == key){
       index = *endptr;
    }
    else{
        cout <<"Key not found !"<<endl;
    }

    cout <<"Key found at index : "<<index<<endl;    
    return 0;
}