#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void roots(double a, double b, double c){
  double r1, r2, disc;
  disc = b*b - 4*a*c;
  
  if (disc == 0){        // 2 same real roots
    r1 = (-b + sqrt(disc))/(2*a);
    cout << "{" << r1 << ", " << r1 << "}" << endl;
  }else if (disc > 0){   // 2 different real roots
    r1 = (-b + sqrt(disc))/(2*a);
    r2 = (-b - sqrt(disc))/(2*a);
    cout << "{" << r1 << ", " << r2 << "}" << endl;
  }else{                 // 2 complex roots
    cout << "{ }" << endl;
  }
  
}

int main(int argc, char* argv[]){
  if (argc != 4){
    cerr << "inv arguments for " << argv[0] << " a b c\n";
    return 1;
  }

  double a = stod(argv[1]);
  double b = stod(argv[2]);
  double c = stod(argv[3]);

  roots(a, b, c);
  
  return 0;
}