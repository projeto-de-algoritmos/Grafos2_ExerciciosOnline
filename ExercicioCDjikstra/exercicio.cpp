#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int, int>;
const int MAX_N = 200010;
const ll inf = 0x3f3f3f3f3f3f3f3f;
vector<ii> adj[MAX_N];

int32_t main(){
    int distancia[MAX_N];
    int predecessor[MAX_N];
    int n, m;
    
    cin >> n >> m;
    for(int i=0; i<m; ++i){
        int a, b, p;
        cin >> a >> b >> p;
        adj[a].push_back(ii(b, p));
        adj[b].push_back(ii(a, p));
    }
    
    vector<int> caminho;
    int u = n;
    while(u!=-1){
        caminho.push_back(u);
        u = predecessor[u];
    }
    reverse(caminho.begin(), caminho.end());
    for(auto x:caminho)
        cout << x << ' ';
    cout << endl;

    return EXIT_SUCCESS;
}
