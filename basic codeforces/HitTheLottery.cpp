#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(0)
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define pb push_back


int main() {
    ll n;
    cin >> n;
    ll mn=0;
    mn+=n/100;
    n=n%100;
    mn+=n/20;
    n=n%20;
    mn+=n/10;
    n=n%10;
    mn+=n/5;
    n=n%5;
    mn+=n/1;
    n=n%1;
    cout << mn;
    return 0;
}