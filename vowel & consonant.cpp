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

void solve(){
  string s;
  cin>>s;
  int n=s.length();
  int v=0;
  for(int i=0;i<n;i++){
  	if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i')
  	v++;
  }
  cout<<v<<" "<<n-v<<nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int tc=1;
//    cin>>tc;
    while(tc--){solve();}
}
