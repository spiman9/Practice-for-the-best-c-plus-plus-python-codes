using namespace std;
#include<bits/stdc++.h>


int main() 
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // sort(arr  , arr+n);
    // cout << arr[n-1] * arr[n-2] << endl;
    sort(arr , arr+n , greater<>());
    cout << arr[0] * arr[1];
    return 0;
}