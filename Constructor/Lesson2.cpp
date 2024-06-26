#include<iostream>
using namespace std;
class Test{
	public:
		string name;
		int id;
		float score1,score2,score3;
		
	public:
		void Input(){ 
	 
		  cout<<"Input name   = ";cin>>name;
		  cout<<"Input Id     = ";cin>>id;
		  cout<<"Input Score1 = ";cin>>score1;
		  cout<<"Input Score2 = ";cin>>score2;
		  cout<<"Input Score3 = ";cin>>score3;
		}	
		void Show(){
		  cout<<"Name   = "<<name<<endl;
		  cout<<"ID     = "<<id<<endl;
		  cout<<"Score1 = "<<score1<<endl;
		  cout<<"Score2 = "<<score2<<endl;
		  cout<<"Score3 = "<<score3<<endl;
		}
		
		Test(){
			name="Phearom";
			id=1122;
		    score1=10;
		    score2=20;
		    score3=23;
		
		}
        
        Test(string Name,int id,float score1,float score2,float score3){
        name=Name;
        score1=score1;
        score2=score2;
        score3=score3;
		}
};
int main(){
	Test t("Phearom",00012,90,80,70);
//	t.Input();
	t.Show();
}
