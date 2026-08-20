#include<iostream>
using namespace std;
void f1()
{
    int a,b,c;
    float avg;
    cout<<"enter three number:";
    cin>>a>>b>>c;
    avg=(a+b+c)/3;
    cout<<"avg of three number"<<avg;

}
void f2()
{
    int n,sqr;
    cout<<"enter a number:";
    cin>>n;
    sqr=n*n;
    cout<<"square of number is"<<sqr;
    
}
void f3()
{
    int a,b;
    cout<<"enter two number:";
    cin>>a>>b; //a=10,b=20
    a=a+b; //a=30,b=20
    b=a-b;//a=30,b=10
    a=a-b;//a=20,b=10
    cout<<"swaping two number"<<a<<b;
}
void f4()
{
    int a,b;
    cout<<"enter two number:";
    cin>>a>>b;
    if(a>b)
       cout<<a<<" larger number ";
    else if(a<b)
        cout<<b<<" larger number";
    else 
       cout<<"equal number";    
      
}
void f5()
{
    int a[10],i,s=0;
    cout<<"enter number:";
    for(i=0;i<10;i++)
      cin>>a[i];
    for(i=0;i<10;i++)
      s=s+a[i];
    cout<<"sum of array is"<<s;    
}
int main()
{
    f5();
    cout<<endl;
    return 0;
}




