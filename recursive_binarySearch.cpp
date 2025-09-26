#include<iostream>
using namespace std;
int binarySearch(int arr[],int left,int right,int key)
{
    
    if(left>right)
    {
        return -1;
    }
    int mid =left + (right-left)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
        return binarySearch(arr,left,mid-1,key);
    }
    else{
        return binarySearch(arr,mid+1,right,key);
    }
}
void printArr(int arr[],int size)
{
    cout << "{";
    for(int i=0;i<size;i++)
    {
        cout << arr[i]<<",";
    }
    cout << "}"<<endl;
}
int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78};
    int size = sizeof(arr) / sizeof(arr[0]); 
    printArr(arr,size);
    int key=45;
    int result = binarySearch(arr,0,size-1,key);
    cout << result;
    return 0;
}