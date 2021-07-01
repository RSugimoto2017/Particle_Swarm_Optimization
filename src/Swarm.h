//#include "Particle.h"
#include "Dataset.h"
class Particle;

class Swarm
{
public:
  Swarm(char *filename);
  ~Swarm();
  void move();        //粒子を移動する
  void printResult(); //結果を表示する

  Dataset *dataset;    //データセット
  Particle **particle; //粒子群のメンバ
  double *gBestPos;    //グローバルベストの位置
  double gBestValue;   //グローバルベストの評価値
};
