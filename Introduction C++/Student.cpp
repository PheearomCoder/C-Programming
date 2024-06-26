#include<iostream>
using namespace std;
class Student{
	public:
		int id;
		string name;
		
		public:
		
		void Input_stu(){
			cout<<"Enter Name : ";getline(cin,name);
			cout<<"Enter ID : ";cin>>id;
		}
		void show(){
			cout<<"name : "<<name<<endl;
			cout<<"ID : "<<id<<endl;
		}
};
int main(){
	Student st;
	st.Input_stu();
	st.show();
	
	return 0;
}
