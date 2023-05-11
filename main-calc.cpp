#include <iostream>
using namespace std;

int main() {

  // total price of flight in $$
  float price_val;
  float price_fees;

  cout << "ticket price ($): ";
  cin >> price_val >> endl;

  cout << "extra fees ($): ";
  cin >>  price_fees >> endl;

  
  // total price of flight in pts

  float pts_val;
  float pts_extra_cost; 
  float pts_fees;

  cout << "ticket price (pts): ";
  cin >> pts_val >> endl;
  
  cout << "extra cost ($): ";
  cin >> pts_extra_cost;

  cout << "extra fees ($): ";
  cin >> pts_fees;

  // calculation

  cpp = (price_val - pts_extra_cost) / pts_val;
  cout << "cpp: " << cpp << endl;
}

