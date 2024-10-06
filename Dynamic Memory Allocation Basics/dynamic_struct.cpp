// Write a program to dynamically allocate memory for a structure and input its members from the user.
// I'll ask user a student's admission year and duration of degree and will tell him that particular student's degree completion year
#include <iostream>
using namespace std;

 struct Student{
    string name;
    int admit_year;
    int duration;

    int calculate_year(){
        return admit_year + duration;
    }
    void display(){
        cout <<"Student name : "<<name<<endl;
        cout <<name <<"'s degree will complete in "<<calculate_year() <<".";
    }
};

int main(){
   struct Student *std1 = new Student;
   cout <<"Enter student name :"<<endl;
   getline(cin, std1->name);

   cout <<"Enter admission year : ";
   cin >>std1->admit_year;

   cout <<"Enter duration of degree : ";
   cin >>std1->duration;

   std1->display(); 

    return 0;
}
