#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin >> n >>e;

    int mat_adj [n][n];
    memset(mat_adj, 0, sizeof(mat_adj));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          if(i==j){
            mat_adj[i][j]=1;
          }
        }
    }



    while(e--){
        int a,b;
        cin >> a >> b;

        mat_adj[a][b] =1;
        mat_adj[b][a] =1;
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat_adj[i][j] << " ";
        }
        cout << endl;
    }
}