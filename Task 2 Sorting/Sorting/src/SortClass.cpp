#include "SortClass.h"
#include <iostream>
using namespace std;

SortClass::SortClass()
{
    //ctor
}

SortClass::~SortClass()
{
    //dtor
}


void SortClass::bubblesort(int arr[], int n){
    int i,j,temp;
     for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }




}

void SortClass::bubbleSort(vector<int>& a)
{
      bool swapp = true;
      while(swapp){
        swapp = false;
        for (size_t i = 0; i < a.size()-1; i++) {
            if (a[i]>a[i+1] ){
                a[i] += a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] -=a[i+1];
                swapp = true;
            }
        }
    }
}

void SortClass::printVector(vector<int> a){
    for (size_t i=0;  i <a.size();  i++) {
        cout<<a[i]<<" ";

    }
  cout<<endl;
}
