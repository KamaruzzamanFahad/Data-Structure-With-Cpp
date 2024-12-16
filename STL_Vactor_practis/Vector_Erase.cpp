#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> arr(n);

  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int siz, start, end;
  cin >> siz >> start >> end;

  arr.erase(arr.begin()+ siz -1);

  arr.erase(arr.begin()+ start -1, arr.begin() + end -1);

  cout << arr.size() << endl;
  for(int i=0; i<arr.size(); i++){
   cout << arr[i] << " ";
  }
  
  return 0;
}
