#include<iostream>
using namespace std;

int main()
{
    int arr[20],i,j,k,l,num;
    cout<<"How many no.s you want: ";
    cin>>num;
    
    cout<<"Enter numbers:\n ";
    for(i=0;i<num;i++)
    {
    cin>>arr[i];
    
    }
    for(i=(num-1);i>=0;i--)
    cout<<arr[i]<<endl;
    return 0;
}