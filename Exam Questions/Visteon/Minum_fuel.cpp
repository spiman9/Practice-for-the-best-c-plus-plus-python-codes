#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }

        int ans = 0;
        int price = a[0];
        for(int i=0;i<n;i++){
            price = min(price , a[i]);
            ans = ans + price*b[i];
        }
        cout << ans << endl;
    }
}