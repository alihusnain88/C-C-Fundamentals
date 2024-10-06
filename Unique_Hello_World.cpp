#include <iostream>
using namespace std;

int main(){
    string a = "bfiboubfjgi";
    string b = "jfjvjbjdfbk";

    for(int i=1; i<=5500; i++)
    {
        if(i>1000) 
        {    
            cout<<"h";
            a = "fiboubfjgf";
            b = "fjvjbjdfbf";
                        
        }
        if(i>1500)
        {
            cout<<"e";
            a = "iboubfjgj";
            b = "jvjbjdfbn";
        }
        if(i>2000)
        {
            cout<<"l";
            a = "boubfjgs";
            b = "vjbjdfbj";
        }
        if(i>2500)
        {
            cout<<"l";
            a = "oubfjgv";
            b = "jbjdfbb";
        }
        if(i>3000)
        {
            cout<<"o";
            a = "bfjgkf";
            b = "jdfbgj";
        }
        if(i>3500)
        {
            cout<<" ";
            a = "fjgqn";
            b = "dfbfw";
        }
        if(i>3800)
        {
            cout<<"w";
            a = "jgjj";
            b = "fbkf";
        }
        if(i>4100)
        {
            cout<<"o";
            a = "gdb";
            b = "bdd";
        }
        if(i>4400)
        {
            cout<<"r";
            a = "gn";
            b = "jf";
        }
        if(i>4700)
        {
            cout<<"l";
            a = "g";
            b = "j";
        }
        if(i>5000)
        {
            cout<<"d";
            a = "";
            b = "";
        }
        if(i%2 == 0)
        cout <<a <<endl;
        if(i%2 != 0)
        cout <<b <<endl;
        
    }
    
    return 0;
}