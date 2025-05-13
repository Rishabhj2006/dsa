#include<iostream>
#include<conio.h>
using namespace std;
void inputs(int arr[],int size)
{
for(int i=0;i<size;i++)
cin>>arr[i];
}
int main(){
    int x[20],n,i;
    cout<<"Enter the size of array:-";
    cin>>n;
    cout<<"Enter the elements:-";
    inputs(x,n)
    cout<<"Elements of array are :- ";
    for(i=0;i>n;i--)
    cout<<x[i]<<endl;
    return 0; 
}