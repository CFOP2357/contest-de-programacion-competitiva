#include <bits/stdc++.h>
using namespace std;

#define MAX 1000100
#define MOD 1000000007

typedef long long ull;

inline ull subMod(ull a, ull b){
    return ((a+MOD)-b)%MOD;
}

vector <ull> a;
vector <ull> b;

void solve(){
    a.clear();
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int z; cin>>z;
        a.push_back(z);
    }

    int last = a[0];
    for(int k:a){
        if(k!=last){
            cout<<1<<"\n";
            return;
        }
    }

    cout<<a.size()<<"\n";

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}

