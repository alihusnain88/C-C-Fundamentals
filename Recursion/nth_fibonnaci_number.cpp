// Write a Cprogram to implement a recursive function to get the nth Fibonacci number.

#include <iostream>
using namespace std;

int Fibonnaci(int n);

int main(){

    cout <<Fibonnaci(10) <<endl;
    
    return 0;
}
int Fibonnaci(int n){
   if(n < 2){
    return n;
   }
   
   return Fibonnaci(n-1) + Fibonnaci(n-2);
}
