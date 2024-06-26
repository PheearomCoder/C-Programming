#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;
	file.open("Students.txt",ios::in);
	if(!file){
		cout<<"Error in Opening file!!!"<<endl;
		return 0;
	}
	
	char ch;
	cout<<"File cotent : ";
	while(!file.eof()){
		file>>ch;
		cout<<ch;
	}
	file.close();
	
	

	return 0;
}
