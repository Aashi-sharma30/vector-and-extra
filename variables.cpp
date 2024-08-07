//enter two num a nd b print the remainder of two numbers without modulo opedrator
#include<iostream>
using namespace std;
int main(){
    int a=20;//divident
    int b=7;//divisor
   // divident=divisor*quotient+remainder
   
   int q=a/b;
   int r=a-(b*q);
   cout<<r;


}
