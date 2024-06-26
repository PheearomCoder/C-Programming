#include<iostream>
// Over loading method
using namespace std;
 class Demo{
    public:
       void Show(){
       	for(int i=0;i<10;i++){
       		for(int j=0;j<=i;j++){
       			cout<<"* ";
			   }
			   cout<<endl;
		   }
	   }
       void Show(int n){
       	for(int i=0;i<n;i++){
       		for(int j=0;j<=i;j++){
       			cout<<"*";
			   }
			   cout<<endl;
		   }
	   }
	   void Show(int n,char c){
	   	for(int i=0;i<n;i++){
	   		for(int j=0;j<=i;j++){
	   			cout<<c<<" ";
			   }
			   cout<<endl;
		   }
	   }
};
int main(){
  Demo d;
  d.Show(20,'$');
   return 0;
}




