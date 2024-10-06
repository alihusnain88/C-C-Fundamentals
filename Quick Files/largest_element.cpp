// Find largest element of a given array
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    cout <<"Enter array elenemts : (-1 to end)";

    int input;
    while(input != -1){
        if(cin >>input){
        arr.push_back(input);
        }
    }
    int size = arr.size();
    int largest = arr[0];
    for(int i=1; i<size-1; i++){

        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    cout <<"Largest element of array is "<< largest<<"." <<endl;


    return 0;
}