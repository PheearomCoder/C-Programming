#include<iostream>
using namespace std;
class Product{
	public:
	string name;
	int qty;
	float price;
	
	void Input(){
		cout<<"Enter name product : ";getline(cin,name);
		cout<<"Enter qty product : ";cin>>qty;
		cout<<"Enter price product : ";cin>>price;
	}
	void show(){
		cout<<" Name : "<<name<<endl;
		cout<<"Qty  : "<<qty<<endl;
		cout<<"Price  : "<<price<<endl;
	}
	double Total(){
		return price*qty;
	}
	int Discount(){
		int dis;
		if(Total()<50){
			dis=10;
		}else{
			dis=20;
		}
		return dis;
	}
	double Payment(){
		return Total()-(Total()*Discount())/100;
	}
};
int main(){
	Product pt;
	pt.Input();
	pt.show();
	cout<<"Total = "<<pt.Total()<<endl;
	cout<<"Discount = "<<pt.Discount()<<endl;
	cout<<"Payment  = "<<pt.Payment()<<endl;
};
