#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v) {
    int n = v.size();
    int minimum = (int)(n/3)+1; //for making floor of it(+1)
    vector<int> ls;
    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[v[i]]++;

        if (mpp[v[i]] == minimum) {
            ls.push_back(v[i]);
        }
        if (ls.size() == 2) {
            break;
        }
    }
	sort(ls.begin(),ls.end());
    return ls;
}
