#ifndef OPP_NSU_LABS_MVINIT_2ND_H
#define OPP_NSU_LABS_MVINIT_2ND_H

#include <cstdlib>
#include <cmath>

void initVectorU(int N, double* vectorU);
void initVectorX(int N, double* vectorX);
void initMatrixProcRows(int M, int N, double* matrixProcRows, int procRank, int lastRowAdding);

#endif //OPP_NSU_LABS_MVINIT_2ND_H