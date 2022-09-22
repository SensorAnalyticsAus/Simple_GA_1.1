/* obj2.c */
#include <math.h>

double    objfunc(double *x, int nvar)
{
register int i,j;
double res, result,penalty;

/* maximize
 f(x1,x2) = 20 - x1*x2^2
ie x1^2 + x2^2 - 2 = 0
*/

result = 20 - x[1]*pow(x[2],2.);

penalty = pow(x[1],2.)+pow(x[2],2.)-2;

if(penalty > 0.) result = 1.e-30;

return(result);
}

