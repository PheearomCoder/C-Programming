#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	// append : app
	fstream f;
	
	char name[20];
	int code,qty;
	float price;
	double total_amount=0,total;
	int n;
	cout<<"Enter N : ";cin>>n;
	int i=0;
	while(i<n){
		cin.ignore();
		f.open("ETEC1.txt",ios::app);
		if(i==0){
			f<<"NAME \t CODE \tPRICE \tQTY"<<endl;
		}
		cout<<"Enter name  : ";gets(name);
	    cout<<"Enter code  : ";cin>>code;
	    cout<<"Enter price : ";cin>>price;
    	cout<<"Enter qty   : ";cin>>qty;
    	total_amount=price*qty;
    	total+=total_amount;
	    f<<name<<"\t"<<code<<"\t"<<price<<"\t"<<qty<<endl;
	    if(i==n-1){
	    	f<<"\t\tTotal Product($) = "<<total<<endl;
		}
		f.close();
    	i++;
	}

	
	
	
	
	
	

	return 0;
}
