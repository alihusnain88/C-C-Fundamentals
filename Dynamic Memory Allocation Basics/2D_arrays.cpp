// Write a program to dynamically allocate two two-dimensional arrays of floating values and strings.
#include <iostream>
#include <iomanip>
using namespace std;
# define rowSize 3
# define colSize 2

int main(){
    // 2D integer matrix****************************************
    int **matrix = new int *[rowSize];

    for(int i=0; i<rowSize; i++){
        matrix[i] = new int[colSize];
    }
    cout <<"Enter matrix elements : "<<endl;
    for(int i=0; i<rowSize; i++){
        for (int j=0; j<colSize; j++){
            cout <<"Element ["<<i <<"]["<<j<<"] : ";
            cin >>matrix[i][j];
        }        
    }

    for(int i=0; i<rowSize; i++){
        for (int j=0; j<colSize; j++){
            cout <<setw(10) <<matrix[i][j] <<" ";
        }   
        cout <<endl;     
    }
    // 2D strings matrix*****************************************
    string **strmatrix = new string *[rowSize];

    for(int i=0; i<rowSize; i++){
        strmatrix[i] = new string[colSize];
    }
    cout <<"Enter strings in 2D matrix : "<<endl;
    cin.ignore();

    for(int i=0; i<rowSize; i++){
        for (int j=0; j<colSize; j++){
            cout <<"String ["<<i <<"]["<<j<<"] : ";
            getline(cin, strmatrix[i][j]);
            // cin.ignore();
        }        
    }
    
    cout <<"Strings in 2D : "<<endl;
    for(int i=0; i<rowSize; i++){
        for (int j=0; j<colSize; j++){
            cout <<setw(10) <<strmatrix[i][j] <<" ";
        }   
        cout <<endl;     
    }

    
    return 0;
}
