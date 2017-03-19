#include<iostream>
#include<conio.h>
# define order 4
using namespace std;
int main()
{
    int i,n,j,k;
    float ax[20],ay[20],h,diff[20][20],x,nr=1,dr=1,p,yp;
    cout<<"Enter the limit:";
    cin>>n;
    cout<<"Enter the elements of ax:"<<endl;
    for(i=0;i<n;i++)
    cin>>ax[i];
     cout<<"Enter the elements of ay:"<<endl;
    for(i=0;i<n;i++)
    cin>>ay[i];
    cout<<"enter value of x:";
    cin>>x;
    h=ax[1]-ax[0];                                      //calculate h
    /* difference table */
    for(i=0;i<n;i++)
    diff[i][1]=ay[i+1]-ay[i];                           //calculating first forward difference
    for(j=2;j<=order;j++)
    for(i=0;i<n-j;i++)
    diff[i][j]=diff[i+1][j-1]-diff[i][j-1];             //calculate remaining forward difference values
    for(i=0;i<n;i++)
    if(ax[i]>x)                                         //starting condition
    {
    i=i-1;
    p=(x-ax[i])/h;                                      //calculate p value
    yp=ay[i];
    for(k=1;k<order;k++)
    {
    nr*=p-k+1;                                          //calculating numerator of interpolation formula
    dr*=k;                                              //calculating denominator of interpolation formula
    yp+=(nr/dr)*diff[i][k];                             //final value of yp
    }
    
    cout<<"solution: "<<endl<<"x="<<x<<endl<<"y="<<yp<<endl<<"p="<<p<<endl;       //display solution
    break;
}
    getch();
    return 0;
    }
               
               
    
