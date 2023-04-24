#include<bits/stdc++.h>
using namespace std;

void ReverseArray(int i, int arr[],int size)
{
    //APPROACH: Start from index 0 to n and swap until the middle element is found

    if(i==size/2)
       return;
    else swap(arr[i],arr[size-i-1]);

    ReverseArray(i+1,arr,size);
}
 
int main()  
{  
    const int size=7;
  int arr[size]={1,2,3,4,5,6,7};

  cout<<"\n\n Before Swapping : ";
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
  
  ReverseArray(0,arr,size);
  cout<<"\n\n After Swapping : ";
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }



    return 0;
}