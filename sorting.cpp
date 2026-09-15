#include <bits/stdc++.h>
using namespace std;
int larg(vector <int> &x) {
    sort(x.begin(), x.end());
    return x[size(x)-1];
}
int main () {
    vector<int> v = {-2,1,3,4,-3,4,2};
    cout<<larg(v)<<endl;
}