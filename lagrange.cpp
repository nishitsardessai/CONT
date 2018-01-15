#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
    int i,ax[20],ay[20],n,j;
    float nr,dr,x,y;
    cout<<"Enter the no of terms:"<<endl;
    cin>>n;
    cout<<"Enter the values of ax[]"<<endl;
    for(i=0;i<n;i++)
    cin>>ax[i];
    cout<<"Enter the values of ay[]"<<endl;
    for(j=0;j<n;j++)
    cin>>ay[j];
    cout<<"Enter the value of x:"<<endl;
    cin>>x;
    for(i=0;i<n;i++)
    {
                    nr=dr=1;
                    for(j=0;j<n;j++)
                    {
                    if(j!=i)
                    {
                            nr=nr*(x-ax[j]);
                            dr=dr*(ax[i]-ax[j]);
                    }
                    }
    y+=(nr/dr)*ay[i];
    }
    cout<<"Value of x: "<<x<<endl<<"Value of y: "<<y;
    getch();
}
    
