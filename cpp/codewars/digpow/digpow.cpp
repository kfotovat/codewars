#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class DigPow
{
private:
  vector<int> convert_to_arr(int n);
  // vector<int> my_vector;
public:
  static int digPow(int n, int p);
  static void print_vector(vector<int>);
};

vector<int> convert_to_arr(int n);

int digPow(int n, int p) {
  vector<int> vec = convert_to_arr(n);
  reverse(vec.begin(), vec.end());

  int sum = 0;
  int increment = 0;
  vector<int>::iterator v = vec.begin();
  while (v != vec.end()) {
      int product = pow(*v, p+increment);
      sum += product;
      v++;
      increment++;
  }

  if (sum%n == 0) {
    return sum/n;
  } else {
    return -1;
  }
};

vector<int> convert_to_arr(int n) {
  vector<int> output;
  int digit = 0;
  int current = n;

  while (current >= 1) {
    digit = current%10;
    output.push_back(digit);
    current = current/10;
  }
  return output;
}

void print_vector(vector<int> vec) {
  vector<int>::iterator v = vec.begin();
  while (v != vec.end()) {
      cout << *v << endl;
      v++;
  }
}

int main() {
  // vector<int> vec = convert_to_arr(4321);
  cout << digPow(695, 2) << endl;
  cout << digPow(89, 1) << endl;
  cout << digPow(46288, 3) << endl;
  // print_vector(vec);
  return 0;
}

// AC Code below:
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
//
// using namespace std;
//
// class DigPow
// {
// public:
//   static vector<int> convert_to_arr(int n);
//   static int digPow(int n, int p);
// };
//
// vector<int> DigPow::convert_to_arr(int n) {
//   vector<int> output;
//   int digit = 0;
//   int current = n;
//
//   while (current >= 1) {
//     digit = current%10;
//     output.push_back(digit);
//     current = current/10;
//   }
//   return output;
// }
//
// int DigPow::digPow(int n, int p) {
//   vector<int> vec = convert_to_arr(n);
//   reverse(vec.begin(), vec.end());
//
//   int sum = 0;
//   int increment = 0;
//   vector<int>::iterator v = vec.begin();
//   while (v != vec.end()) {
//       int product = pow(*v, p+increment);
//       sum += product;
//       v++;
//       increment++;
//   }
//
//   if (sum%n == 0) {
//     return sum/n;
//   } else {
//     return -1;
//   }
// };
