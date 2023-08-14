#include<bits/stdc++.h>

using namespace std;

#define ll long long

//using euclidean algorithm; O(log(x))
ll gcd(ll x,ll y){
    if(y>x)swap(x,y);
    if(!y)return x;
    return gcd(y,x%y);
}

//lcm(a,b)=a*b/gcd(a,b); O(log(x))
ll lcm(ll x, ll y){
    //reorder operation to avoid overflow of multiplication.
    return x/gcd(x,y)*y;
}