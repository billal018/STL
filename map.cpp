#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto &p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}
int main()
{
    map<int,string>m;
    m[1]="abc";   //O(log(n))
    m[2]="sjsk";
    m[3]="kshf";
    m[4]="kdjvd";
    print(m);
    auto it=m.find(2); //o(log(n))
    if(it==m.end())
    {
        cout<<"no value"<<endl;
    }else{
    cout<<"found="<<(*it).first<<" "<<(*it).second<<endl;
    }
     m.erase(it);//o(log(n))
    print(m);
     m.clear();
     print(m);

    
}