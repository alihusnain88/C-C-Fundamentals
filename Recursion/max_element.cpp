// Write a program find the minimum element in an array using recursion.
#include <iostream>
#include <vector>
using namespace std;

int findMax(vector <int> v, int size);

int main(){
    vector <int> vec;
    cout <<"Enter elements (-1 to end): "<<endl;
    int input;
    while(input != -1){
        cin >>input;
        vec.push_back(input);
    }
    int size = vec.size();

    cout <<"Maximum element of this vector is : "<<findMax(vec, size-1)<<"."; // size-1 will ignore the sentinal value   
    return 0;
}
int findMax(vector <int> v, int size){

    if(size == 1){
        return v[0];
    }

    int pastMax = findMax(v, size - 1);
       if(pastMax < v[size-1]){
          pastMax = v[size - 1];
    }
    return pastMax;  
    
}
