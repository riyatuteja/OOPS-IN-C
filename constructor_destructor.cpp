#include<iostream>
using namespace std;

class student
{
    private: string name;
    public: int roll_no;
            bool gender;
            void getname(string s)
            {
                name=s;

            }
            void setname()
            {
                cout<<name<<endl;
            }
            // default constructor
            student()
            {
                cout<<"default constructer"<<endl;
            }
            // parameterized constructor
            student(int r, bool g)
            {
                 cout<<"parameterized nconstructer"<<endl;;
                 roll_no=r;
                 gender=g;
            }
            // copy constructor
            student(student &a)
            {
                cout<<"COPY CONSTRUCTOR"<<endl;
                roll_no=a.roll_no;
                gender=a.gender;

            }

            ~student()
            {
                cout<<"DESTRUCTOR CALLED"<<endl;
            }
            void printDetails()
            { 
                 cout<<"ROLL NO - "<<roll_no<<endl;
                string a= gender==0?"MALE":"FEMALE";
                cout<<"GENDER - "<<a<<endl;
            }
      //operator overloading
      bool operator == (student &a){
        if (roll_no==a.roll_no && gender==a.gender)
        {
            return true;
        }
        else{
            return false;
        }
        

      }      
            

    
};
int main()
{
    student s0;
     cin>>s0.gender>>s0.roll_no;
     string s;
     cin>>s;
     s0.getname(s);
     s0.setname();
    
    student s1;//default constructor called

     student s2(1,23); //parameterized constructor called
     student s3(s2);// copy constructor called
    student s4=s3;

    if(s3==s4)
    {
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Different"<<endl;
    }

return 0;

}