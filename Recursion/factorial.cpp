// Write a program to calculate the factorial of a given number using recursion.

#include <iostream>
using namespace std;

int factorial(int n);

int main(){
    int number;
    // cin >>number;
    do{
        cout <<"Enter a positive number : ";
        cin >>number;

    }while(number<0);

    cout <<"Factorial of "<<number <<" is " <<factorial(number) <<".";

    return 0;
}

int factorial(int n){
    if (n > 1){ // Until our number is greater than 1,
    return n * factorial(n-1); // We'll keep calculating the factorial
    }
    else{
        return n; // If number is 0/1, return 0/1 because factorial of 0 is 0 and of 1 is 1
    }
}
