#include <bits/stdc++.h>
using namespace std;

int bottles(int N){
  if(N < 2){
    return 0;
  } else if(N == 2){
    return 1;
  }
  return N / 3 + bottles(N / 3 + N % 3);
}

int main(){
  int N;
  cin >> N;

  while(N > 0){
    cout << bottles(N) << "\n";
    cin >> N;
  }
}
