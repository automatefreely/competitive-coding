#include<bits/stdc++.h>
using namespace std;

#define cina(a,n) for(int i = 0; i < n; ++i) cin>>a[i]
#define yes(a) cout<<(((a)>0)?"yes":"no")<<endl

// STPAR - Street Parade
// https://www.spoj.com/problems/STPAR/

int main(){
    int n;
    cin >> n;
    while(n!=0){
        int no=1, a[n], i =0;
        cina(a, n);
        stack<int> b;

        while((i<n)&&(no<(n+1))){
            if(a[i]==no){
                no++; i++;
            }
            else if(!b.empty()){
                if(b.top()==no){
                    no++; b.pop();
                }else b.push(a[i]); i++; 
            }
            else b.push(a[i]); i++;
        }

        while(!b.empty()){
            if(b.top()==no&&no<(n+1)){
                no++; b.pop();
            } else break; 
        }

        yes(b.empty()); 
        cin>>n;
    }
    return 0;
}
