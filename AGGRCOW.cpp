#include <bits/stdc++.h>
using namespace std;


#define cina(a,n) for(int i = 0; i < n; ++i) cin>>a[i]
#define pt(a) cout<<(a)<<endl
#define testcase int __alpha__; cin>>__alpha__; while(__alpha__--)
#define ll long long
#define couta(a,n) for(int i = 0; i < n; ++i) cout<<a[i]<<" ";cout<<endl


const ll M = 1e9+10;
const ll N = 1e5+10;


ll a[N], n, m;


bool pred(int v){
    ll start = a[0];
    for (ll i = 1; i < m; ++i)
    {
        auto it = lower_bound(a, a+n, v+start);
        // cout<<*it<<" "<<v<<" "<<start<<endl;
        if(it == a+n) return false;
        start = *it;
    }
    return true;
}


int main(){
    testcase{
        cin>>n>>m;
        cina(a, n);
        sort(a,a+n);
        // couta(a,n);

        ll hi = M;
        ll lo = 0;

        while(hi-lo>1){
            ll mid = (hi+lo)>>1;
            if(pred(mid)){
                lo = mid;
            } else{
                hi = mid - 1;
            }
        }

        if(pred(hi)){
            pt(hi);
        } else{
            pt(lo);
        }
    }
    return 0;
}