#include<iostream>
using namespace std;
void printArray(int arr[] , int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
   int arr[10] ;
   int max , min;
   int size = sizeof(arr)/sizeof(int) ;
   cout<<"Enter the array elements: ";
   for(int i=0;i<size;i++)
   {
    cin>>arr[i] ;
   }
   printArray(arr , 10);
   
   max = arr[0];
   for(int i=0;i<size;i++)
   {
    if(arr[i]>max){
        max = arr[i];
    }
   }

   min=arr[0];
   for(int i=0;i<size;i++)
   {
    if(arr[i]<min)
    {
        min=arr[i];
    }
   }
   cout<<"\nMaximum element in array is: "<<max;
   cout<<"\nMinimum element in array is: "<<min;

   return 0;
}