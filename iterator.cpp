#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={2,3,4,5};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
    vector<pair<int ,int>>vp={{2,3},{4,5},{6,7}};
    vector<pair<int,int>> :: iterator it;
    for(it=vp.begin();it!=vp.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    //anoother opton
    for(it=vp.begin();it!=vp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
/*
if we use auto keyword

for(int value : v)
{
    cout<<value
}

vector<pair<int ,int>>vp={{1,2},{2,3}};
for(auto &value:vp)
{
    cout<<value.first<<" "<<value.second<<endl;
}

*/
}