#include<iostream>
using namespace std;
int main()
{
int i,j,n,loc,temp,min,a[30];
int count=0;
int swap=0;
cout<<"Enter the number of elements:";
cin>>n;
cout<<"\nEnter the elements\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n-1;i++)
{
min=a[i];
loc=i;
for(j=i+1;j<n;j++)
{
count++;
if(min>a[j])
{
min=a[j];
loc=j;
}
}
swap++;
temp=a[i];
a[i]=a[loc];
a[loc]=temp;
}
cout<<"\nSorted list is as follows\n";
for(i=0;i<n;i++)
{
cout<<a[i]<<" "<<endl;
}
cout<<"Count is"<<count<<endl;
cout<<"Swap is"<<swap<<endl;
return 0;
}
