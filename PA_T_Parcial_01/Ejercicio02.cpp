#include "Ejercicio02.h"
#include<iostream>
#include<algorithm>
using namespace std;
int Ejercicio02::rob(int houses[], int n)
{
    int dinero;
    int* inicial = new int[n];
    *(inicial + 0) = max(houses[0], houses[1]);
    for (int i = 2; i <= n; i++) {
        *(inicial + 0) += max(houses[i - 1], houses[i - 2]);
    }
    return *(inicial + 0);
}
