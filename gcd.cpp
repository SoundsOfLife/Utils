#include <iostream>

using namespace std;

long long gcd(long long a,long long b){
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

int main(int argc, char const *argv[]) {
  /* code */
  cout << gcd(10,100) << endl;
  return 0;
}
