#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
#define F   first
#define S   second
#define pb  push_back
#define     all(x)      x.begin() , x.end()
#define mp  make_pair
#define       FOR(i,a,b) for(i=a;i<=b;i++)
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
const int MAXN = 2003;
const int MOD = 1e9;
int nCr[MAXN][MAXN];
int ncr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || n == r) return 1;
    if (nCr[n][r] != 0) return nCr[n][r];
    nCr[n][r] = (ncr(n - 1, r - 1) % MOD + ncr(n - 1, r) % MOD) % MOD;
    return nCr[n][r];
}
int main() {

    int i, n, r, k, t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &k);
        printf("%d\n", ncr(n, k));
    }

    return 0;
}
