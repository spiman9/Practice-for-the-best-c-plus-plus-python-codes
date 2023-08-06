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

int main() 
{
    int n;
    cin >> n;
    vi a;
    for(int i =0 ; i<n ; i++ ){
        int x;
        cin >> x;
        a.pb(x);
    }

    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i : a){
        cout << i << " ";
    }
    
    return 0;
}