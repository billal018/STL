#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s)
{
    for(string value:s)
    {
        cout<<value<<endl;
    }
}
int main()
{
    set<string>s;
    s.insert("a");
    s.insert("b");
    s.insert("c");
    s.insert("a");
    print(s);
    //find specific value 
    auto it=s.find("a");
    if(it!=s.end())
    {
        cout<<(*it)<<endl;
    }
    //erase function
    //s.erase("a");
    s.erase(it);
    print(s);

}