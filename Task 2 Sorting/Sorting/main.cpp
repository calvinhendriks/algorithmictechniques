#include <iostream>
#include <SortClass.h>
#include <vector>

#include <iomanip>
#include <time.h>
#include <cmath>
#include <stdlib.h>
#include <cstdio>

using namespace std;
void vprint(vector<int>);


int main()
{
    SortClass sc;
    vector<int> v;
    //v+= 1,2,3,4,5,6,7;
    //vprint(v);




    int arr[100];
    int n = 20;
    srand(time(NULL));
    for(int i=0;i<n;i++){
            v.push_back(rand());
            arr[i] = rand();

    }
    //vprint(v);


    sc.bubblesort(arr,20);

    for (int i = 0; i < n; ++i)  {
    cout<<arr[i]<<" ";
    }
    ////////////////
    std::vector<int> myvector (10);   // 10 zero-initialized elements

  std::vector<int>::size_type sz = myvector.size();

  // assign some values:
  for (unsigned i=0; i<sz; i++) myvector[i]=i;

  // reverse vector using operator[]:
  for (unsigned i=0; i<sz/2; i++)
  {
    int temp;
    temp = myvector[sz-1-i];
    myvector[sz-1-i]=myvector[i];
    myvector[i]=temp;
  }

  std::cout << "myvector contains:";
  for (unsigned i=0; i<sz; i++)
    std::cout << ' ' << myvector[i];
  std::cout << '\n';


  printVector(myvector);

 bubbleSort(myvector);

 printVector(myvector);

  return 0;


}

void vprint(vector<int> v){
for (int i=0; i<v.size();i++){
    cout << v[i] << endl;
}
}
