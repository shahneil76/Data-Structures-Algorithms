#include<iostream>
using namespace std;
int main()
{
int n, arr[50], i, j, temp;
int count=0;
int swap=0;
cout<<"Enter Array Size : ";
cin>>n;
cout<<"Enter Array Elements : ";
for(i=0; i<n; i++)
{
cin>>arr[i];
}

for(i=1; i<n; i++)
{
count++;
temp=arr[i];
j=i-1;
while((temp<arr[j]) && (j>=0))
{
swap++;
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=temp;
}
cout<<"Array after sorting : \n";
for(i=0; i<n; i++)
{
cout<<arr[i]<<" ";
}
cout<<"Count is"<<count<<endl;
cout<<"Swap is"<<swap<<endl;
return 0;
}
