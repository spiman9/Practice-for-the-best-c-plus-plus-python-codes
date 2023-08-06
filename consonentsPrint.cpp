using namespace std;
#include<bits/stdc++.h>

int main() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            continue;
        cout << s[i] << " ";
    }
    return 0;
}