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
        long double p,q,r,s,b,c,d,e,f;
        cin>>b>>c>>d>>e>>f>>p>>q>>r>>s;

        cout<<" \n Q1 = "<<acos( ( (p*p) + (q*q) - (c*c) )/(2*p*q)) *180/3.1415 ;
        cout<<" \n Q2 = "<<acos( ( (p*p) + (r*r) - (e*e) )/(2*p*r))*180/3.1415;
        cout<<" \n Q3 = "<<acos( ( (2*p*p) - (b*b) )/(2*p*p)) *180/3.1415;
        cout<<" \n Q4 = "<<acos( ( (p*p) + (s*s) - (f*f) )/(2*p*s)) *180/3.1415;
        cout<<" \n Q5 = "<<acos( ( (r*r) + (q*q) - (d*d) )/(2*r*q)) *180/3.1415;
    }
    return 0;
} 