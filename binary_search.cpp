#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    int left =0;
    int right= size-1;
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            right = mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return-1;

}
void print_arr(int arr[],int size)
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
    print_arr(arr, size);
    int key = 12;
    int result = binarySearch(arr,size,key);
    cout << result<<endl;
    return 0;
}