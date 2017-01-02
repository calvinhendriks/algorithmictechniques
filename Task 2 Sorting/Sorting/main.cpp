#include <iostream>
#include <SortClass.h>
#include <vector>
#include <iomanip>
#include <time.h>
#include <cmath>
#include <stdlib.h>
#include <cstdio>
#include <Windows.h>


using namespace std;
void vprint(vector<int>);


int main()
{
    SortClass sc;
    srand(time(NULL));
    vector<int> myvector (1);
    //assign some random values:
    for (int i=0; i<20; i++) myvector[i]=rand();
    //bubblesort
    sc.bubbleSort(myvector);
    return 0;


}

void vprint(vector<int> v){
for (int i=0; i<v.size();i++){
    cout << v[i] << endl;
}
}
