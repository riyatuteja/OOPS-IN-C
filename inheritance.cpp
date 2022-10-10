#include <iostream>
using namespace std;
//single inheritance
class A{
    public: 
    void func()
    {
        cout<<"inherited"<<endl;
    }

};

class B: public A
{

};
//MULTIPLE INHERITANCE
class a{
public: 
    void afunc()
    {
        cout<<"f a\n"<<endl;
    }

};
class b{
public: 
    void bfunc()
    {
        cout<<"f b\n"<<endl;
    }

};
class c: public a,public b{
    
};
//multilevel inheritance
class aa{
public: 
    void aafunc()
    {
        cout<<"f aa\n"<<endl;
    }

};
class bb:public aa{
public: 
    void bbfunc()
    {
        cout<<"f bb\n"<<endl;
    }

};
class cc:public bb{};
//hybrid inheritance
int main()
{   //single inheritance
    B b;
    b.func();
    //multiple inheritance
    c C;
    C.afunc();
    C.bfunc();
    //multilevel inheritance
    cc Z;
    Z.aafunc();
    Z.bbfunc();
    
    return 0;
}