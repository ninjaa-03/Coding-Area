// Written by - Nitish Kumar

#include<bits/stdc++.h>
using namespace std;

#define cn cout<<"NO"<<endl
#define cy cout<<"YES"<<endl
#define ll long long int
#define vi vector<int>
#define pi pair<int,int>
#define sq(a) a*a
#define cb(a) a*a*a
#define mod 1000000007
#define loop(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define nl "\n"

ll sod(ll n){
	if(n==0) return 0;
	else return sod(n/10)+n%10;
}

void solve(){
  ll n;
  cin>>n;
  cout<<sod(n)<<endl;       
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int tc=1;
//    cin>>tc;
    while(tc--){solve();}
}
