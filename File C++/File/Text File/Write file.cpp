#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;
	char text[100];
	file.open("Students.txt",ios::out);
	if(!file){
		cout<<"Enter in Creating file!!!"<<endl;
		return 0;
	}
	cout<<"File Created Successfully."<<endl;
	cout<<"Input Text to write : ";cin.getline(text,100);
	file<<text;
	file.close();
	
	return 0;
}
