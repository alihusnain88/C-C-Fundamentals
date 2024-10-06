// Print the following sequences :
// Ali (A)
// Ali (B)
// Ali (C)
// Ali (D)
// Ali (E)
#include <iostream>
using namespace std;

int main(){

    char arr[4] = {'A', 'l', 'i', '\0'};
    for (int i=0; i<5; i++){
        cout <<arr <<" ("<<char(i+65) <<")"<<endl;
    }
    
    return 0;
}