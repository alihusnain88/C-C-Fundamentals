// Write a program to sort array using pointers.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int input;
    cout <<"Enter array elements (-1 to end):"<<endl;
    while(input != -1){
        cin >>input;
        vec.push_back(input);
    }
    int size = vec.size()-1;
    int *ptr1 = &vec[0];
    int *ptr2 = &vec[1]; // because size-1 is the sentinal value ------> -1


    for(int i=0; i<size-1; i++){ 
        for(int i=0; i<size-1; i++,ptr1++,ptr2++){

            if(*ptr1 > *ptr2){
                swap(*ptr1, *ptr2);            
            }   

            // 5 4 3 2 1 -1 -----> elements
            // 0 1 2 3 4  5 -----> indices
        }
        ptr1 = &vec[0];
        ptr2 = &vec[1];
    }
    cout <<"After sorting :"<<endl;
    for(int i=0; i<size; i++){
        cout <<vec[i] <<" ";
    }


    
    
    return 0;
}