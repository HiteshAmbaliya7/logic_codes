#include<iostream>
using namespace std;

// function to add an element in array
 int addElem(int arr[],int size,int max_size,int element)
 {
    if(size>=max_size)
    {
        cout << "Array is full! ,can not add element : "<<element<<endl;
        return size;
    }
    arr[size]=element;
    cout << "Added "<<element<<" to array."<<endl;
    return size +1;
 }
 

// function to delete n element in array 
 int deleteElem(int arr[],int size)
 {
    if (size <= 0)
    {
        cout << "Array is Empty , so can not delete any element"<<endl;
        return size;
    }
    cout<< "Deleted "<<arr[size-1] << "  from Array"<<endl;
    return size-1;
 }


 // function to display all array elements 
 void disp(int arr[], int size)
 {
    cout <<"Array :";
    for (int i=0;i<size;i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
 }

// it is the main function 
int main()
{
    int max_size =10;
    int arr[max_size];
    int currentSize = 0;
// here current size variable is store the return value of the function that was current size of array 
    currentSize= addElem(arr,currentSize,max_size,5);
    currentSize= addElem(arr,currentSize,max_size,10);
    currentSize= addElem(arr,currentSize,max_size,15);
    currentSize= addElem(arr,currentSize,max_size,20);
    currentSize= addElem(arr,currentSize,max_size,25);
    currentSize= addElem(arr,currentSize,max_size,30);
    disp(arr,currentSize);
    // delete elemnt orom thr array 
    currentSize= deleteElem(arr,currentSize);
    currentSize= deleteElem(arr,currentSize);
    disp(arr,currentSize);

    return 0;
}