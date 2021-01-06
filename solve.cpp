#include <iostream>

#include <math.h>

#define TOLERANCE 0.0001

using namespace std;

void integrate() {

double lower = 2;
double upper = 7;
double x, function;
double result = 0;

for(x=lower; x<=upper; x+=TOLERANCE){
function = exp2(x);
result+=(function*TOLERANCE);
}

cout << endl << "Result: " << result

;return; }

int main () {

cout << "Computing area beneath the curve..";

integrate();

return 0;}