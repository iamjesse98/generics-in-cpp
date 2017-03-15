#include<bits/stdc++.h>
using namespace std;

//template <typename indentifier> ret_type fun_name(params)

template <typename T> void display(T, T);
template <class T> T maxi(T x, T y);

int main(){
  cout << maxi(20, 89) << endl;
  cout << maxi(20.789, 82.678) << endl;
  display(20, 30);
  display(50.789, 90.123412);
  display("Jesse", "Me");
  return 0;
}

template <typename T> void display(T x, T y){
  cout << x << " and " << y << endl;
}

template <class T> T maxi(T x, T y){
  return (x >= y) ? x : y;
}
