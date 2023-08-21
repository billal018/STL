#include<bits/stdc++.h>
using namespace std;

void print(vector<int>& v)
{
    cout << "size=" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> tmp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    }

    for (int i = 0; i < v.size(); i++)
    {
        print(v[i]);
    }
    
   // cout << v[0][0] << endl;
}

// #include<bits/stdc++.h>
// using namespace std;

// void print(vector<int>& v) // Change the parameter type to vector<int>&
// {
//     cout << "size=" << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int N;
//     cin >> N;
//     vector<vector<int>> v(N); // Change vector<int> to vector<vector<int>>

//     for (int i = 0; i < N; i++)
//     {
//         int n;
//         cin >> n;
//         for (int j = 0; j < n; j++)
//         {
//             int x;
//             cin >> x;
//             v[i].push_back(x);
//         }
//     }

//     for (int i = 0; i < N; i++)
//     {
//         print(v[i]);
//     }
    
//     cout << v[0][0] << endl; // Added an endl here
// }
