#include<iostream>
using namespace std;
class Product{
  public:
  string name;
  int code,qty,dis;
  float price;
  double total,pay,revennuse;
 
    public:
      void Input(){
        cout<<"Enter name : ";getline(cin,name);
        cout<<"Enter code : ";cin>>code;
        cout<<"Enter qty :   ";cin>>qty;
        cout<<"Enter price : ";cin>>price;
      }
  void Show(){
        cout<<"Name \tCode \tqty \tprice \tTotal \tDis \tPayment \tRevennuse"<<endl;
        cout<<name<<"\t"<<code<<"\t"<<qty<<"\t"<<price<<"\t"<<total<<"\t"<<dis<<"\t"<<pay<<"\t"<<revennuse<<endl;
  }
  Product(){//default consturctor
        name="coi";
        code=01;
        qty=5;
        price=1;
        total=price*qty;
        dis=
        
        pay=total-(Total()*Dis())/100;
        revennuse= Total()-Payment();
  }
  Product(string name,int code,int qty,float price,double total,double dis,double pay,double revennuse){//consturctor have parameter
        name=name;
        code=code;
        qty=qty;
        price=price;
  }  
  double Total(){
      return price*qty;
  }
  int Dis(){
      int dis;
      if(Total()<50){
      dis=10;
    }else{
      dis=20;
    }
    return dis;
  }
  double Payment(){
    return total-(Total()*Dis())/100;
  }
  double Revennuse(){
    return Total()-Payment();
  }
      
};
  int main(){
  Product p;
  //p.Input();
  p.Show();
  }
