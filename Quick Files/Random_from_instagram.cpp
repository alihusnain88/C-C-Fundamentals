/* This is a random problem taken while using Instagram 
                                   Explanation :
 There are 100 stairs. A dog is at 0th stair going upstairs, and a cat at 100th stair going downstairs.
 As dog goes 7 stairs up, the cat moves 3 stairs down. At which stair will they meet? 
*/

#include <iostream>
# define SIZE 101
using namespace std;

int main(){
    int stairs[SIZE];
    for(int i=0; i<SIZE; i++){
        stairs[i] = i;
    }
    int dog = stairs[0];
    int cat = stairs[SIZE-1];

    while(dog <= cat){
        if(dog + 7 <= cat-3){
        dog += 7;
        cat -= 3;
        }
        else {
            break;
        }
    }
    cout <<"Dog = " <<dog <<" cat = " <<cat <<endl;
    
    return 0;
}



