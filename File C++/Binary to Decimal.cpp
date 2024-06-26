#include <iostream>
#include<cmath>
using namespace std;
int main(int argc,char** argv) {
	
    long int binary;
    cout<<"Enter Binary Number : ";cin>>binary;
    
    int dec =0;
    int i=0;
    int rem;

    while(binary !=0){
    	rem = binary%10;
    	binary = binary /10;
    	dec = dec + rem*pow(2,i);
    	i++;
	}
    cout<<"Decimal Number is : "<<dec;
    return 0;
}
