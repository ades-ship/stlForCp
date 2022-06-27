#include<bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> :: iterator it;
    vector<int> vrr;
    int n;  cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;  cin>>x;
        vrr.push_back(x);
    }
    
    // for(it=vrr.begin(); it!=vrr.end(); it++) {
    //     cout<<*it<<" ";
    vector<pair<int,int> > v_p={{1,2},{3,4}};
     vector<pair<int,int> > :: iterator it;
     for (it  = v_p.begin();  it!=vrr.end(); it++)
     {
       cout<<(*it).first<<" "<<(*it).second<<endl;
     }
     
     for (it=v_p.begin(); it!=v_p.end(); it++)
     {
       cout<<(it->first)<<" "<<(it->second)<<endl;
     }
     
    
}