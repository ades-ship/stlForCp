//  given N strings and Q queries
// for each queries we have to print the frequency of that string;

#include<bits/stdc++.h>
using namespace std;
int main() {
//     unordered_map<string , int> m;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin>>s;
//         m[s]++;
//     }

//    int q;
//    cin>>q;

//    cout<<"\n ---------------frequency of each input query is -------------------";
//    while(q--) {
//       string s;
//       cin>>s;
//       cout<<m[s]<<endl;

//    }

//    map<int,vector<string> > m;
//    m[1].push_back("adesh");
// //    m[1]=m.push_back("adesh");
//    for (auto &it:m) {
//     cout<<it.first;
//     //cout<<it.first<<" "<<it.second;

// map <string, vector<string> > dict;

// dict["USA"].push_back("NYC");
// dict["USA"].push_back("LA");
// dict["USA"].push_back("Chicago");
// dict["USA"].push_back("Dallas");

// dict["India"].push_back("Delhi");
// dict["India"].push_back("Bombay");

// dict["Australia"].push_back("Melbourne");
// dict["Australia"].push_back("Sydney");
// dict["Australia"].push_back("Adelaide");

// for(auto &it: dict) {
//     // cout<<it.first<<" "<<it.second;
//     cout<<dict["India"];
// }


map <string, vector<string> > dict;

string usa[] = { "NYC" , "LA" , "Chicago" , "Dallas" };
dict["USA"] = std::vector<string>(usa,usa+4);

   }
//    cout<<dict["USA"];
   for(map &value: dict) {
    cout<<value;
   }

   for(auto &val: dict) {
    cout<<val;
   }

