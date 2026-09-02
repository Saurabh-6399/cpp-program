#include<iostream>
using  namespace std;
class complex{
    private:
       int a,b; ///a(real),b(imagenary)
    public:
       void setdata(int x,int y){
            a=x;
            b=y;
       }
       void showdata(){
          cout<<"\na="<<a<<" b="<<b<<endl;
       } 
       friend complex operator-(complex); //unary friend operator 

};
complex operator-(complex c)
{
    complex temp;
    temp.a=-c.a;
    temp.b=-c.b;
    return temp;
}
class integer{
    private:
       int a;
    public:
       void setdata(int x){ a=x;}
       void showdata(){  cout<<"a="<<a<<endl;  }   
       friend bool operator!(integer);
       friend bool operator==(integer,integer);
};
bool operator==(const integer i1,const integer i2)
{
   return i1.a==i2.a;
}
bool operator!(integer I)
{
    return !(I.a);
}


//question 3

class coordinate{
    private:
       int x,y;
    public:
       coordinate():x(0),y(0){}
       coordinate(int a,int b):x(a),y(b){}
       coordinate operator,(coordinate c)
       {
            return c;
       }
       void showdata()
       {
          cout<<"\n("<<x<<","<<y<<")";
       }
       friend ostream& operator<<(ostream &,coordinate);
       friend istream& operator>>(istream &,coordinate&);
};
ostream& operator<<(ostream &dout,coordinate c)
{
    dout<<"\n("<<c.x<<","<<c.y<<")";
    return dout;
}
istream& operator>>(istream &din,coordinate &c5)
{
    din>>c5.x>>c5.y;
    return din;
}
class student{
    private:
       int rollno;
       char name[40];
       int age;
    public:
       void setstudent(int r,char n[],int a)
       {
          rollno=r;
          strcpy(name,n);
          age=a;
       } 
       void showdata()
       {
          cout<<"\n"<<rollno<<" "<<name<<" "<<age;
       } 
       bool operator==(student s)
       {
           return rollno==s.rollno && name==s.name&&age==s.age;
             
       } 
};


int main()
{
    complex c1,c2,c3;
    c3=-c1;  //c3=operator-(c1)

}