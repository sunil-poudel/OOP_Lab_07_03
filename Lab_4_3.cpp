//WAP to illustrate execution order of constructors and destructors when both the base and derived
//class has constructor and destructor in single and multiple inheritances

#include <iostream>
using namespace std;
class baseSingle{
public:
    baseSingle(){cout<<"single inheritance base constructor!"<<endl;}
    ~baseSingle(){cout<<"single inheritance base destructor!"<<endl;}
};
class childSingle{
public:
    childSingle(){cout<<"single inheritance Child constructor!"<<endl;}
    ~childSingle(){cout<<"single inheritance Child destructor!"<<endl;}
};
//for multiple inheritance
class base{
public: base(){cout<<"multiple inheritance base constructor!"<<endl;};
    ~base(){cout<<"multiple inheritance base class destrutor!"<<endl;}
};
class child1:virtual public base{
public: child1(){cout<<"multiple inheritance child 1 constructor!"<<endl;}
    ~child1(){cout<<"multiple inheritance child 1 class destrutor!"<<endl;}
};
class child2:virtual public base{
public: child2(){cout<<"multiple inheritance child 2 constructor!"<<endl;}
    ~child2(){cout<<"multiple inheritance child 2 class destrutor!"<<endl;}
};
class grandChild1:public child1, public child2{
public: grandChild1(){cout<<"multiple inheritance grandchild 1 constructor!"<<endl;}
    ~grandChild1(){cout<<"multiple inheritance grand child 1 class destrutor!"<<endl;}
};
int main(){
    grandChild1 g;
    cout<<string(25, '-')<<endl;
    childSingle c;
}