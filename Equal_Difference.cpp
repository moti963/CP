#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll num;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> num;
        mp[num]++;
    }
    ll del=0;
    for (ll i = 0; i < mp.size(); i++)
    {
        for (ll j = i+1; j < mp.size(); j++)
        {
            
        }
        
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}