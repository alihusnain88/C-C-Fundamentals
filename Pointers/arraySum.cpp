// Add array elements using a pointer
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

    int *ptr = &vec[0];
    int sum = 0;

    for(int i=0; i<size-1; i++, ptr++){
        sum += *ptr;
    }

    cout <<"Sum is "<<sum<<endl;


    
    return 0;
}