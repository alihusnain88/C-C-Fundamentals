// Write a program to dynamically create an object of a class using the new operator.
// Program will ask the user the player's name and if the player is all-rounder or not
#include <iostream>
using namespace std;
class Player{
    string name;
    bool allRounder_orNot;

    public:
    void setname(string n){
        name = n;
    }
    string getname(){
        return name;
    }
    void setbool(bool a){
       allRounder_orNot = a;
    }
    bool getbool(){
        return allRounder_orNot;
    }
    void display(){
       cout <<"Player name : "<<name <<endl;
       cout <<"All-rounder or not : ";
       if(allRounder_orNot){
        cout <<"All-rounder";
       }
       else{
        cout <<"Not all-rounder";
       }
    }
};

int main(){
    Player *P1 = new Player;

    cout <<"Enter player 1 name : ";
    string Name;
    getline(cin, Name);
    P1->setname(Name);

    bool allrounderorNot;
    do{
        cout <<"Is the player all-rounder or not (enter just 1/0): ";
        cin >>allrounderorNot;

    }while(allrounderorNot >1 || allrounderorNot <0);
    
    P1->setbool(allrounderorNot);

    // Output**************************************
    cout <<"Simple output : "<<endl;
    cout<<P1->getname()<<endl;
    if(P1->getbool()){
        cout <<"All-rounder ";
    }else{
        cout <<"Not all-rounder";
    }

    cout <<endl;
    cout <<"Using display function : "<<endl;
    P1->display();
        
    return 0;
}
