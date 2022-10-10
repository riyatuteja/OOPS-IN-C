#include <iostream>
using namespace std;

class student{
    string mail_id;
    public:
    int roll_no;
    int age;
    int class_th;
    bool gender;

    void setmail(string s)
    {
         mail_id=s;
    }
    void getmail()
    {
        cout<<mail_id<<endl;
    }
    void getDetails()
     {
        cout<<"ROLL NO. = ";
        cout<<roll_no<<endl;
        cout<<"AGE = ";
        cout<<age<<endl;
        cout<<"CLASS = ";
        cout<<class_th<<endl;
        cout<<"GENDER = ";
        cout<<gender<<endl;
        
     }
};

int main()
{
    student s[2];
    for(int i=0;i<2;i++)
    {
        cin>>s[i].roll_no>>s[i].age>>s[i].class_th>>s[i].gender;
        string t;
        cin>>t;
        s[i].setmail(t);
        
    }
    for(int i=0;i<2;i++)
    {
        s[i].getDetails();
        s[i].getmail();
    }

    return 0;
}