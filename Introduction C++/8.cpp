#include<iostream>
using namespace std;

int main(){
	int id,qty,dis;
	string name;
	double price,total,payment;
	
	cout<<"Input ID : ";cin>>id;
	cin.ignore();
	cout<<"Input Name : ";getline(cin,name);
	cout<<"Input Price: ";cin>>price;
	cout<<"Input Qty  : ";cin>>qty;
	
	total = price *qty;
	if(total<=10){
	  dis =20;
	}
	else if(total<=20){
		dis = 30;
	}
	else if(total<=30){
		dis = 40;
	}
	else if(total<=40){
		dis = 50;
	}
	else if(total<=50){
		dis = 60;
	}
	else if(total<=60){
		dis = 70;
	}
	
	
	payment = total-(total*dis)/100;
	cout<<"----------------------"<<endl;
	cout<<"Total   :"<<total<<endl;
	cout<<"Payment :"<<payment<<endl;
	
	return 0;
}
