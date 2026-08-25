#include<iostream>
using namespace std;
class Number
{
    private:
       int size;
       int *arr;
    public:
       Number(int s){
          size=s;
          arr=new int[size];   
       }
       ~Number(){
          delete []arr;
       }
       Number(Number &n){
          size=n.size;
          arr=new int[size];
          for(int i=0;i<size;)
             arr[i]=n.arr[i];
       }
         


};
class student{
    private:
       int rollno;
       char name[50];
    public:
       student(){
          cout<<"enter rollnumber";
          cin>>rollno;
          cout<<"enter name";
          cin.ignore();
          cin.getline(name,30);
       }
       void display(){
           cout<<endl<<"Rollnumber"<<rollno<<" "<<"Name"<<name;
           cout<<endl;
       } 
};
class date{
    private:
       int d,m,y;
    public:
       date():d(1),m(1),y(2000)
       {}
       date(int d,int m,int y):d(d),m(m),y(y)
       {}
};
class room{
    private:
       int roomno;
       int room_type;
       bool is_AC;
       double price;
    public:
       room(int rno,int rtype,bool ac,double p){
          roomno=rno;
          room_type=rtype;
          is_AC=ac;
          price=p;
       }   
};
class circle{
    private:
       float radius;
    public:
        circle(int rad){
            radius=rad;
        }
        circle():radius(2)
        {}   
};

