#include <stdio.h>
#include "myMath.h"
int main(){
double x;
printf("Please insert a real number :\n");
scanf("%lf",&x);
double funcone = sub(add(Exponent(x),Power(x,3.0)),2);
double functwo = add(mul(x,3),mul(Power(x,2),2));
double functhree = sub(div(mul(Power(x,3),4),5),mul(x,2));
printf("The value of f(x)=e^x + x^3 -2 at %.4f is - %.4f\n",x,funcone);
printf("The value of f(x)=3x + 2x^2 at %.4f is - %.4f\n",x,functwo);
printf("The value of f(x)=(4x^3)/5-2x at %.4f is - %.4f\n",x,functhree);
return 0;
}


