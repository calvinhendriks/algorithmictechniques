#include "iostream"
#include "math.h"

using namespace std;

int main(int argc, char const *argv[])
{
	int H;
	double result;
	while(EOF){
	cout <<"Enter H : ";
	cin >>H;
	result = ((5+(3*sqrt(5)))/10) * (pow( (1+sqrt(5))/2,H))+((5-(3*sqrt(5)))/10) * (pow( (1-sqrt(5))/2,H));
	cout<<"Result = "<<result<<endl<<endl;
	}
	return 0;
}