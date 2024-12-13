#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;

    vector<int> a(n);
    vector<long long> presum(n,0);
    

    for(int i=0; i<n; i++){
       cin >> a[i];
    }

    presum[0] =a[0];
    for(int i=1; i<n; i++){
        presum[i] = presum[i-1]+a[i];
    }

    reverse(presum.begin(), presum.end());

    for(int i=0; i<n-1; i++){
        cout << presum[i] << " ";
    }
    cout << presum[n-1];

}