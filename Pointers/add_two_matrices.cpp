// Write a program to add two matrices using pointers.

#include <iostream>
using namespace std;
# define ROWS 3
# define COLS 3

void display(int array[ROWS][COLS]);

int main(){    
    int matrix1[ROWS][COLS] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[ROWS][COLS] = {{9,8,7},{6,5,4},{3,2,1}};
    int sumMatrix[ROWS][COLS];

    int *ptr1 = &matrix1[0][0];
    int *ptr2 = &matrix2[0][0];

    for(int i=0; i<ROWS; i++, ptr1++, ptr2++){
        for(int j=0; j<COLS; j++){
            sumMatrix[i][j] = *ptr1 + *ptr2;
        }        
    }
    cout <<"Matrix1 + Matrix2 = "<<endl;
    display(sumMatrix);
    
    return 0;
}

void display(int array[ROWS][COLS]){
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            cout <<array[i][j]<<"\t";            
        }
        cout <<endl;        
    }    

}