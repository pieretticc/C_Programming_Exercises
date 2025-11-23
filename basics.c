//
// Created by matth on 11/16/2025.
//https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php
//
#include "basics.h"
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printInfo(){
    //problem #1
    char name[17]= "Matthew Pieretti";
    char birthday[14] = "Jan 1st, 2000";
    long long int mobile = 1234567890;
    printf("Name: %s\n", name);
    printf("DOB: %s\n", birthday);
    printf("Mobile: %lld\n", mobile);
}
void printVersion() {
    //2
    long version = __STDC_VERSION__;
    printf("We are using version: %ld (C11)\n",version);
}
void bigprint() {
    //3
    printf("\n######\n#\n#\n#####\n#\n#\n#\n\n    ######\n  ##      ##\n #\n #\n #\n #\n #\n   ##      ##\n     ######\n");
}
void reverseChars() {
    //4
    char test1 = 'X';
    char test2 = 'M';
    char test3 = 'L';
    printf("Test Characters: %c, %c, %c \n", test1, test2, test3);
    printf("Reversed is: %c, %c, %c \n", test3, test2, test1);
}
void calcAreaPerm(int height, int width) {
    //5
    printf("Perimiter of the rectangle = %d inches\n", 2*(height+width));
    printf("Area of the rectangle = %d inches\n", height*width);
}
void calcCirclePerm(int radius) {
    //6
    printf("Perimiter of the circle = %f inches\n", 2*radius*M_PI);
    printf("Area of the circle = %f inches\n", radius*radius*M_PI);
}
void displayMultipleVariables() {
    //7
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13549;
    double dx = 1.149578;
    char c = 'W';
    unsigned long ux = 2541567890;
    printf("int a: %d:, int b: %d\n", a, b);
    printf("long ax: %ld \n", ax);
    printf("short s: %hd\n", s);
    printf("float x: %f\n", x);
    printf("double dx: %f\n", dx);
    printf("char c: %c\n", c);
    printf("unsigned long ux: %lu\n", ux);
}
void convertDayWeekYear(int days) {
    //8
    printf("number of days = %d\n", days);
    int years = days / 365;
    int weeks = (days % 365) / 7;
    int remaining_days = days - ((years * 365) + (weeks * 7));
    printf("number of years = %d\n weeks = %d\n days = %d\n", years, weeks, remaining_days);
}
int calcIntSum(int a, int b) {
    //9
    return a + b;
}
int calcIntProduct(int a, int b) {
    //10
    return a * b;
}
float calcAvgWeight(float weight1, float count1, float weight2, float count2) {
    //11
    return ((weight1 * count1) + (weight2 * count2)) / (count1 + count2);
}
void printEmplInfo(char EmplID[10], double hours, double rate) {
    //12
    printf("Employee ID: %s\n", EmplID);
    printf("Salary = %.2f", hours*rate);
}
int findMax3Ints(int a, int b, int c) {
    //13
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}
float calcMileage(int distance, double fuel) {
    //14
    return (float)(distance / fuel);
}
float calcDistance (int x1, int y1, int x2, int y2) {
    //15
    return sqrt(pow((x2- x1), 2) + pow((y2 - y1),2));
}
void breakBills(int dollars) {
    //16
    int hundreds = dollars / 100;
        dollars %= 100;
    int fifties = (dollars % 100) / 50;
        dollars %= 50;
    int twenties = (dollars % 50) / 20;
        dollars %= 20;
    int tens = (dollars % 20) / 10;
        dollars %= 10;
    int fives = (dollars % 10) / 5;
        dollars %= 5;
    int twos = (dollars % 5) / 2;
        dollars %= 2;
    int ones = (dollars % 2) / 1;
    printf("%d Note(s) of 100.00\n", hundreds);
    printf("%d Note(s) of 50.00\n", fifties);
    printf("%d Note(s) of 20.00\n", twenties);
    printf("%d Note(s) of 10.00\n", tens);
    printf("%d Note(s) of 5.00\n", fives);
    printf("%d Note(s) of 2.00\n", twos);
    printf("%d Note(s) of 1.00\n", ones);
}
void convertDaysYearsMonths(int days) {
    //18
    printf ("Inputted number of days = %d\n", days);
    int years = days / 365;
        days %= 365;
    int months = days / 30;
        days %= 30;
    printf("%d Year(s) \n%dMonth(s) \n%d day(s)", years, months, days);
}
void intEval(int p, int q, int r, int s) {
    //19
    if ((q < 0 ) || (r < 0) || (s < 0) || (p % 2 == 1)){
    printf("Invalid input\n");
    exit(1);
    } else if ((q > r) && (s > p) && (r+s > p+q)) {
        printf("Correct values");
    } else {
        printf("Wrong values");
    }
}
void BhaskaraSolver(int a, int b, int c) {
    //20
    float x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
    float x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
    printf("Root1 = %f\nRoot2 = %f\n", x1, x2);
}
void rangeChecker(int x) {
    //21
    if (x < 0) {
        printf("Invalid input - enter a positive int \n");
    }
    else if(x >=0 && x <= 20)
    {
        printf("Range [0, 20]\n");
    }
    else if(x >=21 && x <= 40) {
        printf("Range (21,40]\n");
    }
    else if(x >=41 && x <= 60)
    {
        printf("Range (41,60]\n");
    }
    else if(x >61 && x <= 80)
    {
        printf("Range (61,80]\n");
    } else {
        printf("Invalid input - too high\n");
    }
}
int sumAllNums(int a, int b, int c, int d, int e) {
    //22
    return a + b + c + d + e;
}
void checkIfTriangle(double a, double b, double c) {
    //23
    if ((a + b <= c) || (a + c <= b) || (b + c <= a) || (c + a <= b)) {
        printf("triangle is false\n");
    } else {
        printf("Triangle is true\nPerimiter = %f", a+b+c);
    }
}
void checkIfMultiples(int a, int b) {
    //24
    if (b % a == 0 || a % b == 0) {
       printf("multiples is true\n");
    } else {
        printf("multiples is false\n");
    }
}
void getMonthName(int month) {
    //25
    if (month < 1 || month > 12) {
        printf("Invalid input\n");
    }
    switch (month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
    }
}
void printEvens() {
    //26
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}
void countPosNeg(int a, int b, int c, int d, int e) {
    //27
    int evals[5];
    int negatives = 0, positives = 0;
    evals[0] = a;
    evals[1] = b;
    evals[2] = c;
    evals[3] = d;
    evals[4] = e;
    for (int i = 0; i < 5; i++) {
        printf("%d \n", evals[i]);
        if (evals[i] < 1) {
            negatives++;
        } else if (evals[i] > 0) {
            positives++;
        }
    }
    printf("number of positives: %d\n", positives);
    printf("number of negatives: %d\n", negatives);
}
void countPosAvg(int a, int b, int c, int d, int e) {
    //28
    int evals[5];
    int positives = 0;
    int positiveSum = 0;
    evals[0] = a;
    evals[1] = b;
    evals[2] = c;
    evals[3] = d;
    evals[4] = e;
    for (int i = 0; i < 5; i++) {
        printf("%d \n", evals[i]);
        if (evals[i] > 0) {
            positives++;
            positiveSum += evals[i];
        }
    }
    double average = positiveSum / positives;
    printf("number of positives: %d\n", positives);
    printf("average number: %.2f", average);
}
void sumAllOdds(int a, int b, int c, int d, int e) {
    //29
    int evals[5];
    int oddNums = 0;
    int oddSum = 0;
    evals[0] = a;
    evals[1] = b;
    evals[2] = c;
    evals[3] = d;
    evals[4] = e;
    for (int i = 0; i < 5; i++) {
        printf("%d \n", evals[i]);
        if (evals[i] % 2 == 1) {
            oddNums++;
            oddSum += evals[i];
        }
    }
    printf("Sum of odd numbers: %d\n", oddSum);
}
void printEvenSquares(int limit) {
    //30
    for (int i = 1; i <= limit; i++) {
        if (i % 2 == 0) {
            printf("%d ^ 2 = %d\n", i, i*i);
        }
    }
}
void checkPosEven(int x) {
    //31
    if (x >= 0) {
        printf("Positive ");
    } else {
        printf("Negative ");
    }
    if (x % 2 == 0) {
        printf("Even \n");
    } else {
        printf("Odd \n");
    }
}
void printRemaindersof3(int x) {
    //32
    for (int i = 0; i < 100; i++) {
        if (i % x == 3) {
            printf("%d \n", i);
        }
    }
}
void highestValue() {
    //33
    int inputs[5];
    int max_num = 0;
    int max_index = 0;
    printf("Enter five integers: \n");
    for (int i = 0; i < 5; i++) {
        scanf(" %d", &inputs[i]);
        if (inputs[i] > max_num) {
            max_num = inputs[i];
            max_index = i;
        }
    }
    printf("Highest number: %d\n", max_num);
    printf("Highest index: %d\n", max_index + 1);
}
void sumOddNums(int x, int y) {
    //34
    int sumOfOdds = 0;
    int min, max;
    if (x > y ) {
        min = y;
        max = x;
    }
    else if (x < y) {
        min = x;
        max = y;
    }
    for (int i = min; i < max; i++) {
        if (i % 2 == 0) {
            printf("%d \n", i);
            sumOfOdds += i;
        }
    }
    printf("Sum of odd numbers: %d\n", sumOfOdds);
}
void checkIfAscending(int x, int y) {
    //35
    if (x < y) {
        printf("Ascending \n");
    }
    else if (x > y) {
        printf("Descending \n");
    } else {
        printf("equal\n");
    }
}
void passValidate(int pass) {
    //36
    if (pass == 1234) {
        printf("Correct Password \n");
        exit(0);
    } else {
        printf("Wrong Password \n");
    }
}
void determineQuadrant(int x, int y) {
    //37
    if (x > 0 && y > 0 ) {
        printf("Quadrant 1 (+,+)\n");
    } else if (x > 0 && y < 0 ) {
        printf("Quadrant 2 (-,-)\n");
    } else if (x < 0 && y < 0 ) {
        printf("Quadrant 3 (*,*)\n");
    } else if (x < 0 && y > 0 ) {
        printf("Quadrant 4 (+,-)\n");
    }
}
void checkIfDivisible(int x, int y) {
    //38
    if (y != 0) {
        printf("Divisible - Answer = %.2f\n", (double) x / y);
    } else {
        printf("Error! not divisible");
    }
}
void sumCertainIntegers(int x, int y) {
    //39
    int max = x, min = y, total;
    if (x > y) {
        max = x;
        min = y;
    } else if (x < y) {
        max = y;
        min = x;
    }
    for (int i = min; i <= max; i++) {
        if (i % 17 != 0) {
            printf("%d \n", i);
            total += i;
        }
    }
    printf("Sum of all integers: %d\n", total);
}
void findDivisibleInts(int x, int y) {
    //40
    int max = x , min = y;
    if (x > y) {
        max = x;
        min = y;
    } else if (x < y) {
        max = y;
        min = x;
    }
    for (int i = min; i < max; i++) {
        if (i % 7 == 2 || i % 7 == 3) {
            printf("%d \n", i);
        }
    }
}
void printLines(int n) {
    //41
    for (int i = 1; i <= 3*n; i++) {
        printf("%d ", i);
        if (i % 3 == 0) {
            printf("\n");
        }
    }
}
void printSquaresCubes(int n) {
    //42
    for (int i = 1; i <= n; i++) {
        printf("%d %d %d \n", i, i*i, i*i*i);
    }
}
void printPlinesQnumbers(int p, int q) {
    //43
    for (int i = 1; i <= p * q; i++) {
        printf("%d ", i);
        if (i % q == 0) {
            printf("\n");
        }
    }
}
void calcAvgGrade() {
    //44
    int grades[99];
    int numOfGrades = 0;
    int total = 0;
    printf("Enter your grades! enter 0 to exit\n");
    for (int i = 0; i < 99; i++) {
        scanf("%d", &grades[i]);
        if (grades[i] <= 0 ) {
            break;
        }
        numOfGrades++;
        total += grades[i];
    }
    printf("The average grade is: %.2f\n", (float)total/(float)numOfGrades);
}
void calcSeriesSum() {
    //45
    double sum = 0.0;
    for (int i = 1; i <= 50; i++) {
        sum += 1.00 / i;
    }
    printf("\n sum = %.2f\n", sum);
}
void findDivisors(int n) {
    //47
    printf("All the divisors of %d are: \n", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf(" %d\n", i);
        }
    }
}
void calculateInterest(double principle, double APR, int lifespan) { //compounded annually (yeah right)
    //53
    printf("Initial loan amount: %.2f\n", principle);
    for (int i = 1; i <= lifespan; i++) {
        principle *= ((APR/100) + 1);
        printf("Year %d interest: %.2f\n", i, principle);
    }
}
void swapNums(int x, int y) { //2 5
    //55
    printf("Swapping numbers %d and %d\n", x, y);
    x = x + y; //7 5
    y = x - y; //7 2
    x = x - y; //5 2
    printf("Values after swapping: %d and %d\n", x, y);
}
int leftShift(int x) {
    //56
    return x << 2;
}
int reverseNumber(int x) {
    //57
    int reversed = 0;
    while (x != 0) {
        int lastDigit = x % 10;
        reversed = reversed * 10 + lastDigit;
        x /= 10;
    }
    return reversed;
}
double sinOfX(int x) {
    //61
    return sin(x);
}
int sumOfDigits(int x) {
    //62
    if (x >= 500) {
        printf("Error! enter a number less than 500! \n");
        exit(1);
    }
    int sum = 0;
    while (x != 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
void printPrimes(int limit) {
    //65
    printf("Primes from 1 - %d are as follows:\n", limit);
    int flag = 1; //0 means not prime, 1 means prime
    int numOfPrimes = 0;
    for (int i = 2; i <= limit; i++) {
        flag = 1;
        for (int j = 2; j <= i / 2 && flag == 1; j++) {
            if (i % j == 0) {
                flag = 0;
            }
        }
        if (flag == 1) {
            printf("%d ", i);
            numOfPrimes++;
        }
        if (numOfPrimes % 10 == 0) {
            printf("\n");
        }
    }
}
void generateRandomNumbers(int count) {
    //66
    FILE *fptr = fopen("randomNumbers.txt", "w");
    srand(time(NULL)); //insecure seed
    fprintf(fptr , "%d\n", count);
    for (int i = 0; i < count; i++) {
        double r = (double) rand() / (RAND_MAX + 1.0);
        r = r - 0.5;
        printf("%.4f\n", r);
        fprintf(fptr , "%.4f\n", r);
    }
    fclose(fptr);
}
void evaluatePowers(int x, int n) {
    //67
    double result = pow(x, n);
    printf("You inputted %d and %d.\n%d ^^ %d = %f", x, n, x, n, result);
}
void printPowersOf2(int n) {
    //68
    printf("=======================================\n n      2 to power n        2 to power -n\n=======================================\n");
    for (int i = 0; i <= n; i++) {
        printf("%d              %.f                  %f \n", i, pow(2,i), pow(2,-i));
    }
    printf("=======================================\n");
}
void printAscii() {
    //70
    for (int i = 'A'; i <= 'z'; i++) {
        if ((i >= 'A' && i <= 'Z') || (i >= 'a')) {
            printf("[%d-%c] ", i, i);
        }
    }
}
void copyStringCount(char str1[]) {
    //71
    int str1Size = strlen(str1);
    char str2[str1Size];
    for (int i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    printf("Copied string: %s\n", str2);
    printf("Size : %d\n", str1Size);
}
void printSquare(const int size) {
    //80
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("# ");
        }
        printf("\n");
    }
}
void printHollowSquare(const int size) {
    //81
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i > 0 && i < size-1) && (j > 0 && j < size-1)){
                printf("  ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }
}
int countThrees(int input) {
    //83
    int count = 0;
    int temp = 0;
    while (input != 0) {
        temp = input % 10;
        input /= 10;
        if (temp == 3) {
            count++;
        }
    }
    return count;
}
void getRomanNumeral(int input) {
    //85
    while (input != 0) {
        if (input >= 100) {
            printf("C");
            input -= 100;
        } else if (input >= 50) {
            printf("L");
            input -= 50;
        } else if (input >= 10) {
            printf("X");
            input -= 10;
        } else if (input >= 9) {
            printf("IX");
            input -= 9;
        } else if (input >= 5) {
            printf("V");
            input -= 5;
        } else if (input >= 4) {
            printf("IV");
            input -= 4;
        } else if (input >= 1) {
            printf("I");
            input -= 1;
        }
    }
}
void printRomanNumerals(int input) {
    //driver code for 85
    printf("Decimal Number          |           Roman Numeral\n ------------------------------------------------------\n");
    for (int i = 0; i < input; i++) {
        printf("%d                                  ", i);
        getRomanNumeral(i);
        printf(" \n");
    }
}
bool isPrime(const int input) {
    if (input == 1 || input % 2 == 0) {
        return false;
    }
    if (input == 2) {
        return true;
    }
    for (int i = 3; i <= input / 2; i = i + 2) {
        if (input % i == 0) {
            return false;
        }
    }
    return true;
}
bool isPalindrome(const int input) {
    int temp = input;
    int numToCheck = 0;
    while (temp != 0) {
        numToCheck = (numToCheck * 10) + (temp % 10);
        temp /= 10;
    }
    return numToCheck == input;
}
void listPrimePalindromes(int x, int y) {
    //90
    for (int i = x; i <= y; i++) {
        if (isPalindrome(i) && isPrime(i)) {
            printf("%d\n", i);
        }
    }
}

double findAngle(int hour, int minute) {
    //91
    hour = hour % 12;
    minute = minute % 60;
    double minuteAngle = ((double)minute * 6);
    double hourAngle = ((double)hour + (double)minute / 60) * 30;
    //printf("%.4f, %.4f\n", hourAngle, minuteAngle);
    double totalAngle = hourAngle - minuteAngle;
    if (totalAngle < 0) {
        totalAngle *= -1;
    }
    if (totalAngle < 360 - totalAngle) {
        return totalAngle;
    }
    return 360 - totalAngle;
}

int *createArray(int size) {
    int *array = (int*)malloc(size * sizeof(int));
    int input;
    printf("Enter your %d elements in the Array: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d",&array[i]);
    }


    return array;
}
void printArray(int *array, int size) {
    printf("Elements in the array are: \n");
    for (int i = 0; i < size; i++) {
        printf("array[%d] = %d \n", i, array[i]);
    }
    removeArray(array);
}
void removeArray(int *array) {
    free(array);
}
int *fixArray(int *array, int size) {
    //124
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            array[i] = 1;
        }
    }
    return array;
}

int *replaceFirstElementArray(int *array, int size, int firstNum) {
    //125
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            array[i] = firstNum;
        } else {
            array[i] = array[i-1]  * 2;
        }
    }
    return array;
}
void printPositionsArrayElements(int *array, int size) {
    //126
    printf("Array positions that store a value less or equal to 0:\n");
    for (int i = 0; i < size; i++) {
        if (array[i] <= 0) {
            printf("array[%d] = %d \n",i, array[i]);
        }
    }
    removeArray(array);
}
int smallestArrayValue(int *array, int size) {
    //130
    int smallest = array[0];
    for (int i = 0 ; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    return smallest;
}
int checkifSubstring(const char *needle, const char *haystack) {
    //131
    for (int i = 0; haystack[i] != '\0'; i++) {
        int j = 0;
        while (needle[j] == haystack[i+j] && needle[j] != '\0') {
            j++;
        }
        if (needle[j] == '\0') {
            return 1;
        }
    }
    return 0;
}
int countDigitsInSum(int x, int y) {
    //133
    int digitCount = 0;
    int numBeingCounted = x + y;
    while (numBeingCounted != 0) {
        numBeingCounted /= 10;
        digitCount++;
    }
    return digitCount;
}
