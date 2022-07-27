// #include<bits/stdc++.h>
// using namespace std;
// void print(set<string> &st)
// {
//   ranged based loop
//     // for(string &value: st) {
//     //     cout<<value<<endl;
//     // }

//     // for(auto it:st)
//     //  cout<<(*it)<<endl;

//      for(auto it=st.begin(); it!=st.end(); it++) {
//         cout<<(*it)<<endl;
//      }
// }

//  set stores the unique keys only like maps did;
//    implementation -----> red black trees;
// we can only take primitive datatype as well complex container datatype in case of sets like vector,pair,sets etc;

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
// time complexity in accessing and find the elements is O(1);
// we can only take primitive datatype in case of unordered set not complex container datatype like vector,pair,sets etc;
// implementation ----------->  hash table
// hash table is not defined got complex coatiners in case of unorered set. we can manuallsy define the hash table but it is quit costly;

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

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //  it allows multiple keys;
    // implementation---------> red black tree 
    // multimap also uses red black tree for its implementation;
    // we can use multisets in place of priority queue in graphs questions; 
    // mostly all operation like access,erase,search are in log(n) complexity
    multiset<string> st;
    st.insert("adesh"); // O(logn)
    st.insert("nitish");
    st.insert("gaurav");
    st.insert("nitish");

    auto it = st.find("adesh"); // O(logn)
    if (it != st.end())
    {
        cout << "find";
    }

    cout << "\n----------------------------->>>>>>>>>>>>>>>>>>>>>";
    if (it != st.end())
    {
        st.erase(it);  // it can deleted on the iterator values not all the seame values 
    }

    st.erase("gaurav");   //  it will delete the values of gaurav 
}