#include<iostream>
using namespace std;
int main()
{
    int target,array_size,i,j,k;
    cout<<"Enter the target value=";
    cin>>target;
    cout<<"Enter the array size=";
    cin>>array_size;
    int array[array_size];
    cout<<"Enter the number=";
    for(i=0; i<array_size; i++)
    {
        cin>>array[i];
    }
    for(i=0; i<array_size; i++)
    {
        for(j=array_size; j>=0; j--)
        {
            for(k=0; k<array_size; k++)
            {
                if(array[i]+array[j]+array[k]==target)
                {
                    cout<<"\nthe index is="<<i;
                    break;
                }
            }
        }
    }

}