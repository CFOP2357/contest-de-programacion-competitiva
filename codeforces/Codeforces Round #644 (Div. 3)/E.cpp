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

#define MAX 100
#define MOD 1000000007

ull n;

string grid[MAX];

void solve(){

    cin>>n;
    for(int i=0; i<n; i++)
        cin>>grid[i];

    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-1; j++){
            if(grid[i][j] == '1' && grid[i+1][j] == '0' && grid[i][j+1] == '0'){
                cout<<"NO\n";
                return;
            }
        }

    cout<<"YES\n";


}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

