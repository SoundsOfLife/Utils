#include <iostream>

using namespace std;

template <typename T>
T gcd(T a,T b){
    // exchange a and b
    if(a < b){
      a = a ^ b;
      b = a ^ b;
      // return gcd(b,a);
    }
    while(a % b != 0){
      auto temp = a % b;
      a = b;
      b = temp;
    }
    return b;
}

template <typename T>
T lcm(T a,T b){
  return a * b / gcd<T>(a,b);
}

int main(int argc, char const *argv[]) {
  /* code */
  cout << gcd<int>(10,100) << endl;
  return 0;
}
