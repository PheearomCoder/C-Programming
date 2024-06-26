#include<iostream>
using namespace std;
 class Person{
 	public:
 		string name,gender;
 		int id;
    public:
    	void Input_P(){
    		cout<<"Enter Name   : ";getline(cin,name);
    		cout<<"Enter ID     : ";cin>>id;
    		cin.ignore();
    		cout<<"Enter Gender : ";getline(cin,gender);
		}
		void Show_P(){
			cout<<name<<"\t"<<id<<"\t"<<gender<<"\t";
		}
		
    
};
class Score{
    public:
		float score1,score2,score3;
	public:
		void Input_S(){
			cout<<"Enter Score 1 : ";cin>>score1;
			cout<<"Enter Score 2 : ";cin>>score2;
			cout<<"Enter Score 3 : ";cin>>score3;
		}
		void Show_S(){
			cout<<score1<<"\t"<<score2<<"\t"<<score3<<"\t";
		}
		double Total(){
			double total=score1+score2+score3;
			return total;
		}
		double Avg(){
			return Total()/3;
			
		}
		string Grade(){
			if(Avg()<50){
				return "Fail";
			}else{
				return "Pass";
			}
		}
};
class Student:public Person,public Score{
	public:
	void Header(){
		cout<<"NAME \tID \tGENDER \t SCORE1 \t SCORE2 \t SCORE3  \t TOTAL \t AVG \t GRADE"<<endl;
	}
};
int main(){
	Student st;
	st.Input_P();
	st.Input_S();
	cout<<"---------Show--------"<<endl;
	st.Header();
	st.Show_P();
	st.Show_S();
	cout<<st.Total()<<"\t"<<st.Avg()<<"\t"<<st.Grade()<<endl;
	
    return 0;
}




