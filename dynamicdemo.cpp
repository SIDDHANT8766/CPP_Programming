#include<iostream>
using namespace std;

int main()
{
  int length =0;
  int *Arr = NULL;


  cout<<"Enter the number of elements: \n";


  cin>>length;
     // allocate the memory
  Arr= new int[length];

  if (Arr == NULL)
  {
     cout<<"Unable to allocate memory\n";
  }
  else
  {
    cout<<"Memory gets succesfully allocate\n";
  }

// use memmory

// memmory delete

   delete [] Arr;

    return 0;
}