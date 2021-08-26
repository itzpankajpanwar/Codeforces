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
    int t; t=1;
    while(t--)
    {   
        long double a,u , u1;
        cin>>a>>u; //>>d>>e>>f>>p>>q>>r>>s;

        cout<<" \nb = "<<1.41421356237*(a/4);
        cout<<" \n c = "<<3.31662479*(a/8); 
        cout<<" \n d ="<<1.73205080757*(a/4);
        cout<<" \n e ="<<1.73205080757*((3*a)/8);
        cout<<" \n f ="<<2.44948974278*(a/4);

        cout<<" \n p ="<<a*(0.5 -u);
        cout<<" \n q ="<<a*(u-0.125)*1.73205080757;
        cout<<" \n r ="<<a*(u-0.125)*3.31662479;
        cout<<" \n s ="<< (a*(u+0.5)*1.73205080757)/3;
        }
    return 0;
} 