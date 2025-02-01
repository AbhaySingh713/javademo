#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int a [20],n,i,j,k,position,item;
    cout<<"enter the value of arry"<<endl;
    cin>>n;
    cout<<"enter the element of arry"<<endl;
    for(i=0;i<=n;i++)
    {
        cin>>a[i];

    }
    cout<<"you enter these element"<<endl;
    for(i=0;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"enter the position of element do you want to delete\n";
    cin>>position;
    item = a[position];
for(j=position;j<=n;j++)
{
    a[j]=a[j+1];
}
n = n-1;
cout<<"new arry is \n";
for(i=0;i<=n;i++)
{
    cout<<a[i]<<endl;
}
}