#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int key, int count)
{
    count++;
    for(int i=0; i<n; i++)
    {
        count+=2;
        if(key == arr[i])
        {
            count++;
            return i;
            count++;
        }
    }
    count+=2;
    return -1;
    count++;
}
int main()
{
    int position, i, n, key;
    int count = 0;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array : ";
    for(i=0; i<n; i++)
    {
        count+=2;
        cin>>arr[i];
        count++;
    }
    count+=2;
    cout<<"the array is : ";

    for(i=0; i<n; i++)
    {
        count+=2;
        cout<<arr[i];
        count++;
    }
    count+=2;
    cout<<"\nEnter the element to be searched : ";
    cin>>key;
    count++;
    position = linearSearch(arr, n, key, count);
    count++;
    if(position == -1)
    {
        count++;
        cout<<"the element is not found, try again";
        count++;
    }
    else
    {
        count++;
        cout<<"the postion of the element is "<<position+1;
        count++;
    }
    cout<<"\nthe total operations are : "<<count;
    return.0;
}
