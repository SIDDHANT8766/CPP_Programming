#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
    
    private:
        int j;
        
    protected:
        int k;

    public:
       Base()
       {
         i=10; j=20; k=30;
       } 
       
       void fun()
       {
        cout<<i<<"\n";       //Allowed
        cout<<j<<"\n";       //Allowed
        cout<<k<<"\n";       //Allowed
       }

};

class Derived : public Base
{
    public:
       void Display()
       {
        cout<<i<<"\n";     //Allowed
        cout<<j<<"\n";     // not allowed (private)
        cout<<k<<"\n";     //Allowed
       }
};

int main()
{
    Derived dobj;
    Base bobj;

    cout<<bobj.i<<"\n";       //allowed
    cout<<bobj.j<<"\n";       //error na
    cout<<bobj.k<<"\n";       //Eror

    cout<<dobj.i<<"\n";       //allowed
    cout<<dobj.j<<"\n";       //not allowed
    cout<<dobj.k<<"\n";       // not allowed because it is outside of base class
     

    dobj.fun();
    dobj.Display();
   

    return 0;
}