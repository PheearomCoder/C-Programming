#include<iostream>
using namespace std;

int main(){
	double total,avg;
	float s1,s2,s3,s4,s5;
	string grade;
	
	cout<<"-------Input--------"<<endl;
	cin>>s1>>s2>>s3>>s4>>s5;
	cout<<"Score1\tScore3\tScore4\tScore5"<<endl;
	total=s1+s2+s3+s4+s5;
	avg=total/5;
	if(avg>=50){
		grade = "Pass";
	}else{
		grade = "Fail";
	}
	cout<<"Score1\tScore3\tScore4\tScore5\tTotal\tavg\tGrade\n";
	cout<<s1<<"\t"<<s1<<"\t"<<s3<<"\t"<<s4<<"\t"<<s5<<"\t"<<total<<"\t"<<avg<<"\t"<<grade;
	
	
	
	
	return 0;
}
