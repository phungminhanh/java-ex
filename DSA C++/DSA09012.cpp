#include <bits/stdc++.h>
using namespace std;

#define FILL(a,x) memset(a, x, sizeof(a))
#define CLEAR(arr,rag) for(int i=0; i<= rag; i++) arr[i].clear();
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MULTIPLE_TEST int tes; cin>>tes; while(tes--)
#define FOR(x,iFi,iLa) for(int x=(iFi);x<=((int)iLa);x++)
#define FOD(x,iFi,iLa) for(int x=(iFi);x>=((int)iLa);x--)
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN

typedef vector<bool> vb;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;

const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int V,E,x,y;
vi List[1005];
bool vs[1005];

void BFS(int u) {
	queue<int> q;
	q.push(u);
	vs[u]=true;
	while(!q.empty()) {
		int v = q.front(); q.pop(); 
		for(int i = 0; i< List[v].size(); i++) {
			int y = List[v][i];
			if(!vs[y]) {
				q.push(y);
				vs[y]=true;
			}
		}
	}
}

main() {
	SPEED;
	MULTIPLE_TEST {
		FILL(vs,false);
		CLEAR(List,V);
		cin>>V>>E;
		FOR(i,1,E) {
			cin>>x>>y;
			List[x].pb(y);
			List[y].pb(x);
		}
		int dem=0;
		FOR(i,1,V){
			if(!vs[i]) {
				dem++;
				BFS(i);
			}
		}
		FOR(i,1,V) {
			FILL(vs,0);
			vs[i]=true;
			int tmp = 0;
			FOR(j,1,V) {
				if(!vs[j]) {
					tmp++;
					BFS(j);
				}
			}
			if(tmp>dem) cout<<i<<" ";
		}
		cout<<endl;

	}
}
