using namespace std;
#include<bits/stdc++.h>
#define rep(i , a , b) for(int i=a ;i<b;i++)
#define vi vector<int>
#define pb push_back
#define pii pair<int , int>
#define f first
#define s second
#define vvi vector<vi>
#define inf 1e9
#define mod 1e9+7
#define mii map<int , int> 
#define mci map<char , int>
#define umii unordered_map<int, int>
#define si set<int>

//gcd code
int gcd(int a , int b){
    if(b == 0){
        return a;
    }
    return gcd(b , a%b);
}

//lcm
int lcm(int a , int b){
    return (a / gcd(a , b) * b);
}






void helper(vi &arr , int k){
    int temp = arr[k-1];
    for(int i=k-1 ; i>0 ; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}
int main() 
{
    int n;
    cin >> n;
    vi arr;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        arr.pb(x);
    }

    int k;
    cin >> k;
    helper(arr , k);
    for(auto x : arr){
        cout << x <<" ";
    }
    return 0;
}