#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
   vector<int> A(N);

   for(int i=0; i<N; i++){
    cin >> A[i];
   }

    sort(A.begin(), A.end());

   int isfind =0;
   for(int i=1; i<N; i++){
    if(A[i] == A[i-1]){
        isfind= 1;
        break;
    } 
   }

   if(!isfind){
    cout << "NO";
   }else{
    cout << "YES";
   }
    

}