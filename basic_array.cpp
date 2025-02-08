#include<iostream>
using namespace std;
int main ()
{
   int arr[10] ;
   int sum =0 ;
   float avg = 0;
   int size = sizeof(arr)/sizeof(int) ;
  
   cout<<"Enter the elements in the array: "<<endl;
   for(int i=0;i<size;i++)
   {
      cin>>arr[i];
   }
   cout<<"Array elements are: ";
   for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
     sum = sum+arr[i];
     avg = sum/float(size);
   }

    cout<<"\nSum of array elements is: "<<sum <<endl;
    cout<<"Average of array elements is : "<<avg<<endl;
   return 0;
}