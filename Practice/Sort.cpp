#include<iostream>
using namespace std;
int main()
{
    int a[5],i,j=4,b,c;
    cout<<"Pls enter any five number=";
        for(i=0; i<=4; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<=4; i++)
        {  
            if(a[i]==0)
            {
               b=a[i];
               a[i]=a[j];
               a[j]=b;
            } 
        }
        cout<<"The numbers are=";
        for(i=0; i<=4; i++)
        {
            cout<<a[i];
            cout<<"\n";
        }
}