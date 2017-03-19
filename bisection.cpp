//Bisection Method
#include<conio.h>
#include<math.h>
#include<iostream>
#define f(x) (x*x*x-4*x-9)    // defines the function f(x)
using namespace std;
int main()
{
    float x0,e,x1,x2;                    
    int n,i;
    //Acccepts the required values
    cout<<"enter the value of x1:"<<endl;
    cin>>x1;
     cout<<"enter the value of x2:"<<endl;
    cin>>x2;
    cout<<"enter the level of accuracy,e:"<<endl;
    cin>>e;
    cout<<"enter the value of max iterations:"<<endl;
    cin>>n;
    if(f(x1)*f(x2)>0) 
    cout<<x1<<"&"<<x2<<"do not bracket any root"<<endl;
    else
    {
    //Display format as a table
    cout<<"iteration        value of x1       "<<endl;   
    for( i=1;i<=n;i++)             // For loop for iterations from 1 to maximum value for finding the solution
    {
         x0=(x1+x2)/2;             //Formula for x0 in bisection method
        if(f(x1)*f(x0)<0)          //Condition for selecting next value of x0 
         x2=x0;
         else
         x1=x0;
         cout<<i<<"                "<<x0<<endl;      // Displays solution at each iteration
         if(fabs(((x2-x1)/x2)<=e))
         {
                               cout<<"solution: "<<x0;    //Display final solution
                               break;
         }
        
    }

if(i>n)   //If max iterations are exceeded,Solution does not converge
cout<<"solution does not exist";
}
    getch();
    return 0;
}
         
         
