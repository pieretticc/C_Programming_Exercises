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

bool sequenceChecker(int *array) {

}






