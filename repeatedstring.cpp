#include <bits/stdc++.h>
using namespace std;

#define sz(v) ((int)(v).size())
#define fast       ios::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define fs          first
#define sc          second
#define pb         push_back
#define nl          '\n'
#define all(a) a.begin(),a.end()
#define unique(c) (c).resize(unique(all(c)) - (c).begin())

#define         PI acos(-1) //3.1415926535897932384626433832795028
#define         dsin(degree)     sin(degree*(PI/180.0))
#define         dcos(degree)     cos(degree*(PI/180.0))
#define         dtan(degree)     tan(degree*(PI/180.0))

#define   ps(n,points)                    cout<<fixed<<setprecision(points)<<n<<endl

#define set0(a)     memset(a,0,sizeof(a))
#define setneg(a)   memset(a,-1,sizeof(a))
#define setinf(a)   memset(a,126,sizeof(a))

#define rep(i,start,end) for (int i = start; i <end; i++)
#define rrep(i,end,start) for (int i=end; i>=start ;i--)

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll; 
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
const ll INF = 1e9+7;
const ll mod = 998244353;


void sol(string s){
    unordered_map<string,int> mp;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    for(auto x:mp)
    {
        if(x>2)
        cout<<x.second<<" ";
        
    }
    
}   
int main(){ 
   string s="geekforgeeks";
   sol(s);
    
    return 0;
}