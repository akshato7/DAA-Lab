#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for ( int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    int key=0;
    cin>>key;
    for (int i =0; i<n; i++){
        if (arr[i] == key){

            cout<< key << " no. of comparisons = " << i;
            return;
        }
        if (i == n-1){
            cout <<" key not found " << endl;
        
        }

    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout );
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();

    }
    return 0; 

}
