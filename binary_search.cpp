#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
    cout<<"Given Array is: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int binarySearch(int arr[] , int size , int key )
{
    int mid ;
    int high = size;
    int low = 0;
    while(low<=high)
    {
       mid = (low + high)/2;
       if(arr[mid] == key)
       {
          return mid;
       }
       else if(arr[mid]<key)
       {
          low = mid+1;
          
       }
       else{
          high = mid-1;
       }
    }
    return -1;
}


int main()
{
    int arr[100];
    int size = 10;
    int key;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<size;i++)
    {
       cin>>arr[i];
    }
    printArray(arr , size);
    cout<<"\nEnter the element you want to search"<<endl;
    cin>>key;
    int ans = binarySearch(arr , size , key);
    if(ans==-1)
    {
        cout<<"Element not found."<<endl;
    }
    else{
        cout<<"Element found at position "<<ans<<endl;
    }
    return 0;
    

}