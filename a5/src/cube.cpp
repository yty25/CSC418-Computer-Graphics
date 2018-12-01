#include "cube.h"

void cube(
  Eigen::MatrixXd & V,
  Eigen::MatrixXi & F,
  Eigen::MatrixXd & UV,
  Eigen::MatrixXi & UF,
  Eigen::MatrixXd & NV,
  Eigen::MatrixXi & NF)
{
    V.resize(8,3);
    F.resize(6,4);
    UV.resize(14,2);
    UF.resize(6,4);
    NV.resize(6,3);
    NF.resize(6,4);
    
    V << 0, 0, 0,
         0, 0, 1,
         0, 1, 0,
         0, 1, 1,
         1, 0, 0,
         1, 0, 1,
         1, 1, 0,
         1, 1, 1;
    
    F << 1, 5, 4, 0,
         1, 0, 2 ,3,
         0, 4, 6, 2,
         4, 5, 7, 6,
         2, 6, 7, 3,
         3, 7, 5, 1;
    
    UV << 0, 0.5,
          0, 0.25,
          0.25, 0.25,
          0.25, 0.5,
          0.25, 0.75,
          0.5, 0.5,
          0.5,  0.75,
          0.5, 0.25,
          0.25, 0,
          0.5, 0,
          0.75, 0.25,
          0.75, 0.5,
          1, 0.25,
          1, 0.5;
    
    UF << 0, 1, 2, 3,
          4, 3, 5, 6,
          3, 2, 7, 5,
          2, 8, 9, 7,
          5, 7, 10, 11,
          11, 10, 12, 13;
    
    NV << 0, 0, 1,
          0, 0, -1,
          0, 1, 0,
          0, -1, 0,
          1, 0, 0,
          -1, 0, 0;
    
    NF << 3, 3, 3, 3,
          5, 5, 5, 5,
          1, 1, 1, 1,
          4, 4, 4, 4,
          2, 2, 2, 2,
          0, 0, 0, 0;
}