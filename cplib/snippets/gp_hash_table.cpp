#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

struct chash {
   int operator()(pair <int, int> x) const { return x.first* 31 + x.second; }
};
gp_hash_table <pair <int, int> , int, chash> mp;
