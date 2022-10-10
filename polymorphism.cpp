#include<iostream>
using namespace std;

//function overloading
class Function
{
    public:
    void func(){
        cout<<"no arguments"<<endl;
    }
    void func(int x){
        cout<<"int type arguments"<<endl;
    }
    void func(double x){
        cout<<"decimal arguments"<<endl;
    }
};
//operator overloading
class complex
{
    private:
    int real,img;
    public:
    complex(int r,int i)
    {
        real=r;
        img=i;
    }

    complex operator + (complex const &obj )
    {
        complex res(obj);
        res.img=img+obj.img;
        res.real=real+obj.real;
        return res;
    }
    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }

};
//virtual function
class base{
    public:
     virtual void print()
    {
        cout<<"base class print"<<endl;
    }
    virtual void display()
    {
        cout<<"base class display"<<endl;
    }

};
class derived : public base{
    public:
    void print()
    {
        cout<<"derived class print"<<endl;
    }
    void display()
    {
        cout<<"derived class display"<<endl;
    }

};
int  main()
{
    Function obj;
    obj.func();
    obj.func(4);
    obj.func(4.5);

    complex c1(12,6);
    complex c2(14,7);

    complex c3=c1+c2;
    c3.display();

    base *o;
    derived d;
    o = &d;// binding dynamically :at runtime we assigned it the address

    o -> print();
    o -> display();

    return 0;
}