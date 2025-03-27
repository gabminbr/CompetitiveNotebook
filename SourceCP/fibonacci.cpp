#include <bits/stdc++.h>
using namespace std;
int fib(int n, int &chamadas);

int main(){
  int N, num, result, chamadas;
  cin >> N;

  for(int i = 0; i < N; i++){
    chamadas = 0;
    cin >> num;
    result = fib(num, chamadas);
    cout << "fib(" << num << ") = " << chamadas - 1 << " result = " << result << "\n";
  }
}

int fib(int n, int &chamadas){
  chamadas += 1;
  if(n <= 1){
    return n;
  } else {
    return fib(n - 1, chamadas) + fib(n - 2, chamadas);
  }
}
