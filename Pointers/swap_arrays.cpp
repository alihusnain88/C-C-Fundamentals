// Write a program to swap two arrays using pointers.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1;
    int input1;
    cout <<"Enter elements of vector 1 (enter -1 to end) :"<<endl;
    while(input1 != -1){
        cin >>input1;
        vec1.push_back(input1);
    }
    int size = vec1.size()-1;

    vector<int> vec2;
    int input2;
    cout <<"Enter elements of vector 2 (enter -1 to end) :"<<endl;
    while(input2 != -1){
        cin >>input2;
        vec2.push_back(input2);
    }
    // Before swapping ************************************
    cout <<endl;
    cout <<"Before swapping :"<<endl;
    cout <<"Vector 1 :"<<endl;
    for(int i=0; i<size; i++){
        cout <<vec1[i] <<" ";
    }
    cout <<endl;

    cout <<"Vector 2 :"<<endl;
    for(int i=0; i<size; i++){
        cout <<vec2[i] <<" ";
    }
    cout <<endl;

    int *ptr1 = &vec1[0];
    int *ptr2 = &vec2[0];

    int temp;
    for(int i=0; i<size; i++,ptr1++,ptr2++){
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;        
    }

    // After swapping ************************************
    cout <<endl;
cout <<"After swapping :"<<endl;
    cout <<"Vector 1 :"<<endl;
    for(int i=0; i<size; i++){
        cout <<vec1[i] <<" ";
    }
    cout <<endl;

    cout <<"Vector 2 :"<<endl;
    for(int i=0; i<size; i++){
        cout <<vec2[i] <<" ";
    }
    cout <<endl;




    
    return 0;
}