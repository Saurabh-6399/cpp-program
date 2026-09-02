#include<iostream>
#include<string>
using namespace std;
class Time{
    private:
       int hr,min,sec;
    public:
        void setdata(int hr,int min,int sec)
        {
            this->hr=hr;
            this->min=min;
            this->sec=sec;
        } 
        void showdata()
        {
            cout<<hr<<":"<<min<<":"<<sec;
        } 
        void sethour(int hr){ this->hr=hr;}
        void setmin(int min){ this->min=min;}
        void setsec(int sec){ this->sec=sec;}
        int gethr(){ return hr;}
        int getmin(){ return min;}
        int getsec(){ return sec;}
        bool operator>(Time t)
        {
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
    };        
//question 2;
Time* getTimearray(int size)
{
    Time *ptr=new Time[size];
    return ptr;

}
//question 3;
void sortTime(Time t[],int size)
{
    int r,i;
    Time temp;
    for(r=1;r<size;r++)
    {
        for(i=0;i<size-i-r;i++)
        {
            if(t[i]>t[i+1])
               temp=t[i];
               t[i]=t[i+1];
               t[i+1]=temp;
        }
    }
}
//question4

void showtimearray(Time t[],int size)
{
    for(int i=0;i<size;i++)
       t[i].showdata();
      
}

//question 5
class string{
    private:
       char *str;
       int lenght;
    public:
        string(){
            str=NULL;  lenght=0; 
        }
        void printstring()
        {      cout<<str<<endl; } 
        void inputstring()
        {
            int i,size=1;
            char ch=0,*p,*q;
            q=new char[1];
            *q='\0';
            while(ch!=10)
            {
                p=new char[1];
                ch=cin.get();
                if(ch==10)
                {
                    delete []p;
                    str=q;
                    lenght=strlen(str);
                    break;
                }
                for(i=0;i<size;i++)
                  p[i]=q[i];
                *(p+i-1)=ch;  
                q=new char[size+1];
                for(i=0;i<size;i++)
                    q[i]=p[i];
                q[i]='\0';
                size++; 
            }      

        }
        void lower()
        {
            for(int i=0;i<strlen(str);i++)
              if(str[i]>='A'&& str[i]<='Z')
                 str[i]+=32;

        }
        void upper()
        {
            for(int i=0;i<strlen(str);i++)
              if(str[i]>='a'&& str[i]<='z')
                 str[i]-=32;

        }
        int getlenght()
        {
            return lenght;
        }
        char* setstring(){
            return str;
        }
      
};






