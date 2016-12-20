/*Selection Sorting by
Rajesh Ghosh*/

#include<iostream>

using namespace std;

void selectionSort(int numbers[], int array_size)
{
  int i, j;
  int min, temp;

  for (i = 0; i < array_size-1; i++)
  {
    min = i;
    for (j = i+1; j < array_size; j++)
    {
      if (numbers[j] < numbers[min])
        min = j;
    }
    temp = numbers[i];
    numbers[i] = numbers[min];
    numbers[min] = temp;
  }
}
int main()
{
	int a[1000],x,r;
cout<<"Enter how many elements:";
cin>>x;
cout<<endl;
cout<<"Enter the Elements:\n";
for(r=0;r<x;r++)
	{
		cin>>a[r];
	}
cout<<"Non-Sorted List:"<<endl;
for(r=0;r<x;r++)
  {
       cout<<a[r]<<endl;
  }
selectionSort(a,x);
  cout<<endl<<"Sorted List:"<<endl;
for(r=0;r<x;r++)
  {
       cout<<a[r]<<endl;
  }


return 0;
}
