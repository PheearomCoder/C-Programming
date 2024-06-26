#include<iostream>
using namespace std;
class Demo{
	int i,j;
	public:
		void Show(){
			for(int i=0;i<10;i++){
				for(j=0;j<=i;j++){
					cout<<" * ";
				}
				cout<<endl;
			}
		}
			void Show(int n){
				for(int i=0;i<n;i++){
				for(j=0;j<=i;j++){
					cout<<" *";
				}
				cout<<endl;
			}
			
		}
		void Show(int n,char c){
			for(int i=0;i<n;i++){
				for(j=0;j<=i;j++){
					cout<<c<<" ";
				}
				cout<<endl;
			}
			
		}
	
};
int main(){
	Demo d;
	d.Show();
}
