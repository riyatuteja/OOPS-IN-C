#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    string gender;

     void getDetails()
     {
        cout<<"NAME = ";
        cout<<name<<endl;
        cout<<"AGE = ";
        cout<<age<<endl;
        cout<<"GENDER = ";
        cout<<gender<<endl;
        
     }

};

int main()
{
    person p1;
    cin>>p1.name>>p1.age>>p1.gender;

    p1.getDetails();

    return 0;

}