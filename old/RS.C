#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void stable_sort(int*,int*,int,int,int);
void radix_sort(int*,int,int);
int digit(int, int);

int main(void)
{
int i,n,max;
int *a;


printf("Enter noe: ");
scanf("%d",&n);


a=(int*)calloc(n,sizeof(int));

scanf(" %d",&a[0]);

max=a[0];

for(i=1;i<n;i++)
{
  scanf(" %d",&a[i]);
  if(a[i]>max)
	max=a[i];
}

i=0;
do
{
max = max/10;
i++;
}while(max!=0);


radix_sort(a,n,i);

puts("\nThe Sorted array:");


for(i=0;i<n;i++)
{
  printf("\n%d",a[i]);
}

getch();
return 0;
}


void stable_sort(int* a,int* b,int n,int k,int bhajak)
{

int *c,i;
c=(int*)calloc(k+1,sizeof(int));

for(i=0;i<n;i++)
{

	 c[ digit(a[i],bhajak) ]++;
}
for(i=1;i<=k;i++)
    c[i] = c[i] + c[i-1];

for(i=n-1;i>=0;i--)
{
  b[c[digit(a[i],bhajak)]-1] =	a[i];
  c[digit(a[i],bhajak)]--;
}

}

void radix_sort(int *a, int n, int k)
{
int i,j;

int*b ;

b=(int*)calloc(n,sizeof(int));
for(i=1;i<=k;i++)
{

 stable_sort(a,b,n,9,pow(10,i-1));
 for(j=0;j<n;j++)
    a[j]=b[j];
}

}

int digit(int n, int bhajak)
{
n/=bhajak;
return n%10;
}

