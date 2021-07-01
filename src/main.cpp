#include "Swarm.h"
#include "Particle.h"

int main()
{
  int t;
  Swarm *swarm;

  srand((unsigned int)time(NULL));

  char fname[] = "sampledata.csv";
  swarm = new Swarm(fname);

  for (t = 1; t <= TIME_MAX; t++)
  {
    swarm->move();
    printf("時刻%d：最良評価値%f\n", t, swarm->gBestValue);
  }
  swarm->printResult();
  delete swarm;

  return 0;
}
