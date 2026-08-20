#include<iostream>
using namespace std;
void print_prime(int a,int b)
{
  int i,j;
  for(i=a;i<=b;i++)
     for(j=2;j<=b;j++)
         if(a%j==0)
             break;
        if(a==j)
          cout<<a;         
}
int highestDigit(int x)
{
    int max=0,a;
    if(x<0)
    {
        x=-x;//make positive if negative
    }
    while(x)
    {
       a=x%10;
       if(a>max)
          max=a;
        x=x/10;    
    }
    return max;
}
float power(float x,float y)
{
    if(y==0)
      return 1;
    if(y>0)
    {
        return power(x,y-1)*x; 
    }  
    else
    {
        return power(x,y+1)*(1/x);
    }

}
int fact(int n)
{
    int i,f=1;
    while(n)
       f=f*n;
       n--;
    return f;
}
int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
void printPascalTriangle(int lines)
{
    int i,j,spc,r;
    for(i=1;i<lines;i++)
    {
        spc=1;
        r=0;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i&&j<=lines-1+i)
            {
                if(spc)
                    cout<<combi(i-1,r++);
                else
                    cout<<" ";
                spc=1-spc;     
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int infib(int n)
{
    int a=-1,b=1,c;
    for(int i=0;c<=n;i++)
    {
        c=a+b;
        if(n==c)
           return 1;
        a=b;
        b=c;   
    }
    return 0;
}
int main()
{
    printPascalTriangle(6);
    cout<<endl;
    return 0; 
}
