#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
	char name[20],gender[20],temp[20];
	int id,n,b;
	fstream file;
	cout<<"Enter n : ";cin>>n;
	for(int i=0;i<n;i++){
		file.open("MyInfo.txt",ios::in);
		file.getline(temp,20);
		if(strcmp(temp,"")!=0){
			b++;
		}
		file.close();
		file.open("Info.txt",ios::app);
		if(b==0){
			if(i==0){
				file<<"NAME \tID \tGENDER"<<endl;
				b++;
			}
			cin.ignore();
			cout<<"input Name   :";gets(name);
			cout<<"input Gender :";gets(gender);
			cout<<"input Id     :";cin>>id;
			file<<name<<"     "<<id<<"     "<<gender<<"    "<<endl;
		}else{
			cin.ignore();
			cout<<"input Name   :";gets(name);
			cout<<"input Gender :";gets(gender);
			cout<<"input Id     :";cin>>id;
			file<<name<<"  \t   "<<id<<" \t    "<<gender<<" \t   "<<endl;
		}
	}
	
}
