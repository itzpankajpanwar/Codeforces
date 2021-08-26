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
        long double ra,rb,ro,r, eq1 , eq2 , eq3 , eq4 ,  ath;
        cout<<"\n enter value of ra "; cin>>ra;
        cout<<"\n enter value of rb "; cin>>rb;
        cout<<"\n enter value of r0 "; cin>>ro;
        cout<<"\nenter value ath for 3rd equation"; cin>>ath;

        r = ( rb+ro)/(ra+ro);

        cout<<"\n value of R = "<<r;
        eq1 = ((0.25*r*r) - 0.6666666666 + sqrtl( (.2291666666*r*r) - 0.055555555 ))/( (2*r*r) - 2);
        cout<<"\neq1 = "<< eq1;
       
        eq2 = ( (0.5*r*r) - 0.91666666666 + sqrtl( (.2291666666*r*r) - 0.055555555 ))  / ( (2*r*r) - 2);
        cout<<"\neq2 = "<< eq2;

        eq3 = ( 0.57735026919/ath)*( ra+ro) + 0.25 ;
        cout<<"\neq3 = "<< eq3;

        eq4 = ( 0.3876)* ( pow(( rb/ra),-0.07054));
        cout<<"\neq4 = "<< eq4;


    }
    return 0;
} 