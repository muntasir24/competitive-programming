
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
 

ll n,m;
cin>>n>>m;
vector<vector<int>>v(n,vector<int>(m,0));
vector<vector<int>>ans(n,vector<int>(m,0));
vector<ll> vt;
for (int i = 0; i < n; ++i)
{
    for (int j = 0; j < m; ++j)
    {
        cin>>v[i][j];
        vt.push_back(v[i][j]);
    }
}
sort(vt.begin(),vt.end());

for (int i = 0; i < n; ++i)
{
    sort(v[i].rbegin(),v[i].rend());
}

// for (int i = 0; i < n; ++i)
// {
//     for (int j = 0; j < m; ++j)
//     {
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
// }
int found,ok,idx1,idx2,r=0,c=0;
for (int i = 0; i < m; ++i)

{ 
	
	found=0;
    for (int j = 0; j < n; ++j)
    {
       
        idx1=-1;
        for (int k = 0; k < m; ++k)
        {
            if(vt[i]==v[j][k] and found==0){
             found=1;
             idx1=j;
             idx2=k;
             break;
            }

            if((v[j][k]!=0 and idx1==-1)){
            	idx1=j;
            	idx2=k;
            }

            
        }
        if(found==1){
found++;
ans[j][i]=v[idx1][idx2];
 v[idx1][idx2]=0;
        }
        else{
        	ans[j][i]=v[idx1][idx2];
        	v[idx1][idx2]=0;
        }
        


    }
// cout<<"for : "<<i<<endl;
//     for (int l = 0; l <n ; ++l)
//     {
//     	for (int r = 0; r < m; ++r)
//     	{
//     		cout<<v[l][r]<<" ";
//     	}
//     	cout<<endl;
//     }
//     cout<<endl;
   
}


    for (int l = 0; l <n ; ++l)
    {
    	for (int r = 0; r < m; ++r)
    	{
    		cout<<ans[l][r]<<" ";
    	}
    	cout<<endl;
    }
   

//cout << (flag ==1 ? "YES" : "NO") << "\n";

    }
    
    return 0;
}

