#include <bits/stdc++.h>
using namespace std;
// void printVec(vector<pair<int, int> > vrr)
// {
//     cout << "size of vector :" << vrr.size() << endl;
//     for (int i = 0; i < vrr.size(); i++)
//     {
//         cout << vrr[i].first << " " << vrr[i].second << endl;
//     }
// }

// void printVector(vector<int> &vrr)
// {
//     cout << "size of vector :" << vrr.size() << endl;
//     for (int i = 0; i < vrr.size(); i++)
//     {
//         cout << vrr[i] << " ";
//     }
//     cout << "\n";
// }

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
    // cout<<vrr[0][1];

    //  vector of vector
//     int N;
//     cin >> N;
//     vector<vector<int> > vrr;   // vector of vector
//     for (int i = 0; i < N; i++)
//     {
//         int n;
//         cin >> n;
//         vector<int> temp;
//         vrr.push_back(vector<int> ());  
//         for (int j = 0; j < n; j++)
//         {
//             int num;
//             cin >> num;
//             temp.push_back(num);
//         }
//         vrr.push_back(temp);
//     }
//  for (int i = 0; i < vrr.size(); i++)
//  {
//       printVector(vrr[i]);
//  }
//     cout<<vrr[0][1];
//     printVector(vrr[0]);   


    int N;
     cin>>N;
     vector<vector<int> > vp;
     for (int i = 0; i < N; i++)
     {
        int n;   cin>>n;
        vp.push_back(vector<int> ());
        for (int j = 0; j < n; j++)
        {
            int num;  cin>>num;
            vp[j].push_back(num);
        }
        
     }
     vp[0].push_back(10);
//   for (int i = 0; i < vp.size(); i++)
//   {
//        printVector(vp[i]);
//   }
  
    
     
      

    return 0;
}