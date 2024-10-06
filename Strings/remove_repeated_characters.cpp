// Write a program to remove all repeated characters from a given string.
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // String input from user
    char array[100];
    cout << "Enter string :" << endl;
    fgets(array, 100, stdin);
    int len = strlen(array);

    char toRemove;
    for (int i = 0; i < len - 2; i++){
        toRemove = array[i]; // Keeping track of current element whose repitions are to be removed
        if (array[i] != ' ') // Simply remove this condition if you don't want to keep spaces
        {
            for (int j = i + 1; j < len; j++){ // This loop will check if next element is the same element that is to be removed
                if (array[j] == toRemove)
                {   for (int k = j; k < len; k++){
                        array[k] = array[k + 1];
                    }
                    len--; // Now null character has moved one position back and length is no more same
                    if(array[j] == toRemove){
                        j--;
                    }
                }                    
            }
        }
    }
    cout << "After removing all the repeating characters :" << endl;
    cout << array;

    return 0;
}