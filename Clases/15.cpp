#include<iostream>
using namespace std;
 class Product{
    public:
    	string name;
        int qty;
        float price;
        
    public:
    void input(){
        cout<<"Enter Name : ";getline(cin,name);
        cout<<"Enter 	QTY :";cin>>qty;
        cout<<"Enter Price:";cin>>price;
    }
    void Show(){
        cout<<"Name :"<<name<<endl;
        cout<<"Qty   : "<<qty<<endl;
        cout<<"Price   : "<<price<<endl;
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
		return Total()-(Total()}*Discount())/100;

};
int main(){
	
   Product p1;
   p1.input();
   p1.Show();
   cout<<"Total ="<<p1.Total()<<endl;
   cout<<"Dis ="<<p1.Discount()<<endl;
   cout<<"Payment ="<<p1.Payment()<<endl;
   
    return 0;

}




