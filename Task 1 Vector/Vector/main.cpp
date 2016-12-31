#include <iostream>
#include <VectorClass.h>

using namespace std;

int main(){

    VectorClass vec1;
    VectorClass vec3;

    int inp;
    while(1){
        cin >> inp;
        if(inp == -1){break;}
        vec1.push_back(inp);
    }
    cout << "you've entered " <<vec1.getsize() << " elements." <<endl;
    cout << "The elements in the vector are: ";
    for(int i=0;i<vec1.getsize();i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;

    vec1+=11;                   //test +=operator

    VectorClass vec2(vec1);     //test copy constructor
    for(int i=0;i<vec2.getsize();i++){
        cout<<vec2[i]<<" ";
    }
    cout<<endl;

    vec3 = vec1;                 //test =operator
    for(int i=0;i<vec3.getsize();i++){
        cout<<vec3[i]<<" ";
    }

    return 0;

}
