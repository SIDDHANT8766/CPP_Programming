#include<iostream>
using namespace std;
int main()
{   
    int iStd = 0;

    cout<<"Enter your standard :";
    cin>>iStd;
    
        if(iStd == 1)
        {
           cout<<"Exam at 9 AM";
        }
        else if(iStd==2)
        { 
            cout<<"Exam at 10 AM";

        }

         else if(iStd==3)
        { 
           cout<<"Exam at 11 AM";

        }
         else if(iStd==4)
        { 
           cout<<"Exam at 12 noon";

        }
        else
        {
            cout<<"Invalid Standard";
        }


    return 0;
}