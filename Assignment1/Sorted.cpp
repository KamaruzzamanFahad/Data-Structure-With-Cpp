#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        vector<int> arr(m);
        for(int i=0; i<m; i++){
            cin >> arr[i];
        }

        int isSort = 0;
        for(int i=1; i<m; i++){
            if(arr[i-1] > arr[i]){
                isSort = 1;
                break;
            }
        }

        if(isSort){
            cout << "NO" << endl;
        }else{
            cout <<"YES" << endl;
        }
    }
}