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

main() {
	SPEED;
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i< n; i++) {
		cin>>a[i];
	}
	int k;
	cin>>k;
	for(auto& i: a) {
		if(i!= k) cout<<i<<" ";
	}
}
