#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main(){
	
	fstream file;
	int code;
	char name[20],sex;
	float score;
	
  do{system("cls");
	file.open("Students.txt",ios::app);
	if(!file){
		cout<<"Error in creating file!!!"<<endl;
		return 0;
	}
	cout<<"<<<<<Stat Input Data>>>>>"<<endl;
	cout<<"Inpt Code : ";cin>>code;
	cin.ignore();
	cout<<"Input Name  : ";cin.getline(name,20);
	cout<<"Input Sex   : ";cin>>sex;
	cout<<"Input Score : ";cin>>score;
	file<<code<<"  "<<name<<"  "<<sex<<"  "<<score<<endl;
	cout<<"Write completed!"<<endl;
	file.close();
	cout<<"Press Enter to continue.....!";
	}while(getch()==13);
	
	
	
	
	

	return 0;
}
