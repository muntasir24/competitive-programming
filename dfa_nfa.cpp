#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'


bool dfa(string s){

int flag=1,q=0;
for (int i = 0; i < s.size(); ++i)
{


if(s[i]!='0' and s[i]!='1')flag=0;

if(q==0){
	if(s[i]=='0')q=1;
		else q=0;
	
}
else if(q==1){
if(s[i]=='0')q=1;
		else q=2;

}
else if(q==2){
if(s[i]=='0')q=1;
		else q=0;
}
	
}

if(!flag) return 0;
else return q==2;


}



bool nfa(string s) {
    bool q0 = true;  
    bool q1 = false;
    bool q2 = false;

    for (char c : s) {
        if (c!='0' && c!='1') return false; 

        bool next_q0 = false, next_q1 = false, next_q2 = false;

       
        if (q0) {
            if (c == '0') {
                next_q0 = true; 
                next_q1 = true; 
            }
            if (c == '1') {
                next_q0 = true; 
            }
        }

        if (q1 && c == '1') {
            next_q2 = true; 
        }

        q0 = next_q0;
        q1 = next_q1;
        q2 = next_q2;
    }

    return q2; 
}

  

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ll test_case;
   
    cin >> test_case;
    
    while (test_case--)
    {  

   string s;
   cin>>s;

cout << (dfa(s)==1 ? "Accepted DFA  " : "Rejected DFA  ");

cout << (nfa(s)==1 ? "Accepted NFA  " : "Rejected NFA  ") << "\n";


 }
    
    return 0;
}