#include<iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)
         return i;
    return -1;
}
int main()
{
int a,n,x;
int arr[n];
cout<<"enter the length of array"<<" ";
cin>>n;
cout<<endl;
cout<<"enter array"<<" ";
for(int j=0;j<n;j++)
 cin>>arr[j];
cout<<endl<<"enter no to be search";
cin>>x;
a=search(arr,n,x);
if(a==-1)
 cout<<"number is not present"<<endl;
else
 cout<<"index of number is"<<a<<endl;
return 0;
}



