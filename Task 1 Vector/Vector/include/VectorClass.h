#ifndef VECTORCLASS_H
#define VECTORCLASS_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <time.h>
#include <cmath>
#include <stdlib.h>
#include <cstdio>
#include <Windows.h>
#include <vector>

class VectorClass
{
    public:
        VectorClass();                              //constructor
        VectorClass(int);                           //constructor which sets maxize to argument
        VectorClass(const VectorClass&);            //copy constructor
        ~VectorClass();                             //destructor
        void pop_back();                            //remove the last element
        void push_back(int);                        //add element at end of the vector
        int size();                                 //returns the vector size
        int operator[](int);                        //operator [] now returns element at argument index
        int at(int);                                //same as operator, but checks if argument is valid
        VectorClass& operator+=(int);
        VectorClass& operator=(const VectorClass&);
        void resize(int,int = 0);                   //resize the vector to size of 1st arg., rest of the vector is filled with 2nd arg.(default is 0)
        void erase(int);                            //erase element at argument index (calls erase(int,int)).
        void erase(int,int);                        //erase elements between argument indexes.
        int capacity();                             //returns maxsize
        void clear();                               //removes all elements and makes vecsize 0;


    protected:

    private:
        int vecsize,maxsize;
        int* arr;
        void alloc_new();

};

#endif // VECTORCLASS_H
