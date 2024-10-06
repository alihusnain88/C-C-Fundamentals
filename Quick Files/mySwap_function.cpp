#include <iostream>
using namespace std;

void mySwap(int &a, int &b){
    int *ptra = &a;
    int *ptrb = &b;
   
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
}

int main(){
    int a = 10;
    int b = 20;  

    cout <<"Before swapping : "<<endl;
    cout <<"a = "<<a<<endl;
    cout <<"b = "<<b<<endl;

    mySwap(a, b);

    cout <<"After swapping : "<<endl;
    cout <<"a = "<<a<<endl;
    cout <<"b = "<<b<<endl;
    
    return 0;
}
