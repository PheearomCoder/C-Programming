#include<iostream>
#include<fstream>
using namespace std;
int main(){
	// out : override
	// append : app
	
	fstream f;
	char name[30];
	int id;
	cout<<"Enter name : ";cin>>name;
	cout<<"Enter ID : ";cin>>id;
	
	f.open("Demo.txt",ios::out);
	
	f<<name<<"\t"<<id;
	
	
	
	
	f.close();
	
	
	

	return 0;
}
