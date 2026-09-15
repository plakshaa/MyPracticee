#include <bits/stdc++.h>
using namespace std;
int larg(vector <int> &x) {
    sort(x.begin(), x.end());
    return x[size(x)-1];
}
int larg2(vector <int> &a) {
    int maxi = INT_MIN;
    for (auto i: a) {
        if ( maxi < i) {
            maxi = i;
        }
    }
    return maxi;
}
int main () {
    vector<int> v = {-2,1,3,4,-3,4,2,6,5,3,7,5,2,1};
    cout<<larg2(v)<<endl;
}