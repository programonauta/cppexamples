// 
// Examples of enum
//

#include <iostream>
using namespace std;

enum class WierdLogic {
  NO,
  MAYBE=5,
  YES=10
};

int main() {
  WierdLogic w = WierdLogic::MAYBE;
  if (w == WierdLogic::MAYBE)
    cout << "Let's see a Maybe" << endl;
  else
    cout << "It's not a Maybe" << endl;
}
