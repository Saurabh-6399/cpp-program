#include<iostream>
#include<string>
using namespace std;
class A{
    private:
        int a,b;  //instance member variables
    public:
       void setData(int x,int y){  a=x;  b=y;  }
       void showData(){   cout<<"\na="<<a<<" b="<<b;  }
       void input()
       {
          cout<<"enter two number:";
          cin>>a>>b;
          
       }
           
};
class B:public A{
   private:
       int c;
    public:
       void input()
       {
           int x,y;
           cout<<"enter three number";
           cin>>x>>y>>c;
           setData(x,y);
       }
       void showData()
       {
          A::showData();
          cout<<"c="<<c;
       }
          
};
class shape{
    private:
       char shapename[30];
    public:
       void setshapename(char n[])
       {
          strcpy(shapename,n);
       } 
       char* display(){   return shapename;  }
       virtual int area()=0;
};
class rectangular:public shape{
    private:
      int l,b;
    public:
       void setlenght(int l){ this->l=l; }
       void setbreadth(int b){  this->b=b;  }
       int getlenght(){  return l; }
       int getbreadth(){ return b; }  
       int area(){  return l*b;} 

};
class square:public shape{
    private:
      int side;
    public:
      void  setdata(int s){  side=s; }
      int getside(){  return side; }
      int area()
      {
         return side*side;
      }  
};
int main()
{
   rectangular *r1=new rectangular;
   square *s1=new square;
   char n1[]="rectangular",n2[]="square";
   r1->setshapename(n1);
   s1->setshapename(n2);
   r1->setbreadth(20);
   r1->setlenght(10);
   cout<<"\narea of rectangular:"<<r1->area();
   s1->setdata(30);
   cout<<"\narea of square:"<<s1->area();
   cout<<endl;
}
