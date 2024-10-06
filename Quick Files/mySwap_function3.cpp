#include <iostream>
using namespace std;

void mySwap(int &a, int &b);

int main(){
    int a = 5;
    int b = 10;

    cout <<"Before swapping : "<<endl;
    cout <<"a = "<<a<<endl;
    cout <<"b = "<<b<<endl;

    mySwap(a, b);

    cout <<"After swapping : "<<endl;
    cout <<"a = "<<a<<endl;
    cout <<"b = "<<b<<endl; 

    return 0;
}
void mySwap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}