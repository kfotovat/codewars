#include <iostream>

class Arge
{
  public:
  static int nbYear(int p0, double percent, int aug, int p);
};

int Arge::nbYear(int p0, double percent, int aug, int p) {
  int nb_year = 0;
  while (p0 < p) {
    int n = p0 * (1 +(percent/100)) + aug;
    p0 = n;
    nb_year++;
  }
  return nb_year;
}

int main() {
  std::cout << Arge::nbYear(1500, 5, 100, 5000) << std::endl;
}
