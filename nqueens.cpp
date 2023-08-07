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


bool isSafe(vvi &board , int i , int j , int rows , int cols){
    // check in the row
    rep(k , 0 , rows){
        if(board[i][k] == 1){
            return false;
        }
    }

    rep(k , 0 , cols){
        if(board[k][j] == 1){
            return false;
        }
    }
    int l = i;
    int m = j;
    while(l >= 0 && m>=0 ){
        if(board[l][m] == 1){
            return false;
        }
        l--;
        m--;
    }


    l = i ;
    m = j;
    while(l>=0 && m < cols){
        if(board[l][m] == 1)return false;
        l--;
        m++;
    }

    return true;
}


bool nQueens(vvi &board , int row , int rsize , int csize){
    if(row >= rsize){
        return true;
    }
    rep(j , 0 , csize){
        if(isSafe(board , row , j , rsize , csize)){
            board[row][j] = 1;
            if(nQueens(board , row + 1 , rsize , csize)){
                return true;
            }
            board[row][j] = 0;
        }
    }
    return false;
}

int main() 
{
    int n , m;
    cout << "Enter the size of the board : ";
    cin >> n >> m;

    vvi board(n , vi(m , 0));

    if(nQueens(board , 0 , n , m)){
        rep(i , 0 , n){
            rep(j , 0 , m){
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }else{
        cout << "Sorry no solutions exists !!!!!" << endl;
    }

    // printing the solutions
    
    return 0;
}