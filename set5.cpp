// #include<bits/stdc++.h>
// using namespace std;
// void print(set<string> &st) 
// {
//     // for(string &value: st) {
//     //     cout<<value<<endl;
//     // }
//     // for(auto it:st)
//     //  cout<<(*it)<<endl;

//      for(auto it=st.begin(); it!=st.end(); it++) {
//         cout<<(*it)<<endl;
//      }
// }
// int main() {
//     set<string> st;
//     st.insert("adesh");   // O(logn)
//     st.insert("nitish");
//     st.insert("gaurav");
//     st.insert("nitish");
//     auto it=st.find("adesh");   // O(logn)
//     if(it!=st.end()) {
//         cout<<"find";
//     }
      
//       cout<<"\n----------------------------->>>>>>>>>>>>>>>>>>>>>";
//      if(it!=st.end()) {
//         st.erase(it);
//     }
    
//     print(st);

// }



// que

// #include<bits/stdc++.h>
// using namespace std;
// void print(set<string> &st) 
// {   cout<<"\n-------------------------unique keys in set---------";
//     // for(string &value: st) {
//     //     cout<<value<<endl;
//     // }
//     // for(auto it:st)
//     //  cout<<(*it)<<endl;

//      for(auto it=st.begin(); it!=st.end(); it++) {
//         cout<<(*it)<<endl;
//      }
// }
// int main() {
//    set<string> st;
//    int n;
//    cin>>n;
//    for (int i = 0; i < n; i++)
//    {
//          string name;
//           cin>>name;
//           st.insert(name);
//    }
//    for(auto it : st) {
//     cout<<it<<endl;
//    }
//    print(st);
   

// }



// que on unordered_map


// #include<bits/stdc++.h>
// using namespace std;
// void print(set<string> &st) 
// {   cout<<"\n-------------------------unique keys in set---------";
//     // for(string &value: st) {
//     //     cout<<value<<endl;
//     // }
//     // for(auto it:st)
//     //  cout<<(*it)<<endl;

//      for(auto it=st.begin(); it!=st.end(); it++) {
//         cout<<(*it)<<endl;
//      }
// }
// int main() {
//    unordered_set<string> st;
//    int n;
//    cin>>n;
//    for (int i = 0; i < n; i++)
//    {
//          string name;
//           cin>>name;
//           st.insert(name);    // o(1);
//    }
   
//    cout<<"\n --------------------check whether string is present in set or not-----------";
//         int q;
//         cin>>q;
//        while(q--) {
//             string chk;
//             cin>>chk;
//             if(st.find(chk)!=st.end()) {     //O(1) in case of find , insert in unordered_map
//                 cout<<"yes"<<endl;
//             }
//             else 
//               cout<<"no"<<endl;
            
        
//    }
   
// //    for(auto it : st) {
// //     cout<<it<<endl;
// //    }
// //    print(st);
   

// }



#include<bits/stdc++.h>
using namespace std;

int main() {
    //  it allows multiple keys;
    multiset<string> st;
    st.insert("adesh");   // O(logn)
    st.insert("nitish");
    st.insert("gaurav");
    st.insert("nitish");


    auto it=st.find("adesh");   // O(logn)
    if(it!=st.end()) {
        cout<<"find";
    }
      
      cout<<"\n----------------------------->>>>>>>>>>>>>>>>>>>>>";
     if(it!=st.end()) {
        st.erase(it);
    }
    
   

}