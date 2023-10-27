#include<iostream>
using namespace std;
int main()
{
    int n, temp;
    int count = 0, s=0;
    cout<<"size of array : ";
    cin>>n;
    count++;
    cout<<"Enter array : ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        count+=2;
        cin>>arr[i];
        count++;
    }
    count+=2;
    for(int i =0; i<n-1; i++)
    {
        count+=2;
        for(int j=0; j<n-i-1; j++)
        {
            count+=2;
            if(arr[j]>arr[j+1])
            {
                count++;
                temp = arr[j];
                count++;
                arr[j]=arr[j+1];
                count++;
                arr[j+1] = temp;
                count++;
                s++;
            }
            
        }
        if(s==0){
            break;
        }
    }
    count+=2*n + 2;
    cout<<"Sorted array : ";
    for(int i=0; i<n; i++)
    {
        count+=2;
        cout<<arr[i]<<" ";
        count++;
    }
    count+=2;
    cout<<"\nthe value of count is "<<count;
    return 0;
}
