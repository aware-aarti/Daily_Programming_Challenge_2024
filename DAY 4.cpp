// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


void sorted(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
        
        if(arr[i]>arr[j])
        {
            swap(arr[i],arr[j]);
        }
        }
    }
}

void result(int arr1[],int arr2[],int n1,int n2)
{
    for (int i=n1-1;i>0;i--)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]>arr2[j])
            {
                swap(arr1[i],arr2[j]);
            }
        }
    }
    sorted(arr1,n1);
    sorted(arr2,n2);
}

int main() {
    int arr1[]={1, 3, 5};
    int arr2[]={2, 4, 6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    
    result(arr1,arr2,n1,n2);
    
    for(int i=0;i<n1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<n2;i++)
    {
        cout<<arr2[i]<<" ";
    }

    return 0;
}
