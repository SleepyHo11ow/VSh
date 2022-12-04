#include <iostream>
#include <math.h>
using namespace std;
double my_pow(double num , unsigned int step){
num = fabs(num);
    {
           if (step == 0)

           {
                   return 1;

           }
           if (step % 2 == 0)
           {
                   return my_pow(num * num, step / 2);
           }
           return num * my_pow(num, step - 1);

    }
}

int main()
{
   unsigned int step = 2;
   double num = 2.33 ;
  double r = my_pow(num, step);
    return 0;
}
