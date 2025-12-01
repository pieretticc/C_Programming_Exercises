//
// Created by matth on 11/20/2025.
//
#include "algorithms.h"

#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

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
int computeConditionalSum(int x, int y, int z) {
    //29
    if (x == y) {
        return z;
    }
    if (z == x) {
        return y;
    }
    if (y == z) {
        return x;
    }
    return x + y + z;
}

int computeSumNo13s(int x, int y, int z) {
    //30
    if (x == 13) {
        return y+z;
    }
    if (y == 13) {
        return x+z;
    }
    if (z == 13) {
        return x+y;
    }
    return x + y + z;
}

int nearestTo13(int x, int y) {
    //32
    if (x > 13 && y > 13) {
        return 0;
    }
    if (x <= 13 && y > 13) {
        return x;
    }
    if (y <= 13 && x > 13) {
        return y;
    }
    return x > y ? x : y;
}
bool equalDifferenceCheck(int small, int medium, int large) {
    //33
    if (abs(small - medium) == abs(medium - large)) {
        return true;
    }
    return false;
}

bool firstLastEqual(int* array, int arraySize) {
    //34
    if (array[0] == array[arraySize-1]) {
        return true;
    }
    return false;
}

bool twoArraysFirstLastCheck(int *array1, int array1Size, int *array2, int array2Size) {
    //35
    if (array1[0] == array2[0] || array1[array1Size-1] == array2[array2Size-1]) {
        return true;
    }
    return false;
}

int arraySum(int *array, int arraySize) {
    //36
    int result = 0;
    for (int i = 0; i < arraySize; i++) {
        result += array[i];
    }
    return result;
}
int *leftRotate(int *array, int arraySize, int key) {
    //37
    int count = 0;
    while (count < key) {
        int temp = array[0];
        for (int i = 0; i < arraySize - 1; i++) {
            array[i] = array[i+1];
        }
        array[arraySize-1] = temp;
        count++;
    }
    return array;
}

int *invertArray(int *array, int arraySize) {
    //38
    int left = 0;
    int right = arraySize - 1;
    int temp;
    if (arraySize == 0) {
        return array;
    }
    while (left <= right) {
        temp = array[left];
        array[left] = array[right];
        array[right] = temp;
        left++;
        right--;
    }
    return array;
}

void printFirstLast(int *array, int arraySize) { //void since I dont want to return a locally declared array
    //40
   printf("First element: %d\n Second element: %d\n", array[0], array[arraySize-1]);
}

bool contains10or20Twice(int *array, int arraySize) {
    //43
    int tens = 0;
    int twenties = 0;
    for (int i = 0; i < arraySize - 1; i++) {
        if (array[i] == 10) {
            tens++;
        }
        if (array[i] == 20) {
            twenties++;
        }
    }
    return (tens == 2 || twenties == 2);
}
bool contains3or5(int *array, int arraySize) {
    //58
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == 5 || array[i] == 3) {
            return true;
        }
    }
    return false;
}
bool checkAdjacentEvenOdd(int *array, int arraySize) {
    //63
    for (int i = 0; i < arraySize - 1; i++) {
        if (array[i] % 2 == 0 && array[i+1] % 2 == 0) {
            return true;
        }
        if (array[i] % 2 == 1 && array[i+1] % 2 == 1) {
            return true;
        }
    }
    return false;
}
int *shiftZerosLeft(int *array, int arraySize) {
    //71
    int position = 0;
    int temp;
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == 0) {
            temp = array[position];
            array[position] = array[i];
            array[i] = temp;
            position++;
        }
    }
    return array;
}
int *shiftRightAndReplace(int *array, int arraySize) { //replaces 5s with 0s
    //72
    int position = arraySize - 1;
    int temp;
    for (int i = arraySize; i > 0; i--) {
        if (array[i] == 0) {
            temp = array[position];
            array[position] = array[i];
            array[i] = temp;
            position--;
        }
        else if (array[i] == 5) {
            array[i] = 0;
        }
    }
    return array;
}
bool checkNonDecreasing(int *array, int arraySize) {
    //74
    for (int i = 0; i < arraySize - 1; i++) {
        if (array[i] > array[i+1]) {
            return false;
        }
    }
    return true;
}
bool check15s(int *array, int arraySize) {
    //75
    if (arraySize < 2) {
        return false;
    }
    for (int i = 0; i < arraySize - 1; i++) {
        if (array[i] == 15 && array[i+1] == 15) {
            return false;
        }
    }
    return false;
}