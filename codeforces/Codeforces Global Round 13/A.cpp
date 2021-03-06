#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <cmath>

#include <map>
#include <set>

#include <stack>
#include <queue>

#include <unordered_map>
#include <unordered_set>

#include <time.h>

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
vector<ull> b;
ull n, m;
string s;

void pre(){

}

void solve(){
    a.clear(); b.clear();
    cin>>n>>m;

    ull ones = 0;
    for(int i=0; i<n; i++){
        ull z; cin>>z;
        a.push_back(z);
        ones += z==1;
    }


    while(m--){

        int t; cin>>t;
        if(t==1){
            int x; cin>>x;

            if(a[x-1]==1){
                ones--;
                a[x-1]=0;
            }
            else {
                ones++;
                a[x-1] = 1;
            }

        }
        else {
            int k; cin>>k;
            if(k<=ones){
                cout<<1<<"\n";
            }
            else
                cout<<"0\n";
        }

    }

}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    //srand (time(NULL));

    pre();

    int t=1;
    while(t--){
        solve();
    }

    return 0;
}
