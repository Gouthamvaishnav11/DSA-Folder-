#include<iostream>
using namespace std;

class student{
    public:
    // properties
    string stdname;
    string stddept;
    int stdage;

    


    void takinginfo(){
        cout<<"Enter the std name : "<<endl;
        cin>>stdname;
        cout<<"Enter the std dept : "<<endl;
        cin>>stddept;
        cout<<"Enter the std age : "<<endl;
        cin>>stdage;
        cout<<"Enter the std phonenumber : "<<endl;
        cin>>phonenumber;



    }

    void display(){
        cout<<"the stdname is :"<<stdname<<endl;
        cout<<"the stddept is :"<<stddept<<endl;
        cout<<"the stdage is :"<<stdage<<endl;
         cout<<"the std phone number is :"<<phonenumber<<endl;


    }
    private:
    int phonenumber;


};

int main(){
    student s1;  //constructor call
    
    s1.takinginfo();
    s1.display();
}
