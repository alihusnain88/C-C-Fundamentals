// Write a program to find the minimum element in an array using recursion.

#include <iostream>
#include <vector>
using namespace std;

int findMin(vector <int> v, int size);

int main(){
    vector <int> vec;
    cout <<"Enter elements (-1 to end): "<<endl;
    int input;
    while(input != -1){
        cin >>input;
        if(input != -1){
        vec.push_back(input);
        }
    }
    int size = vec.size();

    cout <<"Minimum element of this vector is : "<<findMin(vec, size-1)<<".";  
    return 0;
}

int findMin(vector <int> v, int size){

    if(size == 1){
        return v[0];
    }

    int pastMin = findMin(v, size - 1);
       if(pastMin > v[size-1]){
          pastMin = v[size - 1];
    }
    return pastMin;  
    
}
