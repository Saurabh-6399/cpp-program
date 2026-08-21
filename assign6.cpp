#include<iostream>
using namespace std;
void sort(int a[],int size,bool asc=true);
void sort(char a[],int size,bool asc=true);
void rotate(int a[],int n,int d=1);
int lcm(int a,int b,int c);
void sort(int a[],int size,bool asc)
{
    int r,i,t;
    for(r=1;r<size;r++)
    {
        for(i=0;i<size-r;i++)
        {
            if(asc==true && a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
            else if(asc==false && a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
            
        }
    }
}
void sortstring(char a[][20],int n,bool asc)
{
    int i,r;
    char temp[100];
    for(r=1;r<n-1;r++)
    {
        for(i=0;i<n-r;i++)
        {
            if(asc==true && strcmp(a[i],a[i+1])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[i+1]);
                strcpy(a[i+1],temp);
            }
            else if(asc==false && strcmp(a[i],a[i+1])<0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[i+1]);
                strcpy(a[i+1],temp);
            }

        }
    }
}
void rotate(int a[],int size,int n,int d)
{
    int i,t;
    if(d==1)
    {
        for(i=0;i<=n;i++)
        {
            t=a[0];
            for(i=0;i<size-1;i++)
            {
                a[i]=a[i+1];
            }
            a[size-1]=t;
        }
    }
    if(d==-1)
    {
        for(i=0;i<=n;i++)
        {
            t=a[size-1];
            for(i=size-1;i>0;i--)
            {
                a[i]=a[i-1];
            }
            a[0]=t;
        }
    }
}
int lcm(int a,int b,int c)
{
    int lcm;
    for(lcm=a>b?a>c?a:c:b>c?b:c;lcm<=a*b*c;lcm++)
    {
        if(lcm%a==0&&lcm%b==0&&lcm%c==0)
          return lcm;
    }
}


