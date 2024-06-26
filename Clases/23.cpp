#include<iostream>
using namespace std;
 class A{
 	public:
 		int a;
 		int a1;
};
class B{
	public:
		int b;
		
};
class C:public A,public B{
	int c;
};

int main(){
    C c;
    cout<<"A  = "<<c.a<<endl;
    cout<<"A1 = "<<c.a1<<endl;
    cout<<"B  = "<<c.b<<endl;
    return 0;
}




