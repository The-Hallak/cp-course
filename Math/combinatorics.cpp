#include<bits/stdc++.h>

using namespace std;

#define ll long long

//iterative; O(log(n))
ll pow(ll x,ll n,ll mod){
    x%=MOD;
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
    x%=MOD;
    return pow(x,mod-2,mod);
}


// N is the upper-bound of the numbers;
const ll N=1e6+10,MOD=1e9+7;
ll factorial[N];

// precalculate factorial for all numbers < N; O(N)
void factorial_precalculate(){
    for(ll i=1;i<N;i++){
        factorial[i]=factorial[i-1]*i%MOD;
    }
}

//calculate n choose r for n,r < N; O(log(MOD))
ll nCr(ll n,ll r){
    return factorial[n]*inverse_mod(factorial[n-r]*factorial[r]%MOD,MOD);
}