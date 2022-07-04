#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m) {
    cout<<m.size()<<endl;
    for(auto &it:m) {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main() {
    // map is implement through black red tree;
    //  map is used to store keys and values pair;
    // keys are stored in sorted ordered;
    //  for insert and access in maps complexity is O(log n) for each insertion and access of key-value pair O(log(n))
    //  for n key values pair is O(nlog(n));
    //  
    map<int,string> m;
    m[1]="adesh";   // takes o(log n) time
    m[4]="nitish";
    m[2]="dhruv";
    m.insert({3,"arinjay"});
    map<int ,string> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++) {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    for(auto it: m) {
        cout<<it.first<<" "<<it.second<<endl;
    }
    print(m);
}