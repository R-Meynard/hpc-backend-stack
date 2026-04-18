#include <iostream>
#include <cstdlib>

/*
Add int_max_of_four(int a, int b, int c, int d) here.
*/

int max_of_four(int a, int b, int c, int d){
    int max = -1;
    if((a >= b) && (a >= c) && (a >= d)) max = a;
    else if ((b >= a) && (b >= c) && (b >= d)) max = b;
    else if ((c >= a) && (c >= b) && (c >= d)) max = c;
    else if ((d >= a) && (d >= b) && (d >= c)) max = d;

    return max;
}

// Other solution
int max_of_four_version2(int a, int b, int c, int d){
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    return max;
}

// Other solution
int max_of_four_version3(int a, int b, int c, int d){
  return std::max( std::max(a,b), std::max(c,d));
}

int main(){

    srand((unsigned int)time(0));
    int a, b, c, d;
    a = rand();
    b = rand();
    c = rand();
    d = rand();

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "c: " << c << "\n";
    std::cout << "d: " << d << "\n";

    int result = max_of_four(a, b, c, d);
    std::cout << "result: "<< result << "\n";

    int result2 = max_of_four_version2(a, b, c, d);
    std::cout << "result2: "<< result2 << "\n";

    int result3 = max_of_four_version3(a, b, c, d);
    std::cout << "result3: "<< result3 << "\n";
    
    return 0;
}