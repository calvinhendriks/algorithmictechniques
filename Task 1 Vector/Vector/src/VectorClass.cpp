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
		int* temp = new int[maxsize];
		for (int i = 0; i < vecsize; ++i)
		{
			temp[i] = arr[i];
		}
		delete[] arr;
		arr = temp;
	}
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


