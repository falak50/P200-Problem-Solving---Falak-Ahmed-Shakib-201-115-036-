#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<pair<ll,ll>,ll>plll;
#define ff first
#define ss second
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define all(x) x.begin(),x.end()
void loop()
{
    for(ll i=0; i<10; i++) {};
}
int main()
{

    fastread();


    ll n,a,b,c;

    cin>>n>>a>>b>>c;

    ll bug=n/b;
    if(n%b)bug++;


    ll time=bug*a;

    c+=a;

  //  cout<<c<<" "<<time<<endl;

    if(time>c) cout<<"YES"<<endl;
     else   cout<<"NO"<<endl;






}
