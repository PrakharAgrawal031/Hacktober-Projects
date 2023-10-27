#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int item)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (item == arr[mid])
        {
            return mid;
        }
        else if (item < arr[mid])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the elements of the array in ascending order: \n";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int item;
    cout<<"\nEnter the item you wish to search: ";
    cin>>item;
    int position = -1;
    position = binarysearch(arr, size, item) + 1;
    if (position != 0)
    {
        cout<<"\nItem is at "<<position<<" position";
    }
    else
        cout<<"\nItem not found";
    return 0;
}
