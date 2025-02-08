#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
}
int main()
{
   int arr[10] ;
   int size = sizeof(arr)/sizeof(int) ;
   cout<<"Enter the array elements: ";
   for(int i=0;i<size;i++)
   {
    cin>>arr[i] ;
   }
   printArray(arr , 10);
   return 0;
}