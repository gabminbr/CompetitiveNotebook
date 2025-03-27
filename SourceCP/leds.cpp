#include <bits/stdc++.h>
using namespace std;

int main(){
  int led[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  int N, leds;
  string num;
  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> num;
    leds = 0;
    for(int j = 0; j < num.length(); j++){
     int temp_num = num[j] - '0';
     leds += led[temp_num];
    }
    cout << leds << " leds\n";
  }
  return 0;
}
