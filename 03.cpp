#include<bits/stdc++.h>
using namespace std;

template <typename T> void display(T x, int y);

int main(){
  display(23, 5);
  display("I am Jesse", 3);
  return 0;
}

template <typename T> void display(T x, int y){
  for(int i = 0; i < y; ++i) cout << x << endl;
}
