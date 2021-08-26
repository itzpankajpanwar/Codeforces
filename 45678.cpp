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

        cout<<" \n Dax (eq4)= "<<a*1.73205080757*( u - 0.25);
        cout<<" \n Dbx (eq5)= "<<a * (sqrtl(abs((3*u*u) - (2.75*u) + 0.671875 )) ); 
        cout<<" \n Daxe (eq6)= "<< 1.41421356237 * a * ( (2*u) - 0.5);
        cout<<" \n Dbxe (eq7)= "<< 1.41421356237 * a *( 1 - (2*u) );
        cout<<" \n Dbxeu  (eq8)= "<<a* (sqrtl( abs((4*u*u) - (3*u) + 0.6875 ) )); 
    }
    return 0;
} 