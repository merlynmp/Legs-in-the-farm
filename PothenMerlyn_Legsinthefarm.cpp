// Merlyn Pothen
#include <iostream>
using namespace std;
int main() {

  // animals
  string a, b, c;

  // amount of species and legs
  int d, e, f, g, h, i;

  // asking user for input
  cout << "What is the first animal on your farm?: ";
  cin >> a;
  cout << "How many of this species do you have?: ";
  cin >> d;
  cout << "How many legs does this animal have?: ";
  cin >> e;
  cout << "What is the second animal on your farm?: ";
  cin >> b;
  cout << "How many of this species do you have?: ";
  cin >> f;
  cout << "How many legs does this animal have?: ";
  cin >> g;
  cout << "What is the third animal on your farm?: ";
  cin >> c;
  cout << "How many of this species do you have?: ";
  cin >> h;
  cout << "How many legs does this animal have?: ";
  cin >> i;

  // results
  cout << "The number of " << a << " legs on the farm is " << d * e << "." << endl;
  cout << "The number of " << b << " legs on the farm is " << f * g << "." << endl;
  cout << "The number of " << c << " legs on the farm is " << h * i << "." << endl;
  cout << "The total number of legs on the farm is " << (d * e) + (f * g) + (h * i) << "." << endl;
  return 0;
}