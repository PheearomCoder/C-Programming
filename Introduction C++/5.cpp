#include<iostream>
using namespace std;
int main(){
	
	int id;
	string name;
	string sex;
	float salary;
	string address;
	cout<<"========INPUT============"<<endl;
	cout<<"Enter Id      : ";cin>>id;
	cin.ignore();
	cout<<"Enter Name    : ";getline(cin,name);
	cout<<"Enter Gender  : ";cin>>sex;
	cout<<"Enter Salary  : ";cin>>salary;
	cin.ignore();
	cout<<"Enter Address : ";getline(cin,address);
	cout<<"========UOTPUT==========="<<endl;
	cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<"\t"<<address;
   
	
	
	
	return 0;
}
