#include<stdio.h>
#include<conio.h>

void merge(int a[],int low,int mid,int high);
void mergesort(int a[], int low, int high);
int main()
{
	int p,a[5];
	printf("\n\tEnter The Values into ARRAY 5");
	for( p=0;p<5;p++)
	{
		
		scanf("%d",&a[p]);
	}
	mergesort(a, 0, 5-1);
	printf("\nThe Sorting List is: \n");
	for(p=0;p<5;p++)
	{
        printf("%d ",a[p]);
	}
	getch();
	return 0;
}


void mergesort(int a[], int low, int high)
{
    int mid;
    if(high>low)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
	return;
}

void merge(int a[], int low, int mid, int high)
{
    int i, j, k;
	int b[5];
    i=low;
    j=mid+1;
    k=low;
    while((i<=mid)&&(j<=high))
	{
        if(a[i]<a[j])
		{
            b[k]=a[i];
            k++;
            i++;
		}
        else
		{
            b[k]=a[j];
            k++;
            j++;
		}
	}
    while(i<=mid)
	{
        b[k]=a[i];
        k++;
        i++;
	}
    while(j<=high)
	{
        b[k]=a[j];
        k++;
        j++;
	}
    for(i=low;i<k;i++)
	{
        a[i]=b[i];
	}
	return;
}

