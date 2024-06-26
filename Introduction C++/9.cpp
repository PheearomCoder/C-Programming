#include<iostream>
using namespace std;
void Menu(){
	cout<<"=========== MENU ============"<<endl;
	cout<<"\t1 >>> Sum Loop      "<<endl;
	cout<<"\t2 >>> Sum Loop Even "<<endl;
	cout<<"\t3 >>> Sum Loop Odd  "<<endl;
	cout<<"\t4 >>> Sum Loop !    "<<endl;
	cout<<"===========CHOOSE=============="<<endl;

}

void Process(int op){
	switch(op){
		case 1:{
		cout<<"=======Sum Loop"<<endl;
		int n,sum=0;
		cout<<"Enter N :";cin>>n;
		for(int i=0;i<n;i++){
			cout<<i<<" ";
			sum=sum+i;
		}
		cout<<"\n Sum = "<<sum<<"\n";
		}break;
		case 2:{
			cout<<"======Sum Loop Even======"<<endl;
			int n,sum=0;
			cout<<"Enter N : ";cin>>n;
			int i=0;
			while(i<n){
				if(i%2==0){
					sum=sum+i;
				}
				i++;
			}
			cout<<"\n Sum = "<<sum<<"\n";	
		}break;
		case 3:{
			cout<<"----------------Sum Loop ODD-----------"<<endl;
			int n,sum=0;
			cout<<"Enter N : ";cin>>n;
			int i=3;
			do{
				sum+=i;
				i+=2;
			}while(i<=n);
			cout<<sum<<endl;
		}break;
	}
}





int main(){
	system("color 1");
	int op;
	do{
		Menu();
		cout<<"Please enter one option : ";cin>>op;
		Process(op);
	}
	while(op!=0);
	
	return 0;
}
