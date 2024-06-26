#include<iostream>
using namespace std;
 class Product{
    public:
    	string name;
    	int qty;
    	float price;
    public:
	void input(){
		cout<<"Enter Name :";getline(cin,name);
		cout<<"Enter Qty : ";cin>>qty;
		cout<<"Enter Price : ";cin>>price;
	}	
	void Show(){
		cout<<"NAME \t QTY \t PRICE";
		cout<<name<<"\t"<<qty<<"\t"<<price<<endl;
	}
	void Show(int n){
		double total=price*qty;
		int dis;
		double pay;
		if(total<50){
			dis=10;
		}else{
			dis=20;
		}
		pay=total-(total*dis)/100;
		cout<<"NAME \t QTY \t PRICE \tTOTAL \tDIS \tPAYMENT"<<endl;
		cout<<name<<"\t"<<qty<<"\t"<<price<<"\t"<<total<<"\t"<<dis<<"\t"<<pay<<endl;
	}
    	
};
int main(){
   Product p;
   p.input();
   p.Show();
    return 0;
}




