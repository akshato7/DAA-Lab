#include<iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int to_find=0;
    cin>> to_find;

    int i =0;
    int j = n-1;
    int count =0;

    while (i<=j)
    {
       
        int m = i + (j-i)/2;
        if (arr[m]== to_find)
        {
            count++;
        }
        if (arr[m]>to_find)
        {
            j=m-1;    
        }
        else
        {
            i=m+1;
        }    
    }
    if ( count == 0)
    {
        cout<< "Element Not found " << endl;
    }
    else if (count > 0)
    {
        cout << to_find << " - " << count << endl; 
    }
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("q1_input.txt", "r", stdin);
    freopen("q1_oput.txt", "w", stdout);

#endif

    int t;
    cin>> t;
    while (t--)
    {
        solve();

    }
    return 0;
}
