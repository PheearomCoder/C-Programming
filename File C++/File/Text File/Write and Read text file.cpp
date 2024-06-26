#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main(){
	fstream file;
	char line[30];
	file.open("Students.txt",ios::in);
	if(!file){
		cout<<"Error in Creating file!!!"<<endl;
		return 0;
	}
	
	cout<<"Read from text file : "<<endl;
	while(!file.eof()){
		file.getline(line,100);
		cout<<line<<endl;
	}
	file.close();
	return 0;
}
