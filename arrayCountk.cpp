#include<bits/stdc++.h>
using namespace std;


int countt(int n , int k){
    int ct = 0;
    while(n!=0){
        int d = n%10;
        d == k ? ct++ : ct;
        n /= 10;
    }
    return ct;
}

int main()
{
    int n;
    int k;
    cin >> k;
    cin >> n;
    int count[n];
    int arr[n];
   for(int i=0;i<n;i++)
   {
        int x;
        cin >> x;
        arr[i] = x;
        count[i] = countt(x , k);
    }

    int max = count[0];
    int index = 0;
    for(int i=1;i<n;i++){
        if(max < count[i]){
            max = count[i];
            index = i;
        }
    }

    cout << arr[index] << endl;

}