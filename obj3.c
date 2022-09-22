/*                         obj3.c */
#define Tol 1.e-30;

#include <math.h>

double    objfunc(double *x, int nvar)
{
register int i,j;
double res, result,penalty;

/* maximize
 f(x1,x2) = 20 - x1*x2^2
ie x1^2 + x2^2 - 2 = 0
*/


result = 20. - x[1]*pow(x[2],2);

penalty =1000*pow((pow(x[1],2)+pow(x[2],2)-2),2);

result -= penalty;

if(fabs(result) <= 0.) result = Tol;

return(result);
}

