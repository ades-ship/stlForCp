#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m) {
    cout<<"\n"<<m.size();
    for(auto &it:m) {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main() {
    // map is implement through red black  tree;
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

    // m[5] by default holds value empty string or 0 in case of int .
    map<int ,string> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++) {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    for(auto it: m) {
        cout<<it.first<<" "<<it.second<<endl;
    }

     auto gg=m.find(2);    //   O(log(n))
     cout<<"-------------find---------->"<<endl;
   
     if(gg == m.end())
     {
        cout<<"no values";
     }  else {
          cout<<(*gg).first<<" "<<(*gg).second<<endl;
     }
    cout<<"\n --------------------maps values before erase------------->";
    print(m);
     if(gg!=m.end()) {
        m.erase(gg);  // log(n)
     }
 
    cout<<"\n --------------------maps values after erase------------->";
    m.clear();
    cout<<"\n ----------------after earse--------------->";

    // auto it1=m.find(12);
    // cout<<(*it1++).first<<" "<<(*it1++).second<<endl;
 
    print(m);
 
 cout<<"\n------------------------->>>>>>>>";
    map<string,string> mp;
    mp.insert({"adesh","geu"});    // time complexity when key is string   -->   s.size() * O(log(n))   s is string 
    for(auto &i:mp) {
        cout<<"\n"<<i.first<<" "<<i.second<<endl;
    }

}