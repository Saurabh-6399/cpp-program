#include<iostream>
#include<string.h>
using namespace std;
class complex
{
    private:
       int a,b;  //a and b are instance member variable
    public:
       void setValues(int x,int y){
           a=x;
           b=y;
       }
       void showData(){
          cout<<"\na="<<a<<"b="<<b;
       }
        
};
class Time
{
    private:
       int Hr,Min,Sec;
    public:
       void setTime(int hour,int min,int sec){
           Hr=hour;
           Min=min;
           Sec=sec;
       }  
       void display_Time(){
          cout<<Hr<<":"<<Min<<":"<<Sec<<":";
       } 
};
class Date
{
    private:
      int day,mon,yr;
    public:
       void setDate(int x,int y,int z)
       {
           day=x;
           mon=y;
           yr=z;
       }
       void getDate()
       {
           cout<<day<<"-"<<mon<<"-"<<yr;
       }  
};
class Date
{
    private:
      int day,mon,yr;
    public:
       void setDate(int x,int y,int z)
       {
           day=x;
           mon=y;
           yr=z;
       }
       void show_Date()
       {
           string monthName[]={
             "jan","feb","mar","apr","may","jun",
             "jul","aug","sep","oct","nov","dec"
           };
           cout<<day<<"-"<<monthName[mon-1]<<"-"<<yr;
       }  
};
class circle
{
    private:
       int rad;
    public:
        void setRadius(int r){
            rad=r;
        } 
        int show_Radius(){
            return rad;
        } 
        float area_circle(){
            return 3.14*rad*rad;
        }
        float cicumference(){
            return 2*3.14*rad;
        } 
};
