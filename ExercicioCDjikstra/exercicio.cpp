#include<bits/stdc++.h>
#define int long long
using namespace std;
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define len(x) (int)x.size()
using ll = long long;
using ii = pair<int, int>;
#define MAX_N 200010
 
const int inf = 0x3f3f3f3f3f3f3f3f;
vector<ii> adj[MAX_N];
int dist[MAX_N];
int pred[MAX_N];
 
int djikstra(int s, int t, int n){
    memset(dist, 0x3f, sizeof dist);
    memset(pred, -1, sizeof pred);
        dist[s]=0; 
        set<ii> fila;
        fila.insert(ii(0, s));
        while(not fila.empty()){
                auto u = fila.begin()->second;
                fila.erase(fila.begin());
                for(auto x:adj[u]){
                        auto v=x.ff, w=x.ss;
                        if(dist[v]>dist[u]+w){
                                fila.erase(ii(dist[v], v));
                                dist[v]=dist[u]+w;
                                pred[v]=u;
                                fila.insert(ii(dist[v], v));
                        }
                }
        }
        return dist[t];
}


int32_t main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; ++i){
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back(ii(b, w));
        adj[b].push_back(ii(a, w));
    }
    if(djikstra(1, n, n)>=inf){
        cout << -1 << endl;
    }
    else{
        vector<int> caminho;
        int u = n;
        while(u!=-1){
            caminho.push_back(u);
            u = pred[u];
        }
        reverse(all(caminho));
        for(auto x:caminho)
            cout << x << ' ';
        cout << endl;
    }
    return EXIT_SUCCESS;
}
 
 
