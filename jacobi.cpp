#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    float x[20]={0},a[20][20],e,maxe,s,t,y[20]={0};
    int i,j,k,n,max,c;
    //Accept the required values
    cout<<"Enter order of matrix:"<<endl;
    cin>>n;
    cout<<"Enter maximum iterations and error:"<<endl;
    cin>>max>>e;
    cout<<"enter Matrix elements:"<<endl;
    for(i=0;i<n;i++)
    for(j=0;j<n+1;j++)
    cin>>a[i][j];
    cout<<"Iteration no      "<<"value"<<endl;        //display format
    for(c=1;c<=max;c++)                               //loop for iterations
    {
                       maxe=0;
                       for(i=0;i<n;i++)               //calculate value of root at each iteration
                       {
                                       s=0;
                                       for(j=0;j<n;j++)
                                       if(j!=i)                 //exclude diagonal element
                                       s+=a[i][j]*y[j];         //calculation of root value
                                       t= (a[i][n]-s)/a[i][i];  
                                       maxe=fabs(x[i]-t);       //check error between the successive values of root
                                       x[i]=t;
                       }
                       
           for(i=0;i<n;i++) 
           {
                            y[i]=x[i];                    //assign root values to array y for next iteration
                       cout<<c <<"           "<<x[i]<<endl;     //display value of root at each iteration
                       }
       if(maxe<e)      //if error between 2 values is less than entered error, display solution
 {
    cout<<"solution found:"<<endl;
    for(i=0;i<n;i++)
    cout<<"x["<<i+1<<"]= "<<x[i]<<"    ";
    break;
}
}
getch();
return 0;
}

                    
    

    
    
