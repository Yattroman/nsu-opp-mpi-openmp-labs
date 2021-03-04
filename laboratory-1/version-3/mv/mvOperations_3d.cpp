#include <cstring>
#include "mvOperations_3rd.h"

void printMatrix(double* matrix, int N){
    for(size_t i = 0; i < N; ++i){
        for(size_t j = 0; j < N; ++j){
            printf("%f ", matrix[j + i*N]);
        }
        printf("\n");
    }
}

void printVector(double* vector, int N){
    for(size_t i = 0; i < N; ++i){
        printf("%f ", vector[i]);
    }
    printf("\n");
}

double* subVectorAndVector(int N, double* vectorL, double* vectorR){
    double* res = new double[N];

    for(size_t j = 0; j < N; ++j){
        res[j] = vectorL[j] - vectorR[j];
    }

    return res;
}

double* sumVectorAndVector(int N, double* vectorL, double* vectorR){
    double* res = new double[N];

    for(size_t j = 0; j < N; ++j){
        res[j] = vectorL[j] + vectorR[j];
    }

    return res;
}

double* mulMatrixAndVector(int N, double* matrix, double* vector){
    double* res = new double[N];
    memset(res, 0, N);

    for(size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < N; ++j) {
            res[j] += matrix[i*N + j] * vector[j];
        }
    }

    return res;
}

double scalarVectorAndVector(int N, const double* vectorL, const double* vectorR){ // Memory OK
    double res = 0;

    for(size_t i = 0; i < N; ++i) {
        res += vectorL[i] * vectorR[i];
    }

    return res;
}

double vectorLength(int N, const double* vector){ // Memory OK
    double res = 0;

    for(size_t i = 0; i < N; ++i) {
        res += vector[i] * vector[i];
    }

    res = sqrt(res);

    return res;
}

double* mulVectorAndScalar(int N, double scalar, double* vector){
    double* res = new double[N];

    for(size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < N; ++j) {
            res[j] = scalar * vector[j];
        }
    }

    return res;
}