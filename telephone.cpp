#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define vvi vector<vecetor<int>> 
#define vi vector<int> 
#define vvll vector<vecetor<long long>> 
#define vll vector<long long> 

const ll MOD = 1e9 + 7;
const ll INF = 1e9;


void solve(string s)
{
    int n=s.length();
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    unordered_set<char> st { 'Z' ,'W', 'U' , 'X' , 'G' , 'R' , 'F' , 'O' , 'V' , 'I'};
    //                        0    2    4     6     8     3     5     1     7     9
    unordered_map<char,int> mp ; 
    for(auto &x:st) mp[x]=0;
    for(auto &x:s)
        if( st.count(x) != 0)
            mp[x]++;

    vector<int> res(10);

    // directly calculated 
    res[0] = mp['Z'];
    res[2] = mp['W'];
    res[4] = mp['U'];
    res[6] = mp['X'];
    res[8] = mp['G'];

    // indirect calculation 
    res[1] = max( 0 , mp['O'] - res[0]-res[2]-res[4]); 
    res[3] = max( 0 , mp['R'] - res[4] - res[0] );
    res[5] = max( 0 , mp['F'] - res[4]);
    res[7] = max( 0 , mp['V']- res[5]) ;
    res[9] = max( 0 , mp['I'] - res[8] - res[6] - res[5]);
    
    for(int i=9;i>=0;i--)
        for(int j=0; j<res[i]; j++)
            cout<<to_string(i);
    cout<<endl;
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
        string s; 
        cin>>s;
        solve(s);
    }
    return 0;
} 
