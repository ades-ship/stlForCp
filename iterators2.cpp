#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> vrr={1,2,3,45};
   
    for(int i:vrr) {
        cout<<i<<" ";
    }

     for(int &i:vrr) {
        i++;
        cout<<i<<" ";
    }

    vector<pair<int,int> > v_p={{1,2},{3,4},{5,6}};
    for(pair<int,int> &values:v_p) {
        cout<<values.first<<" "<<values.second<<endl;
    }
 cout<<endl;
    vector<int> b={1,2,3,4};
    for(auto it=b.begin(); it!=b.end(); it++) {
        cout<<(*it)<<" ";
    }

cout<<endl;
    int  arr[5]={1,2,3,4,5};
     for(auto it:arr)
    cout<<it<<" ";
    cout<<endl;
     for(auto &values:arr)
          values+=1;
    for(auto it:arr)
    cout<<it<<" ";
}