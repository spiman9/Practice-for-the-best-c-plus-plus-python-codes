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
    int k;
    cin >> k;

    sort(arr , arr+k);
    sort(arr+k+1 , arr+n , greater<>());
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}