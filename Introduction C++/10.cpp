#include<iostream>
using namespace std;
int main(){
	int op,id[100],n=0,i=0, ids,iss;
	string name[30],gender[20];
	double salary[100];
	do{
		cout<<"1. Input Staff "<<endl;
		cout<<"2. Output Staff"<<endl;
		cout<<"3. Search Staff ( Using ID)"<<endl;
		cout<<"4. Exit        "<<endl;
		cout<<"Input Your Choise = ";cin>>op;
		switch(op){
			case 1:{
				cout <<"======== Input staff info=========="<<endl;
				cout <<"Input Staff ID : ";cin>>id[n];
				cout <<"Input Staff Name : ";cin>>name[n];
				cout <<"Input Staff Gender: ";cin>>gender[n];
				cout <<"Input Staff Salary : ";cin>>salary[n];
				n++;
			}break;
			case 2:{
				cout<<"==============List staff============"<<endl;
				
				for(i=0;i<n;i++){
					cout <<id[i]<<"\t";
					cout <<name[i]<<"\t";
					cout <<gender[i]<<"\t";
					cout <<salary[i]<<endl;
					
				}
			}break;
			case 3:{
				cout <<"========== Search by id=========="<<endl;
				cout <<"Please input staff id to search :";cin >> ids;
				iss=0;
				for(i=0;i<n;i++){
					if(ids == id[i]){
						cout << "-----Search found-----"<<endl;
						cout <<id[i]<<"\t";
					    cout <<name[i]<<"\t";
				    	cout <<gender[i]<<"\t";
					    cout <<salary[i]<<endl;
					    iss=1;
					    break;
					}
				}
				if(iss ==0){
					cout << iss<<" \t Not found in list. Please try again"<<endl;
				}
				
			}break;
			case 4:{
				
				
			}break;
		}
	}while(op!=4);
	
	
	
	return 0;
}
