// Write a program to find length of a string.
#include <iostream>

using namespace std;

int main(){
    string str;
    cout <<"Enter string : "<<endl;
    getline(cin, str);

    int totalLength = 0;
    int lengthWithoutSpaces = 0;
    int i=0;

    while(str[i] != '\0'){
        totalLength++;
        if(str[i] != ' '){
            lengthWithoutSpaces++;
        }
        i++;
    }
    cout <<"Total length with spaces = "<<totalLength <<endl;
    cout <<"Length without spaces = "<<lengthWithoutSpaces <<endl;
    
    return 0;
}