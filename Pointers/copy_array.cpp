// Write a program to copy one array to another using pointers.
// Instead I'll copy a vector to an array
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int input;
    cout <<"Enter array elements (-1 to end) :"<<endl;
    while(input != -1){
        cin >>input;
        vec.push_back(input);
    }
    int size = vec.size();

    int array[size]; // array of size equal to the size of above vector
    int *ptr = &vec[0];

    for(int i=0; i<size-1; i++,  ptr++){ // size -1 ------> because last element will be a sentinal (-1)
        array[i] = *ptr;
    }

    ptr = &vec[0];
    cout<< "Elements of vector :"<<endl;
    for(int i=0; i<size-1; i++, ptr++){
        cout <<*ptr<<" ";
    }
    cout <<endl;

    cout<< "Elements of array --> copy :"<<endl;
    for(int i=0; i<size-1; i++){
        cout <<array[i] <<" ";
    }


    
    return 0;
}