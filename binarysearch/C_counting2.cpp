//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    for(ll i=0;i<q;i++){
      ll x;
      cin>>x;
      cout<<n-(lower_bound(a.begin(),a.end(),x)-a.begin())<<"\n";
    }
}