// Swaping using pointers
#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 10;

    int *ptra = &a;
    int *ptrb = &b;

    cout <<"Before swapping :"<<endl;
    cout <<"a = "<<a<<", b = "<<b;

    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;

    cout <<endl;
    cout <<"After swapping :"<<endl;
    cout <<"a = "<<a<<", b = "<<b;
    
    return 0;
}