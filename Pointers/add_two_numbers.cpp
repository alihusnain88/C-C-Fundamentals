// Write a program to add two numbers using two pointers.

#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 10;

    int *ptra = &a;
    int *ptrb = &b;

    int sum = *ptra + *ptrb;
    cout <<endl<<"a = 5, b = 10"<<endl;
    cout <<"sum = *ptra + *ptrb = a+b = "<<sum<<endl<<endl;

    *ptrb = *ptrb + *ptra; // changing value of b from b=10 to b = a+b = 15
    cout <<"Changing the value of b from b=10 to b=a+b=15"<<endl;

    cout <<"*ptrb = Value present at b is now = "<<*ptrb<<endl; // equal to b=15
    cout <<"now b = "<<b<<endl;// 15 ----> changed-value of b (from 10 to 15)

    return 0;
}