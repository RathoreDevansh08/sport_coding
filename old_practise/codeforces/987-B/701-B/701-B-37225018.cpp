/*author* Priyanshu Shrivastav 
*from*(IIT Palakkad)
 *_ __ ___  _ __ ___ ___  _ ____   ___  ___| |_ 
 | '_ ` _ \| '__/ __/ _ \| '_ \ \ / / |/ __| __|
 | | | | | | | | (_| (_) | | | \ V /| | (__| |_ 
 |_| |_| |_|_|(_)___\___/|_| |_|\_/ |_|\___|\__|
 wHEN i WROTE THIS, ONLY gOD AND i UNDERSTOOD WHAT i WAS DOING
 * nOW, ONLY gOD KNOWS*/

#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define se second
#define fi first
#define fr(x,y,z) for(auto x=y;x!=z;++x)
#define fo(n) for(int i=0;i<(int)n;i++)
#define forn(i, n) for (int i=0;i<(int)n;i++)
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define R(x); {cout << (x) << "\n"; return 0;}
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;

using namespace std;

template <typename T> T gcd(T a, T b){if(b > a) swap(a, b); return b ? gcd <T> (b,a%b):a;}
template <typename T> T lcm(T a,T b){return(a*b)/gcd<T>(a,b);}
template <typename T> T son(T n){int k=1; while(n/(T)pow(10,k) != 0) k+=1; return k;} 

ll n, m;
set <ll> s1, s2;
int main(int argc, char *argv[]){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
#ifdef CONVICTION
freopen("in", "rt", stdin);
int start_s=clock();
#endif
cin >> n >> m; assert(m <= n*n);
ll x, y;
fo(m){
	cin >> x >> y;
	s1.insert(x), s2.insert(y);
	cout << (n - s1.size())*(n - s2.size()) << " ";
}
cout << "\n";
#ifdef CONVICTION
int stop_s=clock();
cerr << "\ntime taken: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << " s\n";
#endif

//Beware no shit stuff here!
}