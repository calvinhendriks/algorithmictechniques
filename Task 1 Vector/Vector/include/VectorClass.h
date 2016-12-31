#ifndef VECTORCLASS_H
#define VECTORCLASS_H


class VectorClass
{
    public:
        VectorClass();              //constructor
        VectorClass(int);           //constructor which sets maxize to argument
        VectorClass(const VectorClass&);
        ~VectorClass();             //destructor
        void pop_back();         //remove the last element
        void push_back(int);           //add element at end of the vector
        int getsize();               //returns the vector size
        int operator[](int);        //operator [] now returns element at argument index
        int at(int);                 //same as operator, but checks if argument is valid
        VectorClass& operator=(const VectorClass&);
        VectorClass& operator+=(int);


    protected:

    private:
        int vecsize,maxsize;
        int* arr;
        void alloc_new();
};

#endif // VECTORCLASS_H
