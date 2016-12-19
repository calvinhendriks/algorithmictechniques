#include "iostream"
#include "string"

using namespace std;

template <typename T>
inline T const &Max_find(T const &a, T const &b)
{
	return a < b ? b:a;

}
int main(int argc, char const *argv[])
{
	int i,j;
	double k,l;
	string m,n;
	cout<<"Enter 2 integers to call the Max_find method : ";
	cin>>i>>j;
	cout<<"The max between your input is : "<<Max_find(i,j)<<endl;

	cout<<"Enter 2 double to call the Max_find method : ";
	cin>>k>>l;
	cout<<"The max between your input is : "<<Max_find(k,l)<<endl;

	cout<<"Enter 2 String to call the Max_find method :";
	cin>>m>>n;
	cout<<"It is returning you the word who's first alphabet has more weight : "<<Max_find(m,n)<<endl;
	return 0;
}