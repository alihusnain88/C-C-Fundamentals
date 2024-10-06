#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *c, int s){
    for(int i=0; i<s/2; i++){
        swap(c[i], c[s-1-i]);
    }
}

int main(){
    char *arr = new char [100];
    cout <<"Enter character array : "<<endl;
    fgets(arr, 100, stdin);
    int size = strlen(arr);

    cout <<"Before reversing : "<<endl;
    puts(arr);
    cout <<endl;


    reverse(arr, size);

    cout <<"After reversing : "<<endl;
    puts(arr);
    cout <<endl;

    return 0;
}
