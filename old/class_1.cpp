#include "iostream"
#include "windows.h"
using namespace std;



int BinarySearch(int arr[], int num, int beg, int last)
{
    int mid;
    if(beg>last)
    {
        cout<<"Not found in array."<<endl;
        return 0;
    }
    else
    {
     mid = (beg+last)/2;
        if(arr[mid] == num)
        {
            cout<<"The value is found at "<<mid<<" index" <<endl;
            return 0;
        }
        else if(num > arr[mid])
        {
            BinarySearch(arr,num,mid+1,last);
        }
        else if(num < arr[mid])
        {
            BinarySearch(arr,num,beg,mid-1);
        }
    }
}

int LinearSearch(int arr[],int n, int num)
{
    int j;
    for(j=0;j < n;j++)
    {
        if(num == arr[j])
        {
           cout<<"The value is found at "<<j<<" index" <<endl;
           return 0;
        }

    }
 cout<<"Your Search value is not inside of array." <<endl;

}


int main()
{

int num, i, n, beg, last;
LARGE_INTEGER start,stop,freequency;
cout<<"Enter the Size of array(<=100 please!!): ";
cin>>n;
int* ary = new int[n];
for(i=1;i<=n;i++)
{
    ary[i]=i;
}
beg = 0;
last = n-1;
cout<<"Enter the value you want to search :";
cin>>num;
cout<<endl;
cout<<"This is result for BinarySearch"<<endl;
QueryPerformanceFrequency(&freequency);
QueryPerformanceCounter(&start);
BinarySearch(ary,num,beg,last);
QueryPerformanceCounter(&stop);
float time = ((stop.QuadPart - start.QuadPart) * 1000.0)/ freequency.QuadPart;
cout<< "Execution Time for Binary Search is : "<<time;
cout<<endl;
cout<<"This is result for LinearSearch"<<endl;
LinearSearch(ary,n,num);
//printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
return 0;
}
