#include<bits/stdc++.h>
using namespace std;

template <typename T1, typename T2> void display(T1 x, T2 y);

int main(){
  display(23, 5.89);
  display("I am Jesse", 3);
  return 0;
}

template <typename T1, typename T2> void display(T1 x, T2 y){
  cout << x << " and " << y << endl;
}
