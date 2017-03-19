//Euler's method
#include<iostream>
#include<conio.h>
float f(float x,float y);
using namespace std;
float f(float x,float y)
{
      return (x+y);
}
int main()
{
    float i;
    float h,x0,y,x,y0;
    cout<<"enter initial values of x and y:";
    cin>>x0>>y0;
    cout<<"enter the value of h:";
    cin>>h;
    cout<<"Enter x:";
    cin>>x;
    y=y0;
    for(i=x0;i<=x+h;i+=h)
    {
                         y0=y;
                        cout<<"when x="<<i<<"      y="<<y<<endl;
                       y=y0+(h*f(i,y));            //Euler's Formula
                       
     }
 
    cout<<"solution:"<<y0;                         //Display solution
    getch();
    return 0;
}
    
    
