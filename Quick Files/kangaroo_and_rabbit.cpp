// A kangaroo and a rabbit are standing on stairs (infinite). Kangaroo is at some lower stair than rabbit, and cannot go upper than rabbit. Each time, kangaroo goes 7 steps up and rabbit 3 steps down. At which stair, will they meet or stop moving ('cause kangaroo remains lower than rabbit)?
#include <iostream>
using namespace std;


int main(){
    int kangaroo;
    int rabbit;
    int select;
    while(select != 2){
        cout <<"Enter both positions (seperated by a space): "<<endl;
        // cin >>kangaroo >>rabbit;
        cin >>kangaroo;
        cin >> rabbit; 

       while(kangaroo <= rabbit){
        if(kangaroo == rabbit){
            cout <<"Meeting point is at stair "<<kangaroo <<endl;            
            break;
        }
        kangaroo += 7;
        rabbit -= 3;
    }
    if(kangaroo != rabbit){
        kangaroo -= 7;
        rabbit += 3;
        cout <<"Kangaroo is at stair " <<kangaroo <<" and rabbit at stair " <<rabbit <<endl;
        cout <<"And they cannot move further." <<endl;
        
    }
    cout <<"\nDo you want to test again?"<<endl;
        cout <<"1. Yes\n";
        cout <<"2. No\n";
        cin >>select;
    }
    cout <<"Thank you !\n";
    
    return 0;
}
