//This is for exersice in exam

#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int id;
		int dob;
	public:
		void Input(){   
			cout<<"Enter Name = ";cin>>name;
			cout<<"Enter Id   = ";cin>>id;
			cout<<"Enter Dob  = ";cin>>dob;
		}	
		void Show(){
			cout<<"Name = "<<name<<endl;
			cout<<"Id   = "<<id<<endl;
			cout<<"Dob  = "<<dob<<endl;
		}

		Student(){
			name="Phearom";
			id=1111;
			dob=12/12/2000;
		}
        
        Student(string name,int id,int dob){
        	name=name;
        	id=id;
        	dob=dob;
		}
};
int main(){
	Student stu;
	stu.Input();
	stu.Show();

}
