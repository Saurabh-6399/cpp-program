#include<iostream>
using namespace std;
class complex
{
    private:
       int a,b;//instance member variable where a is real ,bis imagnari
    public:
       void setData(int x,int y){
           a=x;
           b=y;
       }
       void showData(){
            cout<<"a="<<a<<"b="<<b;
       }
       complex add(complex c)
       {
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;  
       }
       complex subtract(complex c)
       {
           complex temp;
           temp.a=a-c.a;
           temp.b=b-c.b;
           return temp;  
       } 
       complex multiply(complex c)
       {
           complex temp;
           temp.a=a*c.a;
           temp.b=b*c.b;
           return temp;  
       }        
};
class Time
{
    private:
       int h,m,s;
    public:
        void setTime(int x,int y,int z)
        {
            h=x;
            m=y;
            s=z;
        }
        void showTime()
        {
            cout<<h<<"/"<<m<<"/"<<s;
        }
        void normalize()
        {
            if(s>=60)
            {
                m+=s/60;
                s=s%60;
            }
            if(m>=60)
            {
                h+=m/60;
                m=m%60;
            }
            if(h>=24)
               h=h%24;
        }
        Time add(Time T)
        {
            Time temp;
            temp.s=s+T.s;
            temp.m=m+T.m;
            temp.h=h+T.h;
            temp.normalize();
            return temp;
        }
        bool is_greater(Time T)
        {
            if(h>T.h)
               return true;
            else if(h<T.h)
              return false;
            else if(m>T.m)
              return true;
            else if(m<T.m)
              return false;
            else if(s>T.s)
               return true;
            else if(s<T.s)
              return false;
            else 
              return true;              
        }
};
class TestResult
{
    private:
       int rollno,right,wrong,net_score;
       static int right_weightage,wrong_weightage;
    public:
       void setRoll_no(int r){rollno=r;}
       void Right(int r){right=r;}
       void setWrong(int w){wrong=w;}
       void setNet_score(int n){net_score=n;}
       static void Right_weightage(int rw){right_weightage=rw;}
       static void Wrong_weightage(int ww){wrong_weightage=ww;}
       int get_rollno(){ return rollno;}
       int getRight(){ return right;}
       int getWrong(){ return wrong;}
       int getNet_score(){ return net_score;}
       static int getRight_weightage(){return right_weightage;}
       static int getWrong_weightage(){return wrong_weightage;}
         
        
};
int main()
{
    
    cout<<endl;
    return 0;
}
class matrix
{
    private:
      int A[3][3];
    public:
        void input(){
            cout<<"enter 9 element row wise";
            for(int i=0;i<2;i++)
              for(int j=0;j<2;j++)
                cin>>A[i][j];
        }
        void display(){
            for(int i=0;i<2;i++)
              for(int j=0;j<2;j++)
                 cout<<A[i][j]<<" "; 
              cout<<endl;       
        }
        matrix add(matrix M)
        {
            matrix temp;
            for(int i=0;i<2;i++)
              for(int j=0;j<2;j++)
                 temp.A[i][j]=A[i][j]+M.A[i][j]; 
              cout<<endl; 
            return temp;  
            
        }
        matrix sub(matrix M){
            matrix temp;
            for(int i=0;i<2;i++)
              for(int j=0;j<2;j++)
                 temp.A[i][j]=A[i][j]-M.A[i][j]; 
              cout<<endl; 
            return temp; 

        }
        matrix multiply(matrix M){
            matrix temp;
            int sum;
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    for(int k=0,sum=0;k<2;k++)
                       sum+=A[i][k]*M.A[i][j];
                    temp.A[i][j]=sum;   
                }    
            }
            return temp;
        }
        matrix transpose(){
            matrix temp;
            for(int i=0;i<2;i++)
               for(int j=0;j<2;j++)
                  temp.A[j][i]=A[i][j];
            return temp;      

        }
        bool is_singular(){
            int s;
            s=A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1])-A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0])+A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
            if(s==0){
                return true;
            }
            return false;
        }
    };        
                
        
        




