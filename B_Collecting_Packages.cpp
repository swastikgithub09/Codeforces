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
    int t ;
    cin>>t;
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
bool cmp(pair<int,int>& a, pair<int,int>& b)
{
    if(a.first == b.first)return a.second < b.second;
    return a.first < b.first; 
}

void solve()
{
    //your code goes here
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    me(i,0,n)
    {
        int x,y;
        cin>>x>>y;
        v.pb(mp(x,y));
    }

    sort(all(v),cmp);

    int red = 0;
    me(i,0,n-1)
    {
        if(v[i].first -v[i+1].first <=0 && v[i].second - v[i+1].second <=0)
        {
            red =0;
        }
       
        else {red = 1;break;}
    }
    if(red == 1)cout<<"NO"<<endl;
    else{   

        int x =0, y=0;

            string s;
            me(i,0,n)
            {
                int n = v[i].first;
                int m = v[i].second;

                if(x != n && y != m)
                {
                    int r = n-x;
                    while(r--)
                    {
                    s.pb('R');
                    }
                    int u = m -y;
                    while(u--)
                    {
                        s.pb('U');
                        }
                }

                else if(x == n && y != m)
                {
                    int u = m-y;
                    while(u--)
                    {
                        s.pb('U');
                    }
                }
                else if (x !=n && y == m)
                {
                    int r = n - x;
                    while(r--)
                    {
                        s.pb('R');
                    }
                }
                x = n;
                y = m;
            }

             cout<<"YES"<<endl<<s<<endl;
    }

   
}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


// © Copyright 2022 swastiksharma09_Template.ex