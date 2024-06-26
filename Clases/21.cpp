#include<iostream>
using namespace std;
class Game{
	private :
		int level;
		float coin;
		double gem;
		string name;
    public:
    void setlevel(int level){
		this->level=level;
	}
	int getlevel(){
		return level;
	}
	void setcoin(float coin){
		this->coin=coin;
	}
	float getcoin(){
		return coin;
	}
	void setgem(double gem){
		this->gem=gem;
	}
	double getgem(){
		return gem;
	}
	void setname(string name){
		this->name=name;
	}
	string getname(){
		return name;
	}

};
int main(){
	Game g;
		string name;
        int level;
		float coin;
		double gem;
	
		
		cout<<"Enter Name : ";getline(cin,name);
		cout<<"Enter Levl : ";cin>>level;
		cout<<"Enter Gem : ";cin>>gem;
		cout<<"Enter Coin : ";cin>>coin;
		
		g.setname(name);
		g.setlevel(level);
		g.setgem(gem);
		g.setcoin(coin);
		cout<<"-----------GET----------------"<<endl;
		cout<<"Name : "<<g.getname()<<endl;
		cout<<"Level : "<<g.getlevel()<<endl;
		cout<<"Gem: "<<g.getgem()<<endl;
		cout<<"Coin : "<<g.getcoin()<<endl;
		
		
		
    return 0;
}




