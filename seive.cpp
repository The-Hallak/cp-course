#include<bits/stdc++.h>

using namespace std;

#define ll long long

const ll N=1e6+10;

//used for the seive
ll prime[N];

//have only the primes numbers and used to factorize big numbers in O(sqrt(x))
//but only iterate over primes witch is better.
vector<ll>primes;

//O(n*log(log(n))); N around 1e6-1e7
void seive(){
    for(int i=2;i<N;i++){
        if(prime[i])continue;
        primes.emplace_back(i);
        for(int j=i;j<N;j+=i){
            prime[j]=i;
        }
    }
}

//O(log(x)); x<N(1e6-1e7)
vector<ll>factorize(ll x){
    vector<ll>res;
    while(x>1){
        res.emplace_back(prime[x]);
        x/=prime[x];
    }
    return res;
}


//O(sqrt(x)); x<N*N(1e12)
vector<ll>factorize(ll x){
    vector<ll>res;
    for(int i=0;i<primes.size()&&primes[i]*primes[i]<=x;i++){
        while(x%primes[i]==0){
            res.emplace_back(primes[i]);
            x/=primes[i];
        }
    }
    return res;
}