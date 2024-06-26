#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream f;
	char temp[20];
	f.open("ETEC1.txt",ios::in);
	

	while(!f.eof()){
		f.getline(temp,100);
		cout<<temp<<endl;
	}
	f.close();
	
	

	return 0;
}
