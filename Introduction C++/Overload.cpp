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
		void Show(){
			cout<<"Name \tQty \tPrice"<<endl;
			cout<<name<<"\t"<<qty<<"\t"<<price<<endl;
		
		}
		void Show(int n){
			double total=price*qty;
			int dis;
			double pay;
			if(total<50){
				dis=10;
			}else{
				dis=30;
			}
			pay=total-(total*dis)/100;
			cout<<"Name \tQty \tPrice \tTotal \tDis \tPayment"<<endl;
			cout<<name<<"\t"<<qty<<"\t"<<price<<"\t"<<total<<"\t"<<dis<<"\t"<<pay<<endl;
		}
};
int main(){
	Product pt;
	pt.Input();
	pt.Show(2);
}
