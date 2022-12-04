#include <iostream>

using namespace std;
double my_pow(double num , unsigned int step){
    for(int i = 0; i<step; i++)
        num*=num;
}

int main()
{
   unsigned int step = 2;
   double num = 2.33 ;
   my_pow(num, step);
    return 0;
}
