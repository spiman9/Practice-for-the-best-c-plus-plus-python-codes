//this is used for to find the maximu subarray


using namespace std;
#include<bits/stdc++.h>
int kandane(vector<int>&v){
    int sum = 0;
    int mx = INT_MIN;
    // int start=0;
    // int ansstart,ansend;

    for(int i=0;i<v.size();i++){
        sum+=v[i];

        if(sum > mx){
            mx = sum;
            // ansstart = start;
            // ansend = i;
        }

        if(sum < 0 ){
            sum = 0;
            // start = i;
        }
    }

    // cout << "Start index : " << ansstart << " endstart : " << ansende << endl;
    return mx;
}
int main() 
{
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    vector<int>v;

    cout << "Enter the elements : ";
    for(int i = 0  ; i <n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int ans = kandane(v);

    cout << "Maximum sums is : " << ans << endl;
    return 0;
}