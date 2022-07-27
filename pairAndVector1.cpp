#include <bits/stdc++.h>
using namespace std;

void printVector(vector<string> v)
{
    cout << "size is :" << v.size() << endl;  // tc of size() is O(1)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}
int main()
{
    // pair<int ,string> p;
    // p=make_pair(1,"adesh");
    // // or
    // p={1,"nitish"};
    // cout<<p.first<<" "<<p.second<<endl;
    // //   or
    // cout<<p.first<<" "<<p.second<<endl;
    // pair<int ,string> &p1=p;
    // p1.first=10;
    // // p1=p;
    // cout<<p1.first<<" "<<p1.second<<endl;
    // cout<<p.first<<" "<<p.second<<endl;

    // pair<int , int> p_array[3];
    // p_array[0]={1,2};
    // p_array[1]={3,4};
    // p_array[2]={5,6};
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }

    // or

    // pair <int ,int> q;
    // cin>>q.first;
    // cin>>q.second;
    // cout<<q.first<<" "<<q.second<<endl;

    //  vectors

    // vector<int> v;
    // int n;  cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int num; cin>>num;
        // v.push_back(num);   //  O(1);
    // }

    // printVector(v);
    // vector<int> vrr(5,3);
    // vrr.push_back(4);
    // vrr.pop_back();   // O(1)
    // vector<int> &vrr1=vrr;   // o(n);
    // vrr1.push_back(10);
    // printVector(vrr);
    // printVector(vrr1);

    vector<string> str;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        str.push_back(st);
    }
    printVector(str);
    cout<<"adesh sengar";

    return 0;
}


// on  online platform the size of vector is 10^5 to 10^7;