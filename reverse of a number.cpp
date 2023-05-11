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
   ll n;
   cin>>n;
   int rev=0;
   while(n){
   	rev=rev*10+n%10;
   	n/=10;
   }
   cout<<"Reverse is : "<<rev<<nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int tc=1;
//    cin>>tc;
    while(tc--){solve();}
}
