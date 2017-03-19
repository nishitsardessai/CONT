#include<conio.h>
#include<iostream>
float func(float);
using namespace std;
int main()
{
int n,i;
float a,b,h,s=0,r;
cout<<"Enter upper limit:";      	//accept upper limit
cin>>b;
cout<<"Enter lower limit:";      	//accept lower limit
cin>>a;
cout<<"enter no of subintervals:";        //accept no of subintervals
cin>>n;
    	h=(b-a)/n;
    	s=func(a)+func(b);                        //calculates initial value of sum
for(i=1;i<n;i++)                          	//calculate sum
 		s+=2*func(a+i*h);
r=s*h/2;                                		//calculates final solution
cout<<"solution:"<<r;                    	 //display solution
getch();
return 0;
}
float func(float x)
{
return (1/(1+x));                   //return value of f(x)
}


