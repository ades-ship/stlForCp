#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vrr(5, 2);
    for (int value : vrr)
    {
        cout << value << " ";
    }
    for (auto it : vrr)
    {
        cout << (it) << " ";
    }

    vector<pair<int,int> >vrr1={{1,2},{3,4}};
    cout<<"\n";
    for(auto it:vrr1) {
        // cout<<(it->first)<<" "<<(it->second);
        cout<<it.first<<" "<<it.second<<endl;

    }

}