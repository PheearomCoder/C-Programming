#include<iostream>
using namespace std;
int main(){
	int id,qty;
	string name;
	double price,total,payment;
	
	cout<<"Enter ID : ";cin>>id;
	cout<<"Enter QTY : ";cin>>qty;
	cin.ignore();
	cout<<"Enter NAME : ";getline(cin,name);
	cout<<"Enter Price : ";cin>>price;

	
	
	
	return 0;
}
