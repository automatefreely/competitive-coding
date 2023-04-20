// EKO - Eko
// https://www.spoj.com/problems/EKO/

#include <bits/stdc++.h>
using namespace std;

#define cina(a, n) for (int i = 0; i < n; i++) cin>>a[i]

typedef long long ll;
const int M = 2*1e9+10;

bool pred(ll h, ll *a, ll n, ll m){
    ll x = 0;
    for (ll i = 0; i < n; ++i)
    {
        if(a[i]>h){
            x+=a[i]-h;
        }
        if(x >= m) return true;
    }
    return false;
}

int main(){
    ll n, m, lo = 0, hi = M, mid, a[n]; bool p;
    cin>>n>>m;
    cina(a, n);
    
    while((hi-lo)>1){
        mid = (hi+0ll+lo)>>1;
        p =pred(mid, a, n, m);
        if(p){
            lo= mid;
        }
        else{
            hi = mid-1;   // mid is not answer.
        }
    }
    if(pred(hi, a, n, m)){
        cout<<hi<<endl;
    } else{
        cout<<lo<<endl;
    }
    return 0;
} 