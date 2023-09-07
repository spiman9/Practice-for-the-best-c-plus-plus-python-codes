#include<bits/stdc++.h>

using namespace std;


int checkOrigin(vector<int>first , vector<int> second){
    int x1 = first[0];
    int y1 = first[1];

    int x2 = second[0];
    int y2 = second[1];

    return x1*(y2 - y1) == y1*(x2 - x1);
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>>points(n , vector<int>(2));

    for(int i=0;i<n;i++){
        cin >> points[i][0] >> points[i][1];
    }



    int ans = 0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            auto first = points[i];
            auto second = points[j];

            ans = ans + checkOrigin(first , second);
        }
    }

    cout << ans << endl;
}
