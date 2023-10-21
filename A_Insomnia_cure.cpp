/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥
*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
#include<queue>
#include<stack>
#include<climits>
#include<bits/stdc++.h>
#define f                       first
#define s                       second
#define ll                      long long
#define pb                      push_back
#define mp                      make_pair
#define pii                     pair<int,int>
#define vi                      vector<int>
#define mii                     unordered_map<int,int>
#define me(i,start,end)         for(int i =start; i<end; ++i)
#define she(i,start,end)        for(int i =end-1; i>=start; --i)
#define all(v)                  v.begin() , v.end()
#define w(x)                    int x;cin>>x;while(x--)

using namespace std;
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
bool isprime(int n);
void solve();
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t =1;
    // cin>>t;
    while(t--)
    {
        solve();
    }return 0;
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
bool isprime(int n)
{
    for(int i =2; i*i<n; ++i)
    {
        if(n%i ==0)return false;
    }
    return n>1;
}
const int N = 1e6+13;
vector<bool>prime(N,true);
void sieve()
{
    prime[0] = prime[1] = false;

    for(int i =2; i*i<=N; ++i)
    {
        if(isprime(i))
        {
            for(int j = i*i; j<=N; ++j)
            {
                prime[j] = false;
            }
        }
    }
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
const int M = 1e5+13;
int v[M]{};

void solve()
{
    //your code goes here
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    me(i,0,M)
    {
        if(i%k == 0||i%l == 0||i%m == 0||i%n == 0)v[i] = 1;
    }int ans =0;
    me(i,1,d+1)if(v[i]==1)++ans;
    cout<<ans<<endl;
}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


// © Copyright 2022 swastiksharma09_Template.ex