#include <iostream>

using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window);
};

int Bouncingball::bouncingBall(double h, double bounce, double window) {
  if (bounce >= 1 || bounce < 0 || window < 0) {
    return -1;
  }
  if (h > window) {
    int bounces = 1;
    int counter = 1;
    while (h > window) {
      cout << "<<prior to calculation>>" << endl;
      cout << "counter: " << counter << endl;
      cout << "h: " << h << endl;
      cout << "bounces: " << bounces << endl;
      h *= bounce;
      if (h > window) {
        bounces += 2;
        counter++;
      }
    }
    return bounces;
    // return bounces;
  } else {
    return -1;
  }
}

int main() {
  // cout << Bouncingball::bouncingBall(3, 0.66, 1.5) << endl;
  // cout << Bouncingball::bouncingBall(30, 0.66, 1.5) << endl;
  cout << Bouncingball::bouncingBall(5000, 0.99, -1) << endl;
  cout << Bouncingball::bouncingBall(10000, -0.99, 1) << endl;
  cout << Bouncingball::bouncingBall(-50000, 0.99, 1) << endl;
}
