#include <bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int, int>> vrr)
{
    cout << "size of vector :" << vrr.size() << endl;
    for (int i = 0; i < vrr.size(); i++)
    {
        cout << vrr[i].first << " " << vrr[i].second << endl;
    }
}

void printVector(vector<int> &vrr)
{
    cout << "size of vector :" << vrr.size() << endl;
    for (int i = 0; i < vrr.size(); i++)
    {
        cout << vrr[i] << " ";
    }
    cout << "\n";
}

void printVector(vector<vector<int> > &vrr)
{
    cout << "size of vector :" << vrr.size() << endl;
    for (int i = 0; i < vrr.size(); i++)
    {
        cout << vrr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    // vector<pair<int, int>> vrr = {{1, 2}, {3, 4}, {5, 6}};
    // vector<pair<int, int>> vrr;
    // printVec(vrr);

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x, y ; cin>>x>>y;
    //     // vrr.push_back({x,y});
    //     //  or
    //     vrr.push_back(make_pair(1,2));
    // }
    // cout<<"--------------------------------\n";
    // printVec(vrr);

    //  array of vector
    // int N;
    // cin >> N;
    // vector<int> vrr[N];
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cin >> n;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int num;
    //         cin >> num;
    //         vrr[i].push_back(num);
    //     }
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     printVector(vrr[i]);
    // }

    //  vector of vector
    int N;
    cin >> N;
    vector<vector<int>> vrr;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        vrr.push_back(vector<int> ());
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            temp.push_back(num);
        }
        vrr.push_back(temp);
    }

    printVecctor(vrr[0]);    

    return 0;
}