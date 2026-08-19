#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%2==0)
       printf("%d is even number",n);
    printf("%d is zero and odd number");
    printf("\n");
    return 0;   

}
//q2
void f2()
{
    int n,i,f=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      f=f*i;
    printf("factorial of %d is %d",n,f);  
    printf("\n");
    
}
//q3 swap two value
void f3()
{
    int a,b,c;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;

    printf("%d and %d are the swap value",a,b);
    printf("\n");
}
//q4 lcm two number
int f4()
{
    int a,b,l;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    for(l=a>b?a:b;l<=a*b;l++)
       if(l%a==0&&l%b==0)
          return l;
  
}
//q5 prime number
void f5()
{
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
       if(n%i==0)
          break;
    if(n==i)
       printf("%d is prime number");
    printf("not prime number");
    printf("\n");

}