/*Quick Sorting by
Rajesh Ghosh*/

#include<stdio.h>
#include<alloc.h>
#include<stdlib.h>

void quick_sort(int*,int,int);
int partition(int*,int,int);
int main(void)
{
int i,n;
int *a;

printf("Enter noe: ");
scanf("%d",&n);

a=(int*)calloc(n,sizeof(int));

for(i=0;i<n;i++)
{
  scanf(" %d",&a[i]);
}

quick_sort(a,0,n-1);

puts("\nThe Sorted array:");

for(i=0;i<n;i++)
{
  printf("\n%d",a[i]);
}

return 0;
}


void quick_sort(int* a,int p,int r)
{
  int q;
	if(p<r)
	{
	 q=partition(a,p,r);
	 quick_sort(a,p,q-1);
	 quick_sort(a,q+1,r);
	 }

}

int partition(int*a,int p,int r)
{
int x=a[p],i,j,temp;

i=p+1;
j=r;

while(j>=i)
{
	while(a[i]<=x && i<=r)
		i++;

	while(a[j]>x && j>=i)
		j--;
	if(j>=i)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
temp=a[j];
a[j]=a[p];
a[p]=temp;
return j;
}















