#include <iostream>
#include <VectorClass.h>


void vprint(VectorClass);

using namespace std;

int test(){
    int n = 15;
    VectorClass vec1;                                       //test normal constructor
    cout<<vec1.capacity()<<endl;

    VectorClass vec2(30);                                   //test constructor with integer argument.
    cout<<vec2.capacity()<<endl;

    for(int i = 0; i < n; i++){
        vec1.push_back(i);

    }

    cout<<"\nTest push_back function."<<endl;
    vprint(vec1);
    vprint(vec2);

    VectorClass vec3(vec1);                                 //test copy constructor
    cout<<"\nTest copyconstructor:        vec3(vec1)"<<endl;

    cout<<"vec1: " <<endl;
    vprint(vec1);
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"vec3: " <<endl;
    vprint(vec3);



    vec1.pop_back();                                        //test pop_back
    cout<<"\nTest pop_back function:      vec1.pop_back"<<endl;

    cout<<"vec1: " <<endl;
    vprint(vec1);
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"vec3: " <<endl;
    vprint(vec3);

    VectorClass vec4 = vec1;                                //test = operator
    cout<<"\nTest = operator:             vec4 = vec1"<<endl;

    cout<<"vec1: " <<endl;
    vprint(vec1);
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"vec3: " <<endl;
    vprint(vec3);
    cout<<"vec4: " <<endl;
    vprint(vec4);

    cout<<"\nTest [] operator:              vec4[5] = " << endl;      //test [] operator
    cout<<vec4[5]<<endl;


    vec4+=66;                                                   //test +=operator
    cout<<"\nTest += operator:              vec4+= 66 "<<endl;

    cout<<"vec1: " <<endl;
    vprint(vec1);
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"vec3: " <<endl;
    vprint(vec3);
    cout<<"vec4: " <<endl;
    vprint(vec4);

    cout<<"\nTest at function:              vec4.at(6) : "<<endl;      //testing at function
    cout<<vec4.at(6)<<endl;


    cout<<"\nTest at function:              vec4.at(30) : "<<endl;
    cout<<vec4.at(30)<<endl;

    vec1.resize(10);
    cout<<"\nTest resize function:          vec1.resize(10)"<<endl;
    cout<<"vec1: " <<endl;
    vprint(vec1);

    vec1.resize(20,5);
    cout<<"\nTest resize function:          vec1.resize(20,5)"<<endl;
    cout<<"vec1: " <<endl;
    vprint(vec1);


    vec1.resize(30);
    cout<<"\nTest resize function:          vec1.resize(30)" <<endl;
    cout<<"vec1: " <<endl;
    vprint(vec1);


    vec1.erase(3);          //test erase function with only 1 argument
    cout<<"\nTest erase function with only 1 argument (vec1.erase(3))"<<endl;
    cout<<"vec1: " <<endl;
    vprint(vec1);

    vec1.erase(5,8);
    cout<<"\nTest erase function with 2 arguments (vec1.erase(5,8))."<<endl;
    cout<<"vec1: " <<endl;
    vprint(vec1);

    cout<<"\nTest clear funciton:                   vec1.clear()"<<endl;
    vec1.clear();
    cout<<"vec1: " <<endl;
    vprint(vec1);
    cout<<"size of vec1:  "<<vec1.size()<<" maxsize of vec1: "<<vec1.capacity()<<endl;


    //Testing if automatic truncation/expanding works
    cout<<"\nTESTING AUTOMATIC TRUNCATION / EXPANSION OF VECTOR"<<endl;
    n = 40;

    //expanding when using push_back:
    vec2.clear();
    for(int i = 0; i < n; i++){
        vec2.push_back(i);
    }
    cout<<"\nCleared vec2 and added 40 elements: "<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;
    vec2.push_back(66);
    cout<<"added 1 element:     vec2.pushback(66)"<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;

    //truncating when using pop_back
    vec2.clear();
    n = 21;
    for(int i = 0; i < n; i++){
        vec2.push_back(i);

    }
    cout<<"\nCleared vec2 and added 21 elements: "<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;
    cout<<"Deleted 12 elements: (using pop_back)"<<endl;
     for(int i = 0 ; i< 12; i++){
        vec2.pop_back();
     }
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;

    //truncating when using resize (one argument)
    vec2.clear();
    n = 21;
    for(int i = 0; i < n; i++){
        vec2.push_back(i);

    }
    cout<<"\nCleared vec2 and added 21 elements: "<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;
    vec2.resize(8);
    cout<<"Resized vec2 to 8 elements: (vec2.resize(8))"<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;

    //truncating when using resize (two arguments)
    vec2.clear();
    n = 21;
    for(int i = 0; i < n; i++){
        vec2.push_back(i);

    }
    cout<<"\nCleared vec2 and added 21 elements: "<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;
    vec2.resize(8,5);
    cout<<"Resized vec2 to 8 elements: (vec2.resize(8,5))"<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;

    //expanding when using resize (one argument)
    vec2.clear();
    n = 21;
    for(int i = 0; i < n; i++){
        vec2.push_back(i);

    }
    cout<<"\nCleared vec2 and added 21 elements: "<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;
    vec2.resize(41);
    cout<<"Resized vec2 to 41 elements: (vec2.resize(41))"<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;

    //expanding when using resize (two arguments)
    vec2.clear();
    n = 21;
    for(int i = 0; i < n; i++){
        vec2.push_back(i);

    }
    cout<<"\nCleared vec2 and added 21 elements: "<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;
    vec2.resize(41,7);
    cout<<"Resized vec2 to 41 elements: (vec2.resize(41,7))"<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;




    //truncating when using erase (one argument)
    vec2.clear();
    n = 21;
    for(int i = 0; i < n; i++){
        vec2.push_back(i);

    }
    cout<<"\nCleared vec2 and added 21 elements: "<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;
    cout<<"Deleted 12 elements: (using erase(0))"<<endl;
     for(int i = 0 ; i< 12; i++){
        vec2.erase(0);
     }
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;

    //truncating when using erase (2 arguments)
    vec2.clear();
    n = 21;
    for(int i = 0; i < n; i++){
        vec2.push_back(i);

    }
    cout<<"\nCleared vec2 and added 21 elements: "<<endl;
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;
    cout<<"Deleted 12 elements: (using erase(2,13))"<<endl;
    vec2.erase(2,13);
    cout<<"vec2: " <<endl;
    vprint(vec2);
    cout<<"size of vec2:  "<<vec2.size()<<" maxsize of vec2: "<<vec2.capacity()<<endl;


    return 0;


}

void vprint(VectorClass v){

    for(int i = 0; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
