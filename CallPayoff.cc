#include "Payoff.h"
#include "CallPayoff.h"
#include<cmath>

using namespace std;

CallPayoff :: CallPayoff(double S){
  Strike_ = S;
}

double CallPayoff::computepayoff(double spot) const{
  if (spot > Strike_) return spot-Strike_;
  else return 0.0;
  
}
