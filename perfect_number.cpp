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


bool perfect(int n){
    int sum = 0;
    for(int i = 1 ; i <= n/2 ; i++ ){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n)return true;
    return false;
}

int main() 
{
    int n;
    cin >> n;

    if(perfect(n)){
        cout << "Perfect Number " << endl;
    }else{
        cout << "Not a perfect Number " << endl;
    }
    return 0;
}