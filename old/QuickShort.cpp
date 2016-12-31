#include <iostream>
using namespace std;

void quick_sort(int*,int,int);
int partition(int*,int,int);

int main(int argc, char const *argv[])
{
	int n, *arr,i;
	cout<<"Enter the Number of ELements : ";
	cin>>n;
	arr=(int*) calloc(n,sizeof(n));
	for ( i = 0; i < n; ++i)
	{
		arr[i]=i;
	}
	quick_sort(arr,0,n-1);
	cout<<"The Sorted Array :";
	for ( i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}

void quick_sort(int *arr,int p,int r)
{
  int q;
	if(p<r)
	{
	 q=partition(arr,p,r);
	 quick_sort(arr,p,q-1);
	 quick_sort(arr,q+1,r);
	 }
}

int partition(int *arr,int p,int r)
{
int x=arr[p],i,j,temp;

i=p+1;
j=r;

while(j>=i)
{
	while(arr[i]<=x && i<=r)
		i++;

	while(arr[j]>x && j>=i)
		j--;
	if(j>=i)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}
temp=arr[j];
arr[j]=arr[p];
arr[p]=temp;
return j;
}