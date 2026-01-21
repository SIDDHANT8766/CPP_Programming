#include<iostream>
using namespace std;

class Demo
{
    public:
    void Display()
    {
        cout<<"Inside Display\n";
    }
};
int main()
{
    Demo dobj;     // 1 byte
    cout<<sizeof(dobj);
    return 0;
}