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

   
int n,p1,p2,tp,ttp,tp2,tp1;
cin>>n;
vector<int>v(n);
map<int,int>mp;

for (int i = 0; i < n; ++i)
{
   cin>>v[i];
   mp[v[i]]=i+1;
}

p1=1,p2=n;
int flag=0;
for (int i = 0; i < n; ++i)
{
   tp=v[i];
   if(tp==p1){
      p1++;
   }
   else if(tp==p2){
      p2--;
   }
   else{

      ttp=v[n-1];
      tp1=p1;
    tp2=p2;

      int k=n-1;
      while(i<k){
         cout<<tp<<" "<<ttp<<" "<<tp1<<" "<<tp2<<endl;
if(ttp==tp1 or tp==tp1){
tp1++;

}
else if(ttp==tp2 or tp==tp2){
tp2--;
}

else{
   //ans
vector<int> vc = {tp, ttp, tp1, tp2};
    sort(vc.begin(), vc.end());
    if(vc[0]!=ttp and vc[3]!=ttp and vc[0]!=tp and vc[3]!=tp ){
      flag=1;
      break;
    }
         



}
k--;
ttp=v[k];

      }
   }
  
   if(flag)break;
   
}

if(flag){
   cout<<min(mp[ttp],mp[tp])<<" "<<max(mp[ttp],mp[tp])<<endl;
}
else 
cout<<"-1"<<endl;

//cout << (flag ==1 ? "YES" : "NO") << "\n";

 }
    
    return 0;
}