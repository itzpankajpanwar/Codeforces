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
        string a , b;
        cin>>a>>b;
        ll res=0;
        for(int i=n-1 ; i>=0 ; i--)
        {   
            if(b[i]=='1')
            {
                if( a[i] == '0'){ res++; a[i]='2'; }
                else
                {
                    if(i+1<n && a[i+1]=='1'){ res++; a[i+1]='2'; }
                    else if(i-1>=0 && a[i-1]=='1'){ res++; a[i-1]='2'; }
                }   
            }
        }
        cout<<res<<"\n";
    }
    return 0;
} 