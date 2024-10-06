// Using char vectors
// A lot of things remaining*****************
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> arr1;    
    char arr2[100];   
    cout <<"Enter first string :"<<endl;

    
    char ch;
    int i=0;
    while(ch != '\n'){
        cin >>ch;
        arr1.push_back(ch);
        i++;
    }
    cout <<"Enter second string :"<<endl;
    fgets(arr2, 100, stdin);

    int j=0;
    while(arr1[i++] = arr2[j++]);
    arr1[i] = '\0';

    for (int k:arr1){
        cout <<k;
    }

    
    
    
    

    
    return 0;
}