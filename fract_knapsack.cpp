#include<iostream>
using namespace std;
int main()
{
    int knap_w;
    cout<<"enter the knapsack's capacity : ";
    cin>>knap_w;
    float profit = 0;
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    int name[n];
    int temp1, temp2, temp3, temp4;
    long double w[n], p[n];
    float ppw[n];
    cout<<"enter the elements\n";
    for(int i=0; i<n; i++)
    {
        cin>>name[i];
    }
    cout<<"enter the weigths\n";
    for(int i=0; i<n; i++)
    {
        cin>>w[i];
    }
    cout<<"enter the profit\n";
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    for(int i=0; i<n; i++)
    {
        ppw[i] = p[i]/w[i];
    }
    cout<<"\nelements";
    for(int i=0; i<n; i++)
    {
        cout<<" "<<name[i]<<" ";
    }
    cout<<"\nweights";
    for(int i=0; i<n; i++)
    {
        cout<<" "<<w[i]<<" ";
    }
    cout<<"\nprofit";
    for(int i=0; i<n; i++)
    {
        cout<<" "<<p[i]<<" ";
    }
    cout<<"\nprofit per weight";
    for(int i=0; i<n; i++)
    {
        cout<<" "<<ppw[i]<<" ";
    }
    //sorting
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<=n-i-1; j++)
        {
            if(ppw[i] < ppw[i+1]) //descending order for max profit
            {
                temp1 = ppw[i]; //ppw
                ppw[i] = ppw[i+1];
                ppw[i+1] = temp1;
                
                temp2 = name[i];//name
                name[i] = name[i+1];
                name[i+1] = temp2;
                
                temp3 = w[i];//w
                w[i] = w[i+1];
                w[i+1] = temp3;
                
                temp4 = p[i];//p
                p[i] = p[i+1];
                p[i+1] = temp4;
            }
        }
    }
    cout<<"\nprofit per weight";
    for(int i=0; i<n; i++)
    {
        cout<<" "<<ppw[i]<<" ";
    }
    cout<<"\nname";
    for(int i=0; i<n; i++)
    {
        cout<<" "<<name[i]<<" ";
    }
    cout<<"\nweight";
    for(int i=0; i<n; i++)
    {
        cout<<" "<<w[i]<<" ";
    }
    cout<<"\nprofit";
    for(int i=0; i<n; i++)
    {
        cout<<" "<<p[i]<<" ";
    }
    for(int i=0; i<n; i++)
    {
        if(knap_w == 0)
        {
            break;
        }
        else if(knap_w >= w[i])
        {
            profit = profit + p[i];
            knap_w = knap_w - w[i];
        }
        else if(knap_w < w[i])
        {
            profit = profit + knap_w*ppw[i];
            knap_w = 0;
        }
        
    }
    cout<<"\nthe profit is : "<<profit;
    return.0;
}
