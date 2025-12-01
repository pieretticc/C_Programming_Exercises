//
// Created by Matthew Pieretti on 11/30/25.
//

#ifndef UNTITLED1_STRUCTURE_H
#define UNTITLED1_STRUCTURE_H

struct Student {
    char name[20];
    int age;
    double gradeAvg;
};

struct Student createStudent(const char* name, int age, double gradeAvg);




#endif //UNTITLED1_STRUCTURE_H