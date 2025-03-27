#include <bits/stdc++.h>
using namespace std;
#define MAXH 100010

int hills[MAXH];

int main(){
  int N;
  cin >> N;
  
  int menor = 10000;
  for(int i = 0; i < N; i++){
    cin >> hills[i];
    if(hills[i] < menor){
      menor = hills[i];
    }
  }

  int meters = 0;
  for(int i = 0; i < N; i++){
    if(hills[i] > menor){
      meters += hills[i] - menor;
    }
  }

  cout << meters << endl;
}
