#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class person{
    private:
      int age;
      char name[50];
    protected:
       void setage(int a){  age=a;  }
       void setname(char n[]){   strcpy(name,n); }
       int getage(){   return age;  }
       char* getname(){  return name;  }
      
};
class employee:public person{
    private:
       float salary;
    public:
       void setEmployee(char n[],int a,float s)
       {
           setage(a);
           setname(n);
           salary=s;
       }
       void showemployee(){
          cout<<endl;
          cout<<getname()<<"  "<<getage()<<" "<<salary;
          
       }   
};
int main()
{
    employee emp;
    emp.setEmployee("saurabh",22,60000);
    emp.showemployee();
    return 0;
}
class Circle{
    private:
       int rad;
    public:
      void setradius(int r){ rad=r; }
      int  getradius(){ return rad; }  
      float getarea(){  return 3.14*rad*rad;  }
};
class Thickcircle:public Circle{
    private:
        int thickness;
    public:
       void setthickness(int t){  thickness=t; }
       int getthickness(){ return thickness;  } 
       float getarea()
       {
           return 3.14*(getradius()+thickness)*(getradius()+thickness)-3.14*getradius()*getradius();
       }   
};
class coordinate{
    private:
      int x,y;///instance variable;
    public:
       void setcoordinate(int x,int y)
       {
           this->x=x;
           this->y=y;
       }
       void showdata(){  cout<<"\n("<<x<<","<<y<<")"; }
       double getdistance()
       {
           return sqrt(x*x + y*y);
       }
       double getdistance(coordinate c1)
       {
           return sqrt((x-c1.x)*(x-c1.x)+(y-c1.y)*(y-c1.y));
       }  
};
class shape{
    private:
      char shapename[50];
    public:
       void setshapename(char n[])
       {
           strcpy(shapename,n);
       } 
       char* getshapename()
       {
          cout<<shapename;
          cout<<endl;
       } 
};
class straightLine:public shape{
    private:
       coordinate c1,c2;  //instance member
    public:
      void setline(coordinate c1,coordinate c2)
      {
        this->c1=c1;
        this->c2=c2;
      }
      double getdistance(){ return c1.getdistance(c2);}
      void showline()
      {
        c1.showdata();
        c2.showdata();
      }   

};

