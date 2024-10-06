// Write a program to calculate the sum of digits of a given number by recursion.
#include <iostream>
using namespace std;

int calculateSum(int n);

int main(){
    int n;

   do{
    cout <<"Enter a positive number : ";
    cin >>n;

   }while(n < 0);

   cout <<"Sum of digits of "<<n <<" is "<<calculateSum(n) <<".";
    
    return 0;
}
int calculateSum(int n){
    int sum = 0;

    if(n > 9){

        int digit = n%10;
        n /= 10;
        sum = digit + calculateSum(n);
        return sum;

    }else{ // Instead of writing base case as if(n == 0)/if(n == 1), I wrote this condition --- > it is doing the same work in a different way
        return n; // If n is 0, return 0/If n is 1, return 1
    }
}
