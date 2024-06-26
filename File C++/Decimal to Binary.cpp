#include <iostream>
using namespace std;

int main() {
	
    int num,bin;
    cout<<"Enter  Number to convert : ";cin>>num;
    cout<<"The Binary Equivalent : ";
    while(num>0){
    	bin=num%2;
    	cout<<bin;
		num/=2;
	}
    
    return 0;
}
