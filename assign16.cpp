#include<iostream>
#include<string>
using namespace std;
class person{
    private:
       int age;
       char name[50];
    public:
       person(char name[], int a){
          strcpy(this->name,name);
          this->age=age;
       }  

};
class complex{
    private:
       int a,b;
    public:
       void setdata(int a,int b)
       {
          this->a=a;
          this->b=b;
       }
       void showdata()
       {
          cout<<"\na="<<a<<" b="<<b;
       }

};
void f1()
{
    complex *p=new complex;
    p->setdata(3,4);
    p->showdata();
}