#include<iostream>
using namespace std;
class complex{
    private:
      int a,b;
    public:
       void setdata(int a,int b){
          this->a=a;
          this->b=b;
       } 
       void showdata(){
           cout<<"a="<<a<<" b="<<b<<endl;  
       }
       complex operator+(complex c){
          complex temp;
          temp.a=a+c.a;
          temp.b=b+c.b;
          return temp;
       } 
       complex operator-(complex c){
          complex temp;
          temp.a=a-c.a;
          temp.b=b-c.b;
          return temp;
       } 
       complex operator*(complex c){
        complex temp;
        temp.a=a*c.a-b*c.b;
        temp.b=a*c.b+b*c.a;
        return temp;
      } 
      bool operator==(complex c){
        if(a==c.a && b==c.b)
           return true;
        else 
            return false;    
      } 

};
class time{
   private:
      int hr,min,sec;
   public:
      void settime(int x,int y,int z){
            hr=x;
            min=y;
            sec=z;
      } 
      void showdata(){
         cout<<endl;
         cout<<hr<<":"<<min<<":"<<sec;
      } 
      bool operator>(time t){
         if(hr>t.hr)
            return true;
         else if(hr<t.hr)
            return false;
         else if(min>t.min)
            return true;
         else if(min<t.min)
            return false;
         else if(sec>t.sec)
            return true;
         else 
             return false;               
      }
      time operator++(int){// post increment
         time temp=*this;
         sec++;
         min+=sec/60;
         sec=sec%60;
         hr=min/60;
         min=min%60;
         return temp;
      }

      time operator++(){// pre increment
            sec++;
            min+=sec/60;
            sec=sec%60;
            hr=min/60;
            min=min%60;
            return *this;
      }
      time operator+(time t){
           time temp;
           temp.hr=hr+t.hr;
           temp.min=min+t.min;
           temp.sec=sec+t.sec;
           temp.min+=temp.sec/60;
           temp.sec=temp.sec%60;
           temp.hr=temp.min/60;
           temp.min=temp.min%60;
           return temp;

      }

};
class matrix{
   private:
     int a[3][3];
   public:
      void input(){
         cout<<"enter 9 element:"<<endl;
         for(int i=0;i<3;i++){
            for(int j=0;j<3;){
               cin>>a[i][j];
            }
         }
      } 
      void display(){
         cout<<"matrix:\n";

         for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               cout<<a[i][j]<<" ";
            }
            cout<<endl;
         }
      } 
      matrix operator+(matrix m1){
          matrix temp;
          for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                temp.a[i][j]=a[i][j]+m1.a[i][j];
             }
          }
          return temp;
      }
      matrix operator-(matrix m1){
         matrix temp;
         for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               temp.a[i][j]=a[i][j]+m1.a[i][j];
            }
         }
      }
      matrix operator*(matrix m1){
         matrix temp;
         int sum,k;
         for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               for(k=0,sum=0;k<3;k++)
                  sum+=a[i][k]+m1.a[k][j];
               temp.a[i][j]=sum;  
              
            }
         }
         return temp;
      }
      
};

int main()
{
    complex c1,c2,c3,c4;
    c3=c1+c2;

}