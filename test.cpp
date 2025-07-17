#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
  

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ll test_case;
   
    cin >> test_case;
    
    while (test_case--)
    {  
int n,m;
cin>>n;
  
   vector<vector<int>>v(n,vector<int>(n));

string row;

for (int i = 0; i < n; ++i)
{
   cin>>row;
   for (int j = 0; j < n; ++j)
   {
   v[i][j]=row[j]-'0';
   }
}
ll cnt=n,ans=0;
n-=1;
for (int i = 0; i <(n+1)/2; ++i)
{
   cnt-=1;
   for (int j =i; j < cnt; ++j)
   {
      int cnt1=0,cnt0=0;
      if(v[i][j]==0)cnt0++;
      else cnt1++;

      if(v[j][n-i]==0)cnt0++;
         else cnt1++;

      if(v[n-i][n-j]==0)cnt0++;
      else cnt1++;

   if(v[n-j][i]==0)cnt0++;
   else cnt1++;
   ans+=min(cnt0,cnt1);
      // cout<<cnt0<<" "<<cnt1<<endl;
   //cout<<i<<j<<" "<<j<<n-i<<" "<<n-i<<n-j<<" "<<n-j<<i<<endl;

   }
   
   
}

cout<<ans<<endl;

//cout << (flag ==1 ? "YES" : "NO") << "\n";

 }
    
    return 0;
}