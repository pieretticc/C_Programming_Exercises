//
// Created by matth on 11/16/2025.
//

#ifndef UNTITLED1_BASICS_H
#define UNTITLED1_BASICS_H
#include <stdbool.h>

void printInfo();
void printVersion();
void bigprint();
void reverseChars();
void calcAreaPerm(int height, int width);
void calcCirclePerm(int radius);
void displayMultipleVariables();
void convertDayWeekYear(int days);
int calcIntSum(int a, int b);
int calcIntProduct(int a, int b);
float calcAvgWeight(float weight1, float count1, float weight2, float count2);
void printEmplInfo(char EmplID[10], double hours, double rate);
int findMax3Ints(int a, int b, int c);
float calcMileage(int distance, double fuel);
float calcDistance (int x1, int y1, int x2, int y2);
void breakBills(int dollars);
void convertDaysYearsMonths(int days);
void intEval(int p, int q, int r, int s);
void BhaskaraSolver(int a, int b, int c);
void rangeChecker(int x);
int sumAllNums(int a, int b, int c, int d, int e);
void checkIfTriangle(double a, double b, double c);
void checkIfMultiples(int a, int b);
void getMonthName(int month);
void printEvens();
void countPosNeg(int a, int b, int c, int d, int e);
void countPosAvg(int a, int b, int c, int d, int e);
void sumAllOdds(int a, int b, int c, int d, int e);
void printEvenSquares(int limit);
void checkPosEven(int x);
void printRemaindersof3(int x);
void highestValue();
void sumOddNums(int x, int y);
void checkIfAscending(int x, int y);
void passValidate(int pass);
void determineQuadrant(int x, int y);
void checkIfDivisible(int x, int y);
void sumCertainIntegers(int x, int y);
void findDivisibleInts(int x, int y);
void printLines(int n);
void printSquaresCubes(int n);
void printPlinesQnumbers(int p, int q);
void calcAvgGrade();
void calcSeriesSum();
void findDivisors(int n);
void calculateInterest(double principle, double APR, int lifespan);
void swapNums(int x, int y);
int leftShift(int x);
int reverseNumber(int x);
double sinOfX(int x);
int sumOfDigits(int x);
void printPrimes(int limit);
void generateRandomNumbers(int count);
void evaluatePowers(int x, int n);
void printPowersOf2(int n);
void printAscii();
void copyStringCount(char str1[]);
void printSquare(int size);
void printHollowSquare(int size);
int countThrees(int input);
void getRomanNumeral(int input);
void printRomanNumerals(int input);
bool isPalindrome(int input);
bool isPrime( int input);
void listPrimePalindromes(int x, int y);
double findAngle(int hour, int minute);
int *createArray(int size);
void printArray(int *array, int size);
void removeArray(int *array);
int *fixArray(int *array, int size);
#endif //UNTITLED1_BASICS_H