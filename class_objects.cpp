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
    
    // for more thn one object i can use arrays
    
     person arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i].name>>arr[i].age>>arr[i].gender;

    }
    for(int i=0;i<4;i++)
    {
        arr[i].getDetails();

    }

    return 0;

}
