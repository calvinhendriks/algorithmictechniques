#include "VectorClass.h"
#include <iostream>
using namespace std;

VectorClass::VectorClass()
{
    maxsize = 20;
    arr = new int[maxsize];
    vecsize = 0;
}

VectorClass::VectorClass(int i)
{
    maxsize = i;
    arr = new int[maxsize];
    vecsize = 0;
}

VectorClass::VectorClass(const VectorClass& v){
    maxsize = v.maxsize;
    vecsize = v.vecsize;
    arr=new int[maxsize];
    for(int i=0; i<v.vecsize; i++ ){
        arr[i]=v.arr[i];
    }

}


VectorClass::~VectorClass()
{
    delete[] arr;
}

void VectorClass::alloc_new(){
    maxsize=vecsize*2;
    int* temp=new int[maxsize];
    for(int i=0; i<vecsize; i++){
        temp[i]  = arr[i];
    }
    delete[] arr;
    arr=temp;
}

void VectorClass::pop_back(){
	vecsize--;

	if (vecsize < maxsize/4 && maxsize > 32)
	{
		maxsize = maxsize/2;
	}

	int* temp = new int[maxsize];
    for (int i = 0; i < vecsize; ++i)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;


}




void VectorClass::push_back(int i){

    if(vecsize+1>maxsize){
        alloc_new();
    }
    arr[vecsize] = i;
    vecsize++;
}

int VectorClass::getsize(){
    return vecsize;
}

int VectorClass::operator[](int i){
    return arr[i];
}


int VectorClass::at(int i){
    if(i<vecsize){
        return arr[i];
    }
    throw 10;
}

VectorClass& VectorClass::operator+=(int i){

    this->push_back(i);
    return *this ;
}

VectorClass& VectorClass::operator=(const VectorClass& v){
        if(this!=&v){
            maxsize = v.maxsize;
            vecsize = v.vecsize;
            delete[] arr;
            arr=new int[maxsize];
            for(int i=0;i<v.vecsize;i++){
                arr[i]=v.arr[i];
            }
        }
        return *this;


}

void VectorClass::resize(int n , int val)
{
	int* newarr;
	int oldsize = vecsize;

	if ( n < 0)
	{
		cout<<"Sorry.!! Invalid Position.\n";
		return;
	}
	else if (n > vecsize )
	{

		newarr = new int[n*2];
		maxsize = n*2;

		for (int i = 0; i < vecsize; ++i)
		{
			newarr[i] = arr[i];
		}

		for (int j = vecsize; j < n; j++)
		{
			vecsize++;
			newarr[j] = val;
		}
	}
	else if (n == vecsize)
	{
		cout<<"The size of your vector is already "<<n<<" elements.";
		return;
	}
	else
	{
        vecsize = n;
		if (vecsize < maxsize/4 && maxsize > 32)
        {
		maxsize = maxsize/2;

        }

        newarr = new int[maxsize];
		for (int i = 0; i < vecsize; ++i)
		{
			newarr[i] = arr[i];
		}






		//newarr = new int[n];
		//for (int i = 0; i < n; ++i)
		//{
		//	newarr[i] = arr[i];
		//}
		//for (int j = 0; j < (oldsize-n) ; j++)
		//{
			//vecsize--;
		//}
		//vecsize = n;
	}

	delete[] arr;
	arr = newarr;

}

void VectorClass::erase(int index){
    if(index >= 0 && index < vecsize){
        int a =index;
        int b = index;
        this->erase(a,b);
    }
    else{
        cout<<"index invalid"<<endl;
    }

}

void VectorClass::erase(int i1, int i2){
        if(i1 >= 0 && i2 >= 0 && i1 < vecsize && i2 < vecsize){
            //if erase with only one argument was called
            if(i1 = i2){
                //check if truncating is necessary
                if (vecsize-1 < maxsize/4 && maxsize > 32)
                {
                maxsize = maxsize/2;
                }

                int j = 0;
                int* newarr = new int[maxsize];
                for(int i = 0; i < vecsize ; i++){
                    if(i != i1){
                    newarr[j++]=arr[i];
                    }

                }
                vecsize--;
                delete[] arr;
                arr = newarr;



            }
            //if erase with 2 arguments was called
            else{
                if(i2 > i1){

                    int elements = (i2 - i1) +1;
                    int j = 0;
                    //check if truncating is necessary
                    if (vecsize-elements < maxsize/4 && maxsize > 32)
                    {
                    maxsize = maxsize/2;
                    }

                    int* newarr = new int[maxsize];

                    //first segment to be copied
                    for(int i = 0; i < i1; i++){
                        newarr[j++] = arr[i];
                    }

                    //last segment to be copied
                    for(int i = i2+1; i < vecsize; i++){
                        newarr[j++] = arr[i];
                    }

                    vecsize = vecsize - elements;
                    delete[] arr;
                    arr = newarr;

                }

            }
        }
        else{

            cout<<"invalid arguments"<<endl;
        }

}




