#include<iostream>
using namespace std;




void solve()
{

    int n;
    cin >> n;
    int arr[n];

    for ( int i =0; i<n; i++)
    {
        cin >> arr[i];
    }

    int to_find= 0;
    cin>> to_find;

    int i = 0;
    int j = n-1;
     int count = 0;

    while (i<=j){

        count++;
        int m = i + (j-i)  /2;
       
        

        if ( arr[m] == to_find)
        {
            cout << "found " << count << endl;
            return;
        }
        else if ( arr[m] < to_find){
            i = m +1;}
        else{ 
            j = m-1;}
    }
    cout << "Not found " << count <<endl;
    

}

int main (){
#ifndef ONLINE_JUDGE
    freopen("binary_input.txt", "r", stdin);
    freopen("binary_output.txt", "w", stdout);

#endif 
    
    int t;
     cin>> t;
     while (t--)
     {
         solve();
     }
     return 0;
}
