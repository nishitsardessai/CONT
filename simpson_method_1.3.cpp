#include<iostream>
#include<conio.h>
float func(float);
using namespace std;
int main()
{
    int n,i;
    float a,b,h,s=0,r;
    cout<<"Enter upper limit:";  //accept upper limit
    cin>>b;
    cout<<"Enter lower limit:";  //accept lower limit

    cin>>a;
    cout<<"enter no of subintervals:";    //accept no of subintervals
    cin>>n;
    h=(b-a)/n;
    
    s=func(a)+4*func(a+h)+func(b);              //calculates initial value of sum
    for(i=3;i<n;i+=2)
    s+=2*func(a+(i-1)*h)+4*func(a+i*h);         //calculates remaining value of sum
    r=s*h/3;                                    //final sum 
    cout<<"Solution:"<<r;                       //display solution
    getch();
    return 0;
}
float func(float x)
{

      return (1/(1+(x*x)));                     //return value of f(x)
}
    
    
    
