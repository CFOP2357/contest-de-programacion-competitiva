#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>
using namespace std;

/*
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<ull,null_type,less<ull>,rb_tree_tag, tree_order_statistics_node_update> orderedSet;
typedef tree<ull,null_type,less_equal<ull>,rb_tree_tag, tree_order_statistics_node_update> orderedMultiSet;

#define findBO find_by_order
#define findBK order_of_key
*/

#define all(a) a.begin(), a.end()

typedef long long ull;
typedef pair<ull, ull> pii;
typedef vector<ull> vi;

#define MAX 1000100
#define MOD 1000000007

vector<ull> a;
vector<bool> b;
ull n, T;

void solve(){
    a.clear(); b.clear();
    cin>>n>>T;
    map<int, bool> complement;
    for(int i=0; i<n; i++){
        ull z; cin>>z;
        a.push_back(z);
        if(complement[T-z]){
            b.push_back(1);
            if(T-z == z)
                complement[T-z] = false;
        }
        else{
            b.push_back(0);
            complement[z] = true;
        }
    }

    for(bool ans : b) cout<<ans<<" ";
    cout<<"\n";

}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

