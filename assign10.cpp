#include<iostream>
#include<string>
using namespace std;
class cuboid
{
    private:
      int len,breadth,height;//instance member variables
    public:
       cuboid(int l,int b,int h){
           len=l;
           breadth=b;
           height=h;
       } 
       void display(){
          cout<<"lenght:"<<len<<endl<<"Bredth:"<<breadth<<"Height:"<<height;
       } 
};
class customer
{
   private:
      int cust_id;
      char name[20];
      char email[40];
      char mobile[14];
    
    public:
       customer(){
          cust_id=0;
          strcpy(name,"anamrous");
          strcpy(email,"xyzgmail.com");
          strcpy(mobile,"11232323");
       }
       customer(int id,char n[],char e[],char m[])
       {
            cust_id=id;
            strcpy(name,n);
            strcpy(email,e);
            strcpy(mobile,m);
       }
 

};
class time
{
    private:
       int hr,min,sec;//instance member variables
    public:
       time(int H,int M,int S)
       {
            hr=H;
            min=M;
            sec=S;
       }
       time(){hr=0; min=0; sec=0;}
          
};
class Book
{
    private:
      int bookid;
      char title[40];
      float price;
    public:
       Book(){
         bookid=0;
         strcpy(title,"no-title");
         price=0.0f;
       }
       Book(int id,char t[],float p)
       {
            bookid=id;
            strcpy(title,t);
            price=p;
       }  
};
class complex
{
   private:
      int real,ima;
   public:
      complex(int r,int i){
         real=r;
         ima=i;
      }
      void showData(){
         cout<<real<<"+"<<ima<<"i"<<endl;
      } 
        

};
int main()
{
   complex c[5]={complex(1,2),complex(3,3),complex(2,4),complex(2,5),complex(8,4)};
   for(int i;i<5;i++)
   {
      c[i].showData();
      cout<<endl;
      return 0;
   }
}