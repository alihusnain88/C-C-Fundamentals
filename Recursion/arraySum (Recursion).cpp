// Find sum of array elements by recursion
#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> v, int size); // Prototype

int main(){     // Main begins execution 
    vector<int> vec;
    int input;
    cout <<"Enter array elements : (-1 to end)";  

    while(input != -1){
    // Keep taking inputs and pushing them back into vector, until entered -1 by user
        cin >>input;
        vec.push_back(input);
    } 

    int size = vec.size();
    cout <<"Sum is "<< sum(vec,size);
    return 0;
}

int sum(vector<int> v, int size){
    static int n = size-1; // First copy the size (static int ----> because we don't want to inititialize it every time)
    n --; // Infact we want to decrease it by 1 every time, until it reaches 0th index

    if(n == 0){
        return v[0];
    }    
    return v[n] + sum(v, size); 
    // v[n] ----> present element
    // sum (v, size) ----> sum of all previous elements
} 