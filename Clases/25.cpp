#include<iostream>
using namespace std;
 class Test{
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
	   			cout<<" ";
			   }
			   cout<<endl;
		   }
	   }
	   void Show(int n,char ch){
	   	for(int i=0;i<10;i++){
	   		for(int j=0;j<=i;j++){
	   			cout<<ch<<" ";
			   }
			   cout<<endl;
		   }
	   }
	   void Show(char ch){
	   	for(int i=0;i<10;i++){
	   		for(int j=0;j<=i;j++){
	   			cout<<ch<<" ";
			   }
			   cout<<endl;
		   }
	   }
	   void Show(char ch,int n){
	   	for(int i=0;i<10;i++){
	   		for(int j=0;j<=i;j++){
	   			cout<<ch<<" ";
			   }
			   cout<<endl;
		   }
	   }
	  
	   void Show(string ch){
	   	for(int i=0;i<10;i++){
	   		for(int j=0;j<=i;j++){
	   			cout<<ch<<" ";
			   }
			   cout<<endl;
		   }
	   }
	   
	   void Show(int n,string ch){
	   	for(int i=0;i<10;i++){
	   		for(int j=0;j<=i;j++){
	   			cout<<ch<<" ";
			   }
			   cout<<endl;
		   }
	   }
	   void Show(string ch,int n){
	   	for(int i=0;i<10;i++){
	   		for(int j=0;j<=i;j++){
	   			cout<<ch<<" ";
			   }
			   cout<<endl;
		   }
	   }
	   
	   
	   
};
int main(){
  Test t;
  t.Show("\6",30);
   return 0;
}




