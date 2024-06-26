#include<iostream>
using namespace std;
 class Student{
    public:
        int id;
        string name;
    public:
    void input_stu(){
        cout<<"Enter ID :";cin>>id;
        cin.ignore();
        cout<<"Enter Name : ";getline(cin,name);
    }
    void Show(){
        cout<<"ID   : "<<id<<endl;
        cout<<"Name :"<<name<<endl;
    }

};
int main(){
    Student st;
    st.input_stu();
    st.Show();
    return 0;
}




