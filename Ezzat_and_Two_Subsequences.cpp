#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double
#define vvi vector<vecetor<int>> 
#define vi vector<int> 
#define vvll vector<vecetor<long long>> 
#define vll vector<long long> 

const ll MOD = 1e9 + 7;
const ll INF = 1e9;


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
        ld n ;
        ld tsm=0; 
        cin>>n;
        vll v(n);
        ld maxi= LONG_MIN;
        for(int i=0;i<n;i++)
             {
                cin>>v[i] ;
                tsm+=v[i]; 
                maxi = maxi>v[i] ? maxi : v[i];
            }
        ld avg2  = (tsm-maxi)/(n-1);
        cout<<setprecision(10)<<maxi+avg2<<endl;
    }
    return 0;
} 