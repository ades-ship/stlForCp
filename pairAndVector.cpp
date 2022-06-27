#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int ,string> p;
    p=make_pair(1,"adesh");
    // or
    p={1,"nitish"};
    cout<<p.first<<" "<<p.second<<endl;
    //   or
    cout<<p.first<<" "<<p.second<<endl;
    pair<int ,string> p1;
    p1=p;
    cout<<p1.first<<" "<<p1.second<<endl;
    
    return 0;
}