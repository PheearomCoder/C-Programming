#include<iostream>
using namespace std;
 class Test{
 	private:
 		int x;
    public:
    	void setX(int a){
    		x=a;
		}
        int getX(){
        	 return 0;
		}
    
};
int main(){
   Test t;
   t.setX(13);
   cout<<t.getX();
    return 0;
}




