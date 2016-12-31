/*Insetion Sorting by
   Rajesh Ghosh*/

#include <iostream>

using namespace std;
void insertion_sort(int x[],int length)
{
  int key,i;
  for(int j=1;j<length;j++)
  {
     key=x[j];
     i=j-1;
     while(x[i]>key && i>=0)
     {
               x[i+1]=x[i];
         i--;
     }
     x[i+1]=key;
  }
}

int main()
{
  int A[50],n,r,x;
cout<<"Enter the Lengtgh:";
cin>>n;
for(r=0;r<n;r++)
{
	cin>>A[r];
}
cout<<"Non-Sorted List:"<<endl;
  for(x=0;x<n;x++)
  {
       cout<<A[x]<<endl;
  }
  insertion_sort(A,n);
  cout<<endl<<"Sorted List:"<<endl;
  for(x=0;x<n;x++)
  {
       cout<<A[x]<<endl;
  }

  return 0;
}
