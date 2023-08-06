using namespace std;
#include<bits/stdc++.h>

vector<int> adj[100];

int visited[100];

void bfs(int node){
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int first = q.front();
        cout << first <<  " ";
        visited[first] = true;
        q.pop();
        for(auto child : adj[first]){
            if(!visited[child])
                q.push(child);
        }
    }
}

void dfs(int node){
    visited[node] = true;
    cout << node << " ";
    for(auto child : adj[node]){
        if(!visited[child]){

            dfs(child);
            
        }
    }
}

int main() 
{
    int m , n;
    cout << "Enter the number of vertices and edges : ";

    cin >> m >> n;

    cout << "Enter the edges :  ";
    

    for(int i=1;i<=n;i++){
        visited[i]=false;
    }

    for(int i=0;i<n;i++){
        int x , y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    dfs(1);

    bfs(1);

    return 0;
}