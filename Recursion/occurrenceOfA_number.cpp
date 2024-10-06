// Write a program to count the number of occurrences of a specific element in an array by recursion.
#include <iostream>
#include <vector>
using namespace std;

int count_occurrences(vector <int> v, int size, int key);

int main(){
    vector <int> vec;
    cout <<"Enter vector elements : ";
    int input;
    while(input != -1){
        cin >>input;
        vec.push_back(input);
    }
    int size = vec.size()-1; // Ignoring sentinal

    int key;
    cout <<"Enter key : ";
    cin >>key;

    cout <<key <<" occurred "<<count_occurrences(vec, size, key)<<" times.";    
    
    return 0;
}
int count_occurrences(vector <int> v, int size, int key){
    int count;
    if(size == 0){
       return (v[0] == key); // if it is the key it will return count=1, otherwise 0
    }

    int pastCount = count_occurrences(v, size-1, key);
    if(v[size] == key){
        return pastCount + 1;
    }
    else{
        return pastCount;
    }
}
