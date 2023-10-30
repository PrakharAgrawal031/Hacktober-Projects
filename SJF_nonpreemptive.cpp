#include <iostream>
using namespace std;
int main()
{
    int P[4],bt[4],temp,arr[100];
    for(int i = 0; i < 4; i++)
    {
        cin>>bt[i];
    }
    
    for(int i = 0; i< 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
        if(bt[j] > bt[j + 1])
        {
            temp = bt[j];
            bt[j] = bt[j+1];
            bt[j+1] = temp;
        }
        }
    }
    int sum = 0;
    for(int i = 0; i< 3; i++)
    {
        sum = bt[i] + sum;
        arr[i] = sum;
    }
    int sums = 0;
    for(int i = 0; i< 3; i++)
    {
        sums = arr[i] + sums;
        
    cout<<sums/4;
    return 0;
    }
}
