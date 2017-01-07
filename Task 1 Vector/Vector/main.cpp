#include <iostream>
#include <VectorClass.h>

using namespace std;
void vprint(VectorClass);
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
    vprint(vec1);

    vec1.pop_back();
    cout<<"test pop_back function."<<endl;
    vprint(vec1);

    vec1+=11;                   //test +=operator
    cout<<"test += constructor"<<endl;
    vprint(vec1);

    VectorClass vec2(vec1);     //test copy constructor
    cout<<"test copyconstructor"<<endl;
    vprint(vec2);

    vec3 = vec1;                 //test = operator adfasdf
    cout<<"test = operator"<<endl;
    vprint(vec3);


    //vec1.resize(5);
    //cout<<"test resize function (smaller)"<<endl;
    //vprint(vec1);

    vec1.resize(20,5);
    cout<<"test resize (bigger) with given value "<<endl;
    vprint(vec1);

    //vec3.push_back(6);
    //vprint(vec3);
    //vec1.push_back(7);
    //vprint(vec3);
    vec1.resize(30);
    cout<<"Test resize (bigger) without given value " <<endl;

    vprint(vec1);
    vprint(vec3);
    vprint(vec2);

    vec1.erase(1);          //test erase function with only 1 argument
    cout<<"Test erase function with only 1 argument"<<endl;
    vprint(vec1);

    vec1.erase(5,8);
    cout<<"Test erase function with 2 arguments (5,6)."<<endl;
    vprint(vec1);


    return 0;

}

void vprint(VectorClass v){

    for(int i = 0; i < v.getsize() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
