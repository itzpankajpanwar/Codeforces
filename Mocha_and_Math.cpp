#include<bits/stdc++.h>
using namespace std;

#define ll long long 
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
        ll n; cin>>n;
        int res , x;
        cin>>x;
        res=x;
        for(int i=1;i<n;i++)
        {
            cin>>x;
            res&=x;
        }
        cout<<res<<endl;
    }
    return 0;
} 