#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define vvi vector<vecetor<int>> 
#define vi vector<int> 
#define vvll vector<vecetor<long long>> 
#define vll vector<long long> 

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

ll getresults(vi &arr , ll s , ll e ,  ll cxor, ll seqno , map< pair<int,int>, ll > &mp)
{    
     if( e >= arr.size() ) return 0;

     if(mp.find({s,e}) != mp.end() )
       return mp[{s,e}];
    
     ll res=0;
     cxor^=arr[e];
     if( ( cxor % ( 1<<(seqno-1) ) ) == 0 )
     {
         if( e+1 == arr.size() ) return mp[{s,e}] = 1;
         else
            res += getresults(arr , e+1 , e+1 , 0 , seqno+1  , mp)%MOD;
     } 
     res += getresults(arr , s , e+1 ,  cxor  , seqno , mp)%MOD;
     return mp[make_pair(s,e)] = res%MOD ;
}

int main()
{     
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int t; cin>>t; 
    while(t--)
    {
        ll n ; cin >> n;
        vi v(n) ;
        vll dp(n,-1);
        map< pair<int,int> , ll > mp;
        for(int i=0; i<n; i++) cin>>v[i] ;
        cout<<getresults(v,0,0,0 ,1 ,mp)%MOD<<endl;
    }
    return 0;
} 