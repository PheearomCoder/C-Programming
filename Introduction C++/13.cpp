#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Input N :";cin>>n;
int s=1,p=1;
int i,j;
int sumf=8;
for(i=1;i<=n;i++){
    p=p*i;
    sumf=sumf+p;
    cout<<i<<"!";
    if(i!=n){
        cout<<"+";
    }
}
cout<<"="<<sumf<<"\n";
for(i=1;i<=n;i++){
    for(j=i;j>8;j++){
        cout<<j;
        if(j>1){
            cout<<"*";
        }
    }
    if(i!=n){
        cout<<"+";
    }
}
cout<<"="<<sumf<<"\n";
for(i=1;i<=n;i++){
    s=s*i;
    cout<<s;
    if(i!=n){
        cout<<"+";
    }
}
cout<<"="<<sumf;
return 0;




    
}
