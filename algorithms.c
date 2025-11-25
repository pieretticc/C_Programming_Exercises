//
// Created by matth on 11/20/2025.
//
#include "algorithms.h"

#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int sumOrTriple(int x, int y) {
    //1
    if (x == y) {
        return 3 * (x + y);
    }
    return x + y;
}
int absoluteDifferenceFrom51(int x) {
    //2
    if (x > 51) {
        return 3 * (x - 51);
    }
    if (x - 51 < 0) {
        return -1 * (x - 51);
    }
        return x - 51;
}
bool check30s(int x, int y) {
    //3
    if (x == 30 || y == 30 || x+y == 30) {
        return true;
    }
    return false;
}
bool checkIfNear(int x) {
    //4
    if ((x - 100 <= 10 && x - 100 >= -10 ) || (x - 200 <= 10 && x - 200 >= -10 )){
        return true;
    }
    return false;
}
bool checkIfMod3or7(int x) {
    //5
    if (x % 3 == 0 || x % 7 == 0) {
        return true;
    }
    return false;
}
bool tempCheck(int x, int y) {
    //6
    if ((x < 0 || y < 0) && (x > 100 || y > 100)) {
        return true;
    }
    return false;
}
bool checkRange100to200(int x, int y) {
    //7
    if ((x >=100 && x <= 200) || (y >=100 && y <= 200)) {
        return true;
    }
    return false;
}
bool tripleRangeCheck(int x, int y, int z) {
    //8
    if ((x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50)){
        return true;
    }
    return false;
}
int closestTo100(int x, int y) {
    //10
    if (x == y) {
        return 0;
    }
    if (abs(x - 100) < abs(y - 100)) {
        return x;
    }
    return y;
}
bool dualRangeCheck(int x, int y) {
    //11
    if (((x >= 40 && x <= 50) && (y >= 40 && y <= 50)) || ((x >= 50 && x <= 60) && (y >= 50 && y <= 60))){
        return true;
    }
    return false;
}
int rangeWithLargest(int a, int b) {
    //12
    if ((a >= 20 && a <= 30) || (b >= 20 && b <= 30)) {
        if (a >= b) {
            return a;
        }
        return b;
    }
    return 0;
}

bool sameLastDigit(int x, int y) {
    //13
    x %= 10;
    y %= 10;
    return x == y;
}

bool sequenceChecker(int *array, int arraySize) {
    //14
    if (arraySize < 3) {
        return false;
    }
    for (int i = 0; i < arraySize - 2; i++) {
    //    printf("Array[%d] = %d\n", i, array[i]);
        if (array[i] == 1 && array[i + 1] == 2 && array[i + 2] == 3) {
        //    printf("Sequence found!\n");
            return true;
        }
    }
    return false;
}
int countAdjacent5s(int *array, int arraySize) {
    //15
    int count = 0;
    if (arraySize < 1) {
        return 0;
    }
    for (int i = 0; i < arraySize - 1; i++) {
        if (array[i] == 5 && (array[i+1] == 5 || array[i+1] == 6)) {
            count++;
        }
    }
    return count;
}

bool tripleChecker(const int *array, const int arraySize) {
    //16
    if (arraySize < 3) {
        return false;
    }
    for (int i = 0; i < arraySize - 2; i++) {
        if (array[i] == array[i + 1] && array[i + 1] == array[i + 2]) {
            return true;
        }
    }
    return false;
}
int sumChecker(const int x, const int y) {
    //17
    int sum = x + y;
    if (sum >= 10 && sum <= 20) {
        return 30;
    }
    return sum;
}

bool checkSumDiff5(const int x, const int y) {
    //18
    if (x == 5 || y == 5|| x+y==5 || x-y==5 ) {
        return true;
    }
    return false;
}

bool multiple13checker(const int x) {
    //19
    if (x % 13 == 0 || x % 13 == 1) {
        return true;
    }
    return false;
}

bool xorMultipleChecker(const int x) {
    //20
    return (x % 3 == 0) ^ (x % 7 == 0);
}

bool nearMultiple10Checker(const int x) {
    //21
    if (x % 10 >= 8 || x % 10 <= 2 ) {
        return true;
    }
    return false;
}
int sumSpecialRangeOverride(const int x, const int y) {
    //22
    if ((x >= 10 && x <= 20) || (y >= 10 && y <= 20)) {
        return 18;
    }
    return x+y;
}
bool threeIntSumMatch(int x, int y, int z) {
    //23
    if (x + y == z || y + z == x || z + x == y) {
        return true;
    }
    return false;
}
bool comparativeCheckThreshold20(int x, int y, int z) {
    //24
    if ((x >=20 && x < y ||x >=20 && x < z) || (y >=20 && y < x || y >=20 && y < z) || (z >=20 && z < x || z >=20 && z < y)) {
        return true;
    }
    return false;
}
int conditionalLargerCheck(int x, int y) {
    //27
    if (x == y) {
        return 0;
    }
    if (x % 5 == y % 5) {
        if (x > y) {
            return y;
        }
        return x;
    }
    if (x > y) {
        return x;
    }
    return y;
}
