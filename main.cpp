/*
Riemann sum calculator written by Conor Vanek
*/

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main () {

string function;
double lower, upper;


cout << "enter function (no spaces): ";
cin >> function;
cout << "lower bound:";
cin >> lower;
cout << "upper bound:";
cin >> upper;

ofstream output;
output.open ("solve.cpp");
output << "#include <iostream>\n\n";
output << "#include <math.h>\n\n";
output << "#define TOLERANCE 0.0001\n\n";
output << "using namespace std;\n\n";

output << "void integrate() {\n\n";
output << "double lower = " << lower << ";\n";
output << "double upper = " << upper << ";\n";
output << "double x, function;\n";
output << "double result = 0;\n\n";
output << "for(x=lower; x<=upper; x+=TOLERANCE){\n";
output << "function = " << function << ";\n";
output << "result+=(function*TOLERANCE);\n";
output << "}\n\n";
output << "cout << endl << \"Result: \" << result\n\n;";
output << "return; }\n\n";

output << "int main () {\n\n";
output << "cout << \"Computing area beneath the curve..\";\n\n";
output << "integrate();\n\n";
output << "return 0;";
output << "}";
output.close();

system("g++ solve.cpp -o solve");
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
system("solve.exe");
#else
system("./solve");
#endif

cout << "\n\nDone.\n\n";

return 0;
}
