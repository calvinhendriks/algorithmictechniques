#include "iostream"

using namespace std;


class arraay
{
	int *store;
	int psize;
	int len;

public:
	int getlen();
	void append_end(int val);
	int &operator[](int index);
	void pop_back();

	arraay();
	~arraay();
	
};

int arraay::getlen()
{
	return len;
}

int & arraay::operator[](int index)
{
	return store[index];
}

void arraay::append_end(int val)
{
	if (len == psize)
	{
		int *ns = new int[2*psize];
		psize = 2*psize;
		for (int i = 0; i < len; ++i)
		{
			ns[i] = store[i];
		}
		delete [] store;
		store = ns;
	}
	store[len] = val;
	len++;
}
void arraay::pop_back()
{
	len--;
	if (len < psize/4 && psize > 32)
	{
		psize = psize/2;
		int *ns = new int[psize];
		for (int i = 0; i < len; ++i)
		{
			ns[i] = store[i];
		}
		delete []store;
		store = ns;
	}	
}

arraay::arraay()
{
	len = 0;
	psize = 32;
	store = new int[psize];
}
arraay::~arraay()
{
	delete [] store;
}

class bheap
{
	arraay A;
public:
	int get_len();
	void push(int prio);
	int peek();
	void pop();
	//bheap();
	//~bheap();
	
};
int bheap::get_len()
{
	return A.getlen();
}
int bheap::peek()
{
	return A[0];
}
void bheap::push(int prio)
{
	A.append_end(prio);
	int k = A.getlen() -1;
	while(k>0)
	{
		int p = (k+1)/2 - 1;
		if (A[k]>A[p])
		{
			int t = A[k];
			A[k] = A[p];
			A[p] = t;
			k=p;
		}
		else
			break;
	}
}

void bheap::pop()
{
	int k = 0;
	A[0] = A[A.getlen()-1];
	A.pop_back();
	while((2*k+1) < get_len())
	{
		if ((2*k+2) >= get_len())
		{
			if (A[k] < A[2*k+1])
			{
				int temp = A[k];
				A[k] = A[2*k+1];
				A[2*k+1] = temp;
				
			}
			break;
		}
		else{
			int largest, largestind;
			if (A[2*k+1] > A[2*k+2])
			{
				largest = A[2*k+1];
				largestind = 2*k+1;

			}
			else{

				largest = A[2*k+2];
				largestind = 2*k+2;
				
			}
			if (A[k] <largest)
			{
				int tem = A[k];
				A[k]=largest;
				A[largestind] = tem;
				k = largestind; 
			}
			else{
				break;
			}
		}
	}
}


int main(int argc, char const *argv[])
{
	bheap H;
	H.push(1);
	H.push(-1);
	H.push(2);
	H.push(-2);
	H.push(3);
	H.push(4);
	cout<<"Leangth = "<<H.get_len()<<endl;
	H.push(-3);
	cout<<"Peek value = "<<H.peek()<<endl;
	while(H.get_len())
	{
		cout<<H.peek()<<endl;
		H.pop();
	}
	
	return 0;
}