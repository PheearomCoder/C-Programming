#include<iostream>
using namespace std;
 class Info{
    public:
        string email,pass;
    public:
    void input(){
        cout<<"Enter Email :";getline(cin,email);
        cout<<"Enter Pass : ";getline(cin,pass);
    }
    void Show(){
        cout<<email<<"\t"<<pass<<endl;
    }
};
int main(){
   int n;
   do{
   	cout<<"Enter n :";cin>>n;
   }while(n>30 || n==0 || n<0);
   
   Info in[n];
   int op;
   bool b=true;
   do{
   	cout<<"===============M E N U================="<<endl;
   	cout<<"\t1 INPUT"<<endl;
   	cout<<"\t2 SHOW"<<endl;
	cout<<"\t3 SEARCH"<<endl;
	cout<<"\t4 UPDATE"<<endl;
	cout<<"======================================="<<endl;
	cout<<"Please Select : ";cin>>op;
	cin.ignore();
	switch(op){
		case 1:{
			b=false;
			cout<<"\t<< Input >>>"<<endl;
			for(int i=0;i<n;i++){
				cout<<"-----------------"<<endl;
				in[i].input();
			}
		
		}break;
		case 2:{
			cout<<"\t<< Show >>"<<endl;
				if(b==true){
				cout<<"\t No Info...!"<<endl;
			}
			for(int i=0;i<n;i++){
				in[i].Show();
			}
		}break;
		case 3:{
			cout<<"\t<< Search >>"<<endl;
			string semail;
			cout<<"Enter Email For Search : ";getline(cin,semail);
			for(int i=0;i<n;i++){
				if(semail==in[i].email){
					in[i].Show();
				}
			}
			
		}break;
		case 4:{
			cout<<"\t<< Update >>"<<endl;
			string upemail;
			cout<<"Enter Email for Update :";getline(cin,upemail);
			for(int i=0;i<n;i++){
				if(upemail==in[i].email){
					in[i].input();
				}
			}
			
		}break;
	}
   	
   }while(op!=0);
    return 0;
}




