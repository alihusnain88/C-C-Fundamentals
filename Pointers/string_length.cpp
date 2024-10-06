// Write a program to find length of string using pointers.
#include <iostream>
using namespace std;

int main(){
    string s;
    cout <<"Enter your sentence : "<<endl;
    getline(cin, s);

    char *ptr = &s[0];
    int length = 0;

    for (int i=0; s[i] != '\0'; i++, ptr++){
        length++;
    }

    cout <<"With spaces :"<<endl;
    cout <<"Length is "<<length<<endl<<endl;

    length = 0;
    for (int i=0; s[i] != '\0'; i++, ptr++){
        if(s[i] != ' '){
        length++;
        }
    }
    cout <<"Without spaces :"<<endl;
    cout <<"Length is "<<length<<endl<<endl;

    return 0;
}