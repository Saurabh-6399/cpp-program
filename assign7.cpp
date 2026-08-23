#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void print_substring(char str[],int s_ind,int end_ind=-1);
int hcf(int a,int b)
{
    int h;
    for(h=a<b?a:b;h>=1;h--)
    {
        if(a%h==0&&b%h==0)
          return h;
    }
    return 1;
}
int volume(int l,int b,int h)
{
    return l*b*h;
}
float volume(int r,int h)
{
    return 3.14*r*r*h/3;
}
float volume(int r)
{
    return 4.0/3*3.14*r*r*r;
}
void print_substring(char str[],int s_ind,int end_ind)
{
    if(end_ind==-1)
      end_ind=strlen(str);
    for(int i=s_ind;i<end_ind;i++)
        cout<<str[i];  
}
void swapArray(int A[],int B[],int size)
{
    int t;
    for(int i=0;i<size;i++)
    {
        t=A[i];
        A[i]=B[i];
        B[i]=t;
    }
}
int* MergeArray(int A[],int B[],int size)
{
    int *arr=(int*)malloc(2*size*sizeof(int));
    int i,j,k;
    for(i=0,j=0,k=0;i<size&&j<size;k++)
    {
        if(A[i]<B[j])
        {
            arr[k]=A[i];
            i++;
        }
        else
        {
            arr[k]=B[j];
            j++;
        }
    }
    while(i<size)
    {
        arr[k]=A[i];
        i++;
        k++;
    }
    while(j<size)
    {
        arr[k]=B[j];
        j++;
        k++;
    }
    return arr;
}
int main()
{
    char str[]="saurabh is s good boys";
    print_substring(str,3);
    cout<<endl;
    return 0;
}


