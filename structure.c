//
// Created by Matthew Pieretti on 11/30/25.
//
#include "structure.h"

#include <string.h>


struct Student createStudent(const char* name, int age, double gradeAvg) {
    struct Student s;
    strncpy(s.name, name, sizeof(s.name) - 1);
    s.name[sizeof(s.name) - 1] = '\0';
    s.age = age;
    s.gradeAvg = gradeAvg;
    return s;
}