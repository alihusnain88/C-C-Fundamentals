#include <iostream>
using namespace std;

int main(){
    int a =10;
    int b =20;

    cout <<"Before swapping : "<<endl;
    cout <<"a = "<<a<<endl;
    cout <<"b = "<<b<<endl;

    a = a + b;
    b = a - b;
    a = a - b;  

    cout <<"After swapping : "<<endl;
    cout <<"a = "<<a<<endl;
    cout <<"b = "<<b<<endl;

    
    return 0;
}
