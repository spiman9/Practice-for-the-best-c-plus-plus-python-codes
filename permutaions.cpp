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


// MAIN CODE LIES HERE

void helper(string s , int index){
    if(s.length() == index){
        cout << s << " ";
        return;
    }

    for(int i = index ; i < s.length() ; i++){
        swap(s[i] , s[index]);
        helper(s , index + 1);
        swap(s[i] , s[index]);
    }
    return ;
}
int main() 
{
    string s;
    cin >> s;
    helper(s , 0 );   
    return 0;
}