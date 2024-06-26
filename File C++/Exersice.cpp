#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    char name[20], gender[30];
    int id,n,i,c;
    char temp[20];
    fstream f;

    cout << "Enter n: ";cin >> n;
    for(i=0;i<n;i++){
    	f.open("Info.txt",ios::in);
    	f.getline(temp,20);
    	if(strcmp(temp,"")!=0){
    		c++;
		}
	    f.close();
		f.open("Home.txt",ios::app);
		if(c==0){
			if(i==0){
				f<< "NAME\tID\tGENDER"<<endl;
				c++;
			}
			cin.ignore();
			cout << "Enter Name   : ";gets(name);
            cout << "Enter ID     : ";cin>>id;
            cout << "Enter Gender : ";cin>>gender;
            f<<name<<"\t"<<id<<"\t"<<gender<<endl;
		}else{
			cin.ignore();
			cout << "Enter Name   : ";gets(name);
            cout << "Enter ID     : ";cin>>id;
            cout << "Enter Gender : ";cin>>gender;
            f<<name << "\t"<<id<<"\t"<<gender<<endl;
		}
	}

    
}
