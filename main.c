#include "basics.h"
#include "algorithms.h"
#include <stdio.h>
int main() {
    /*
    //functions are commented and uncommented as needed to test
    //basics.c
    printInfo();
    printVersion();
    bigprint();
    reverseChars();
    calcAreaPerm(5, 7);
    calcCirclePerm(6);
    displayMultipleVariables();
    convertDayWeekYear(1329);
    printf("sum = %d\n",calcIntSum(35, 1230));
    printf("product = %d\n",calcIntProduct(5, 11));
    printf("average value = %f\n",calcAvgWeight(15,5,25,4));
    printEmplInfo("762312", 40, 50);
    printf("Max = %d\n",findMax3Ints(12, 3, 40));
    printf("Average mileage = %.3f\n", calcMileage(350, 5.00));
    printf("Distance = %.4f\n", calcDistance(25, 15, 35, 10));
    breakBills(375);
    convertDaysYearsMonths(2535);
    intEval(4,3,2,9);
    BhaskaraSolver(25, 35, 12);
    rangeChecker(50);
    printf("sum of all numbers is: %d", sumAllNums(10,20,30,40,50));
    checkIfTriangle(25, 15, 35);
    checkIfMultiples(5, 15);
    getMonthName(11);
    printEvens();
    countPosNeg(11, 22 ,44 ,55, -77);
    countPosAvg(11, 22 ,44 ,55, 79);
    sumAllOdds(1,2,3,4,5);
    printEvenSquares(76);
    checkPosEven(-4);
    printRemaindersof3(25);
    highestValue();
    sumOddNums(22, 11);
    checkIfAscending(3,4);
    passValidate(1234);
    determineQuadrant(3, -4);
    checkIfDivisible(4, 3);
    sumCertainIntegers(50, 99);
    findDivisibleInts(25 ,45);
    printLines(5);
    printSquaresCubes(5);
    printPlinesQnumbers(5,6);
    calcAvgGrade();
    calcSeriesSum();
    findDivisors(135);
    calculateInterest(37000.00, 7, 6);
    swapNums(2, 5);
    printf("%d",leftShift(2));
    printf("%d \n",reverseNumber(42367));
    printf("%.2f \n",sinOfX(555));
    printf("%d ",sumOfDigits(456));
    printPrimes(200);
    generateRandomNumbers(50);
    evaluatePowers(256, 0);
    printPowersOf2(10);
    printAscii();
    copyStringCount("This is a test!");
    printSquare(7);
    printHollowSquare(8);
    printf("%d",countThrees(1234));
    printRomanNumerals(199);
    printf("%d\n", isPalindrome(17771));
    printf("%d\n", isPrime(7284));
    listPrimePalindromes(50,1200);
    printf("%.2f",findAngle(6 , 15));
    createArray(7);
    printArray(createArray(7),7);
    printArray(fixArray(createArray(7),7),7);
    int size = 7;
    int *testArray = createArray(size);
    printf("Array size: %zu\n", *testArray); //returns 1
    size_t arraySize = sizeof(testArray);
    printf("Array size: %zu\n", arraySize); //returns 8
    //replaceFirstElementArray(testArray, size, 5);
    //printArray(testArray, size);
    int size = 7;
    int *testArray = createArray(size);
    printPositionsArrayElements(testArray, size);
    int size = 5;
    int *testArray = (createArray(size));
    printf("smallest value is: %d", smallestArrayValue(testArray, size));
    char string1[] = "qwerty";
    char string2[] = "easyboutqwerty";
    printf("%d",checkifSubstring(string1, string2));
    printf("%d", countDigitsInSum(68, 75));
    //algorithms.c
    printf("%d", sumOrTriple(2,2));
    printf("absolute diff from 51: %d\n", absoluteDifferenceFrom51(2));
    printf("absolute diff from 51: %d\n", absoluteDifferenceFrom51(51));
    printf("absolute diff from 51: %d\n", absoluteDifferenceFrom51(550));
    printf("Testing 30s value: %s\n", check30s(20,50) ? "true" : "false");
    printf("Testing 30s value: %s\n", check30s(30,30) ? "true" : "false");
    printf("Checking if near 100 or 200: %s\n", checkIfNear(99) ? "true" : "false");
    printf("Checking if near 100 or 200: %s\n", checkIfNear(109) ? "true" : "false");
    printf("Checking if near 100 or 200: %s\n", checkIfNear(199) ? "true" : "false");
    printf("Checking if near 100 or 200: %s\n", checkIfNear(205) ? "true" : "false");
    printf("Checking if near 100 or 200: %s\n", checkIfNear(50) ? "true" : "false");
    printf("Checking if near 100 or 200: %s\n", checkIfNear(999) ? "true" : "false");
    printf("temperature check: %s\n", tempCheck(-1, 109) ? "true" : "false");
    printf("temperature check: %s\n", tempCheck(10, 109) ? "true" : "false");
    printf("temperature check: %s\n", tempCheck(10, 99) ? "true" : "false");
    printf("temperature check: %s\n", tempCheck(-16, 109) ? "true" : "false");
    printf("range check: %s\n", checkRange100to200(220, 330) ? "true" : "false");
    printf("range check: %s\n", checkRange100to200(50, 150) ? "true" : "false");
    printf("triple range check: %s\n", tripleRangeCheck(20, 30, 40) ? "true" : "false");
    printf("triple range check: %s\n", tripleRangeCheck(200, 300, 400) ? "true" : "false");
    printf("Value closest to 100: %d\n", closestTo100(65, 65));
    printf("both numbers within 40-50 OR 50-60: %s\n", dualRangeCheck(55, 60) ? "true" : "false");
    printf("larger number if one is from 20 - 30 : %d\n", rangeWithLargest(44, 55));
    printf("same last digit: %s\n", sameLastDigit(44, 104) ? "true" : "false");

    //int *testArray1 = createArray(10);
    //int testArraySize = sizeof(testArray1) / sizeof(testArray1[0]);
    int arr_empty[] = { };
    int arr_empty_size = sizeof(arr_empty);
    int arr_single[] = { 42 };
    int arr_single_size = sizeof(arr_single) / sizeof(arr_single[0]);
    int arr_small[]  = { 3, 1 };
    int arr_small_size = sizeof(arr_small) / sizeof(arr_small[0]);
    int arr_neg[]    = { -5, -1, -3, 2 };
    int arr_neg_size = sizeof(arr_neg) / sizeof(arr_neg[0]);
    int arr_stress[] = {2147483647, -2147483648, 0, 1024, -1024 };
    int arr_stress_size = sizeof(arr_stress) / sizeof(arr_stress[0]);
    int arr_good[] = { 4, 1, 2, 3, 5 };
    int arr_good_size = sizeof(arr_good) / sizeof(arr_good[0]);

    printf("arr_empty: %s\n",sequenceChecker(arr_empty, arr_empty_size) ? "true" : "false");
    printf("arr_single: %s\n",sequenceChecker(arr_single, arr_single_size) ? "true" : "false");
    printf("arr_small: %s\n",sequenceChecker(arr_small, arr_small_size) ? "true" : "false");
    printf("arr_neg: %s\n",sequenceChecker(arr_neg, arr_neg_size) ? "true" : "false");
    printf("arr_stress: %s\n",sequenceChecker(arr_stress, arr_stress_size) ? "true" : "false");
    printf("arr_good: %s\n",sequenceChecker(arr_good, arr_good_size) ? "true" : "false");
    //removeArray(testArray1);

    printf("check if sum or diff is 5: %s\n",checkSumDiff5(2, 3) ? "true" : "false");
    printf("check if sum or diff is 5: %s\n",checkSumDiff5(5, 0) ? "true" : "false");
    printf("check if sum or diff is 5: %s\n",checkSumDiff5(12, 32) ? "true" : "false");
    printf("check if sum or diff is 5: %s\n",checkSumDiff5(267, 3432432) ? "true" : "false");

    printf("XOR check if divisible by 3 and 7: %s\n",xorMultipleChecker(6) ? "true" : "false");
    printf("XOR check if divisible by 3 and 7: %s\n",xorMultipleChecker(14) ? "true" : "false");
    printf("XOR check if divisible by 3 and 7: %s\n",xorMultipleChecker(21) ? "true" : "false");
    printf("XOR check if divisible by 3 and 7: %s\n",xorMultipleChecker(28) ? "true" : "false");
    printf("check if in range of multiple of 10: %s\n",nearMultiple10Checker(27) ? "true" : "false");
    int x = 15;
    int y = 26;
    printf("conditional check of %d and %d: %d\n", x, y, conditionalLargerCheck(x, y));
    printf("equal difference check: %s\n", equalDifferenceCheck(7,14,21) ? "equal" : "not equal");
    printf("equal difference check: %s\n", equalDifferenceCheck(7,14,22) ? "equal" : "not equal");
    */



    int arr_good[] = { 999, 1, 2, 3, 0, 4, 0, 4 ,4,4, 0,4,4,4, 0,4,4, 0, 999 };
    int arr_good_size = sizeof(arr_good) / sizeof(arr_good[0]);
    int arr_bad[] = { 0, 4, 1, 2, 3, 10, 20, 17, 0 };
    int arr_bad_size = sizeof(arr_bad) / sizeof(arr_bad[0]);
//    printf("equal array start and end check: %s\n", firstLastEqual(arr_good, arr_good_size) ? "equal" : "not equal");
//    printf("equal array start and end check: %s\n", firstLastEqual(arr_bad, arr_bad_size) ? "equal" : "not equal");
//    printf("Sum of array equals: %d\n", arraySum(arr_good, arr_good_size));
    printArray(arr_good, arr_good_size);
    printArray(arr_bad, arr_bad_size);
//    printArray(leftRotate(arr_good, arr_good_size, 1), arr_good_size);
//    printArray(invertArray(arr_good, arr_good_size), arr_good_size);
//    printf("array contains 10 twice or 20 twice: %s\n",contains10or20Twice(arr_bad, arr_bad_size) ? "true" : "false");
    printf("Arrays with zeros shifted left: \n");
    printArray(shiftZerosLeft(arr_good, arr_good_size), arr_good_size);
    printArray(shiftZerosLeft(arr_bad, arr_bad_size), arr_bad_size);
    printf("Arrays with zeros shifted right and fives replaced: \n");
    printArray(shiftRightAndReplace(arr_good, arr_good_size), arr_good_size);
    printArray(shiftRightAndReplace(arr_bad, arr_bad_size), arr_bad_size);

    return 0;
}