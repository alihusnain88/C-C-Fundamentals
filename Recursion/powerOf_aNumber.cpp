// Write a program to calculate the power of a number by recursion.
#include <iostream>
using namespace std;

float Power(int base, int power); // float ----> just to handle the case of -ve power

int main(){
    int number;
    cout <<"Enter number : ";
    cin >>number;

    int power;
    cout <<"Enter power : ";
    cin >>power;

    cout <<number <<"^"<<power <<" = "<<Power(number, power)<<endl;
    
    return 0;
}
float Power(int base, int power){
    if(power == 0){
        return 1;
    }
    if(power == 1){
        return base;
    }
    if(power < 0){
        power *= -1.00;
        float denominator =  base * Power(base, power - 1);
        return 1/denominator;
    }
    else{ // Normal case for power
            return base * Power(base, power - 1);
    }
}
