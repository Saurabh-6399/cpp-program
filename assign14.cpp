#include<iostream>
using namespace std;
class complex{
    private:
      int a,b;
    public:
       void setData(int x,int y){  a=x; b=y;}
       void showdata(){
          cout<<"a="<<a<<" b="<<b<<endl;
       }
       friend complex operator+(complex,complex);
       friend complex operator-(complex);
       friend complex operator*(complex,complex);


};
complex operator+(complex x,complex y)
{
    complex temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return temp;
}
complex operator-(complex x)
{
    complex temp;
    temp.a=-x.a;
    temp.b=-x.b;
    return temp;
}
complex operator*(complex x,complex y)
{
    complex temp;
    temp.a=x.a*y.a-x.b*y.b;
    temp.b=x.a*y.b+x.b*y.a;
    return temp;
}

//question2
class Time{
    private:
      int hr,min,sec;
    public:
       void setData(int h,int m,int s){hr=h; min=m;  sec=s; }  
       void showData()
       {
           cout<<hr<<":"<<min<<":"<<sec<<endl;
       }
       friend ostream& operator<<(ostream&,Time);
       friend istream& operator>>(istream&,Time&);
       Time operator=(Time t){
          Time temp;
          temp.hr=t.hr;
          temp.min=t.min;
          temp.sec=t.sec;
       }

};
ostream& operator<<(ostream &dout ,Time t)
{
    dout<<t.hr<<":"<<t.min<<":"<<t.sec<<endl;
      return dout;
} 
istream& operator>>(istream &din,Time& t)
{
    din>>t.hr>>t.min>>t.sec;
    return din;
} 
//question4;
class Array{
    private:
      int *p;
      int size;
    public:
      Array operator=(Array arr){
          size=arr.size;
          p= new int[size];
          for(int i;i<size;i++)
              p[i]=arr.p[i];
          return *this;    
      } 
      friend Array* operator+(Array,Array);
};
Array* operator+(Array a1,Array a2){
    Array *ptrarr=new Array();
    ptrarr->size=a1.size+a2.size;
    ptrarr->p=new int[ptrarr->size];
    int i,k;
    for(i=0,k=0;i<a1.size;i++)
       ptrarr->p[k]=a1.p[i];
    for(i=0;i<a2.size;i++)
       ptrarr->p[k]=a2.p[i];
    return ptrarr;      
}


