//  given N strings ,print  strings in lexiographical order with  their frequency;

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     map<string , int> m;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin>>s;
//         m[s]++;
//     }
    
//     cout<<"\n ------------------frequency of all strings  -----------";
//     for(auto &it:m) {
//         cout<<(it).first<<" "<<(it).second<<endl;
//     }
// }









#include<bits/stdc++.h>
using namespace std;

void printFreq(map<string, int> &m) 
{
    for(auto it:m) {
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main() {
    map<string,int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string st;  cin>>st;
        m[st]=m[st]+1;
    }
    printFreq(m);
    
    return 0; 
}