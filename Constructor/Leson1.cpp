#include<iostream>
using namespace std;
class Test{
	public:
		int x,y;   //Data member
	public:
		void Input(){   //Method member
			cout<<"Enter X = ";cin>>x;
			cout<<"Enter Y = ";cin>>y;
		}	
		void Show(){
			cout<<"X = "<<x<<endl;
			cout<<"Y = "<<y<<endl;
		}
		//Defual constructor
		Test(){
			x=10;
			y=10;
		}
        //Constructor with parameter
        Test(int a,int b){
        	x=a;
        	y=b;
		}
};
int main(){
	Test t(22,33);
//	t.Input();
	t.Show();
}
