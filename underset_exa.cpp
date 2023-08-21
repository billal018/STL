/*
given n strings and  q queries.
in each query you are given a string 
print yes if strings is present else
print no
n<=10^6
|s|<=100
Q<=10^6
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string>s;
    cout<<"enter the n:\n";
    int n;
    cin>>n;
    cout<<"str\n";
    for(int i=0;i<n;i++)
    {
        string str;
        
        cin>>str;
        s.insert(str);
    }
    cout<<"entr q\n";
    int q;cin>>q;
    while(q--)
    {
        string st;
        cout<<"q.str\n";
        cin>>st;
        if(s.find(st)==s.end())
        {
            cout<<"NO"<<endl;
        }
        else{ cout<<"YES"<<endl; }
        
    }

} 
