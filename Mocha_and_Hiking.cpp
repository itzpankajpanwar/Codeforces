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
        ll n,x; cin>>n;
        vector<int> v(n);
        for(int i=0 ; i<n;i++) cin>>v[i]; 
        
        int tt=-1 , i=0;
        while(i<n)
        {
            if( v[i] == 1)
            {
                if(tt == -1) { cout<<n+1<<" "<<i+1<<" "; tt=0; }
                else cout<<i+1<<" ";
            }
            else  cout<<i+1<<" ";

            i++;
        }
        if(tt == -1 )
            cout<<n+1<<" ";
        cout<<endl;
    }
    return 0;
} 