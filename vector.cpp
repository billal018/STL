#include<bits/stdc++.h>
using namespace std;
void print(vector<pair<int ,int>>&v)
{
    cout<<"size="<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main()
{
    //vector<int>v={10,2}
    vector<pair<int ,int>>v;
    print(v);
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    print(v);
}