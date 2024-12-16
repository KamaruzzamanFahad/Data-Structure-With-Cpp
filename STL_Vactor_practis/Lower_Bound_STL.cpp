#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin >> v[i];
  }
  int m;
  cin >> m;
  for(int i=0; i<m; i++){
    int num;
    cin >> num;

    find(v.begin(), v.end(), num);

  }
  
  return 0;
}
