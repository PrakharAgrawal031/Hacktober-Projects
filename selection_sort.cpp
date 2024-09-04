
#include <iostream>
using namespace std;
int main() {
    int n, count = 0;
    cin>>n;int arr[n];
    for(int i =0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n ; i++)
    {
     count = count + 2;   
        for(int j = i + 1; j < n ; j++)
        {
            count = count + 3 ;
            if(arr[i] > arr[j])
            {
                count++;
                int temp = arr[i];
                count++;
                arr[i] = arr[j];
                count++;
                arr[j] = temp;
                count++;
            }
        }
    }
    count = count + 4;
for(int i = 0; i < n; i++)
{
    cout<<arr[i]<<"\n";
    count = count + 3;
}

cout<<count + 2;    return 0;
}