#include<iostream>
#include<string>

using namespace std;

class employee{

    int id;
    string name;
    double salary;
    double bonus;

public :
employee(){
  id=0;
  name="";
  salary=0.0;
  bonus=0.0;
}


employee(int id,string name,double salary,double bonus){
  this->id=id;
  this->name=name;
  this->salary=salary;
  this->bonus=bonus;
}


void getdata(){
int n;
  cout<<"enter the id :";
  cin>>id;
  cout<<"enter the name :";
  cin>>name;
  cout<<"enter the salary :";
  cin>>salary;

  cout<<"would you like to add extra  bonus in the  salary ? (1 for yes and 0 for no) :";
  cin>>n;
  if(n==1){
  cout<<"enter the bonus :";
  cin>>bonus;
  }  else if (n==0){
    cout<<"the total salary is :"<<salary+1000<<endl;
  }
  
}


 inline void total(){
    cout<<"total salary is :"<<salary+bonus+1000<<endl;
  }

 void show(){
   cout<<" id :"<<id<<endl;
   cout<<" name :"<<name<<endl;
   cout<<" salary :"<<salary<<endl;
   cout<<" bonus :"<<bonus<<endl;
   cout<<"the total salary pf the employee is :";
     total();
   
 }
};

int main(){
  int n,choice;
  employee e1;

  cout<<"enter the number :";
  cin>>n;
   cout<<"WELCOME TO THE MENU SYSTEM "<<endl;
  do{

    cout<<"1.add employee details "<<endl;
    cout<<"2.show employee details"<<endl;
    cout<<"3.exit"<<endl;

    cout<<"enter your choice :";
    cin>>choice;

    switch(choice){
      case 1:
      e1.getdata();
      break;
      case 2:
      e1.show();
      break;
      case 3:
      cout<<"THANK YOU FOR GIVING POSITIVE RESPONSE ";
      break;
    }n--;

    
  }
    while(n!=0);
    
  return 0;
}