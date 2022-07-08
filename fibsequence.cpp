#include <iostream>
unsigned long long int fib(int n) {
    if (n == 0 || n == 1) return n;
    if( n > 1 ) { return fib(n - 1) + fib(n - 2); }
}
int main(){ std::cout << fib(40); }


//absolute highest you can go is 93 before the unsigned long long int runs out of its 18 quintillion numbers
// 0 - 0th spot
// 1 - 1st spot
// 1
// 2
// 3 
// 5 - 5th spot
// 8
// 13
// 21
// 34 
// 55 - 10th spot