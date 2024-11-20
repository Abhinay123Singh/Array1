#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of sudents:";
    cin>>n;
  int marks[n];
  // taking input
  cout<<"Enter the marks:";
  //output 
     for(int i=0;i<=n-1;i++)
     {
         cin>>marks[i];
     }
      for(int i=0;i<=n-1;i++)
  if(marks[i]<35)
   cout<<i<<" ";
     }
