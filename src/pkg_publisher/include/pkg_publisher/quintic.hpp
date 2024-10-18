#include <math.h> 

double quintic(double t, double qi, double qf, double tf)
{
  if (t <= 0.0)
  {
    return qi;
  }
  if (t >= tf)
  {
    return qf;
  }

  double tau = t / tf;
  double qhat = 6.0 * pow(tau, 5) - 15.0 * pow(tau, 4) + 10.0 * pow(tau, 3);

  return qi + (qf - qi) * qhat;
}