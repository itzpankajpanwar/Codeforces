#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define vvi vector<vecetor<int>> 
#define vi vector<int> 
#define vvll vector<vecetor<long long>> 
#define vll vector<long long> 

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

string formstring(string s)
{   
    int n  = s.length();
    for(int i=1;i<n;i++)
    {
        if(s[i]=='?')
        {
            if(s[i-1]=='B') s[i]='R';
            else s[i]='B';
        }
    }
    return s;
}

int cal_t(string &s)
{
    int n=s.length();
    int t=0;
    for(int i=1;i<n;i++)
        if(s[i]==s[i-1])
        t++;
    return t;
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
        ll n; cin>>n;
        string s; cin>>s;
        if(s[0]=='?' )
        {   
           s[0]='B'; string s1=formstring(s);
           s[0]='R'; string s2=formstring(s);
           if( cal_t(s1) <= cal_t(s2) ) cout<<s1<<endl;
           else cout<<s2<<endl;
        }
        else 
        {   cout<<formstring(s)<<endl; }
    }
    return 0;
} 