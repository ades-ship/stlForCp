//  given N strings and Q queries
// for each queries we have to print the frequency of that string;

#include<bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string , int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }

   int q;
   cin>>q;

   cout<<"\n ---------------frequency of each input query is -------------------";
   while(q--) {
      string s;
      cin>>s;
      cout<<m[s]<<endl;

   }

    
}