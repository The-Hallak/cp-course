#include<bits/stdc++.h>

using namespace std;

#define ll long long

//using euclidean algorithm; O(log(x))
ll gcd(ll x,ll y){
    if(y>x)swap(x,y);
    if(!y)return x;
    return gcd(y,x%y);
}