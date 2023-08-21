#include<bits/stdtr1c++.h>
using namespace std;
int main()
{
    pair<int,string>p;
   // p=make_pair(1,"a");
   p={2,"billal"};
   //pair<int,string> p1=p;
   pair<int,string> &p1=p;
   p1.first=3;
    cout<<p1.first<<" "<<p1.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={3,4};
    p_array[2]={5,6};
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

}