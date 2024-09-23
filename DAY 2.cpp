//Missing Number
#include <iostream>
#include <unordered_map>
using namespace std;

int record(int* arr,int n)
{
    int totalsum=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=arr[i];
    }
    int missing=totalsum-sum;
    return missing;
    
   
}

int main() {
  int arr[]={1,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]+1);
  
  
  
  
  int missing=record(  arr,  n);
  cout<<"the missing number is "<< missing;
   
   
    
    
    return 0;
}
