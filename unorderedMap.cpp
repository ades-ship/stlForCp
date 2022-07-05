#include<bits/stdc++.h>
using namespace std;

int main() {
    // inbuilt implementation   --->   hashing
    // time complexity
    // valid key datatype
    // stores keys-values pair in random fashion

    unordered_map<int,string> um;
    um[1]="adesh";   //  O(1);
    um[2]="gaurav";
    um.insert(make_pair(5,"arinjay"));

    for(auto &it:um) {
        cout<<"\n"<<it.first<<" "<<it.second;
    }


    auto it1=um.find(1);    // O(1);
    if(it1!=um.end()) {
        // cout<<"\n"<<it1.first<<" "<<it1.second;
        cout<<"\nfind";
        um.erase(it1);
    }
    else {
        cout<<"\n not find";

    }
    cout<<"\n ---------------after erase--------------";

    
    for(auto &it2 : um) {
        cout<<"\n"<<it2.first<<" "<<it2.second;
    }

}