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


int user_definedgcd(int a , int b){
    if(a == 0){
        return b;
    }
    while(b!=0){
        int remainder = a%b;
        a = b;
        b = remainder;
    }
    return a;
}


int user_definedgcd1(int a , int b){
    if(b == 0){
        return a;
    }
    return user_definedgcd1(b , a%b);
}
int main() 
{
    int a , b;
    cin >> a >> b;

    cout << gcd(a , b) << endl;;
    cout << user_definedgcd(a , b ) << endl;
    cout << user_definedgcd1(a , b ) << endl;
    cout << __gcd(a , b) << endl;
    return 0;
}