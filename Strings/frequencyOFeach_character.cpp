// Write a program to count frequency of each character in a string.
// Remaining*************************
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> ch;
    cout <<"Enter string : "<<endl;
    char c;
    while(c != 'z'){
        cin >>c;
        ch.push_back(c);
    } 
    int size = ch.size();
    cout <<ch[0];

    // int frequency[26] = {0};
    // int integer;
    // for(int i=0; i<size; i++){
    //     integer = int(ch[i])-97;
    //     frequency[integer]++;
    // }

    // cout <<frequency[25];  
    return 0;
}