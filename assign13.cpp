#include<iostream>
using namespace std;
long hcf(int a,int b)
{
    long h;
    for(h=a<b?a:b;h>=1;h--)
    {
        if(a%h==0  && b%h==0)
          return h;
    }
}
class fraction{
    private:
       long numerator;
       long denominator;
    public:
       fraction(long n=0,long d=0):numerator(n),denominator(d)
       {}
       fraction operator+(fraction f1){
           fraction temp;
           temp.numerator=numerator*f1.denominator+f1.numerator*denominator;
           temp.denominator=denominator*f1.denominator;
           long h=hcf(temp.numerator,temp.denominator);
           temp.numerator/=h;
           temp.denominator/=h;

       }
       bool operator<(fraction f){
          return numerator*f.denominator < f.numerator*denominator;
       }

};
class Distance{
    private:
      int km,m,cm;
    public:
       void setData(int km,int met,int cm){
          km=km;
          m=met;
          cm=cm;
       }
       void showData(){
          cout<<km<<":"<<m<<":"<<cm<<endl;

       } 
       Distance operator+(Distance d){
          Distance temp;
          temp.km=km+d.km;
          temp.m=m+d.m;
          temp.cm=cm+d.cm;
          temp.m=cm/100;
          temp.cm=cm%100;
          temp.km=m/1000;
          temp.m=m%1000;
          return temp;
       }
       Distance operator--(){ //pre decrementt
             Distance temp;
             if(km==0 && cm==0 && m==0)
             {
                 temp.km=km;
                 temp.m=m;
                 temp.cm=cm;

             }
             else{
                if(cm==0){
                    cm=100;
                    if(m==0){
                        m=999;
                        --km;
                    }
                    else{
                        --m; 
                    }

                }
             temp.cm=--cm;
             temp.m=m;
             temp.km=km;

             }
            return temp;  
        }
        Distance operator--(){ //post decrementt
            Distance temp;
            temp.km=km;
            temp.m=m;
            temp.cm=cm;
            if(km==0 && cm==0 && m==0);
            
            else{
               if(cm==0){
                   cm=100;
                   if(m==0){
                       m=999;
                       --km;
                   }
                   else{
                       --m; 
                   }

               }
            
            }
           return temp;  
       }

};
class Array{
    private:
       int *p;
       int size;
    public:
       Array(int s){
          size=s;
          p=new int[size];
       }
       int& operator[](int index){
          if(index>=0 && index<size)
              return p[index];
           cout<<"invalid array index";
           return p[0];   
       } 
       ~Array(){
          delete []p;
       }  

};