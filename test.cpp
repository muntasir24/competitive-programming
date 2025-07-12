<<<<<<< HEAD
=======
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
int found,ok,idx;
for (int i = 0; i < m; ++i)
{
    for (int j = 0; j < n; ++j)
    {
        found=0;
        for (int k = 0; k < m; ++k)
        {
            if(vt[i]==v[i][j]){

            }

            if

            
        }
    }
}


//cout << (flag ==1 ? "YES" : "NO") << "\n";

    }
    
    return 0;
}
>>>>>>> 2438bc94b25e34156c9f60c933a2d52a8d91c162
