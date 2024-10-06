// Write a program to calculate the product of two numbers without using the multiplication operator by recursion.
// One way is adding num1 , num2 times ( 2*3 = 2+2+2)
#include <iostream>
using namespace std;

int multiply(int num1, int num2);

int main(){
    int x;
    cout <<"Enter number 1 : ";
    cin >>x;

    int y;
    cout <<"Enter number 2 : ";
    cin >>y;
    
    cout <<x <<"*" <<y <<" = "<<multiply(x,y)<<endl;
    
    return 0;
}
int multiply(int num1, int num2){
    if(num1 == 0 || num2 == 0){
        return 0;
    }
    if(num1 == 1){
        return num2;
    }

    if(num2 == 1){
        return num1;
    }
    return num1 + multiply(num1, num2-1);
}