#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int func(int arr[],int n)
{
   int poscount=-1;

   for(int i=0;i<n;i++)
   {
     if(arr[i]>0)
     {
       poscount++;
       arr[poscount]=arr[i];
     }
   }
      return poscount-1;
   }

int main()
{
  int arr[10]={-1,-4,-3,3,5,6,9,8-6,2};

  cout<< " Last index of Positive number in array is : "<< func(arr,10);

  for(int i=0;i<10;i++)
  {
    cout<<arr[i]<< " ";
  }
    return 0;
}