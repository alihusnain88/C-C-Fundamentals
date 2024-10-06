// Write a program to dynamically create an array of objects using the new operator.
#include <iostream>
using namespace std;
# define size 11 // A cricket team
class Player{
    string name;
    public:
    void setname(string n){
        name = n;
    }
    string getname(){
        return name;
    }

    void display(){
        cout <<"Name : "<<name;
    }
};

int main(){
    Player *players = new Player[size];

    string Name;
    for(int i=0; i<size; i++){
        cout <<"Enter player "<<i+1 <<"'s name :";
        getline(cin, Name);
        players[i].setname(Name);
    }

   for(int i=0; i<size; i++){
    cout <<"Player "<<i+1 <<"' ";
    players[i].display();
    cout <<endl;
   }


    
    return 0;
}
