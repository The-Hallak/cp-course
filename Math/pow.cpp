#include<bits/stdc++.h>

using namespace std;

#define ll long long

//recursion; O(log(n))
ll pow(ll x,ll n,ll mod){
    if(!n)return 1;
    if(n==1)return x%mod;
    ll res=pow(x,n/2,mod);
    res=res*res%mod;
    if(n%2)res=res*x%mod;
    return res;
}

//iterative; O(log(n))
ll pow(ll x,ll n,ll mod){
    ll res=1;
    while(n){
        if(n%2){
            res=res*x%mod;
        }
        n/=2;
        x=x*x%mod;
    }
    return res;
}

//mod must be prime; O(log(mod))
ll inverse_mod(ll x,ll mod){
    return pow(x,mod-2,mod);
}