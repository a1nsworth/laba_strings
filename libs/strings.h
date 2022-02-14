//
// Created by user on 14.02.2022.
//

#ifndef UNTITLED3_STRINGS_H
#define UNTITLED3_STRINGS_H

#include <stdio.h>
#include <stdbool.h>

void swapC(char *a, char *b) {
    const char t = *a;
    *a = *b;
    *b = t;
}

bool isDigit(const char a) {
    return a >= '0' && a <= '9';
}

bool isLetter(const char a) {
    return a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z';
}

char *getPtrSymbolByCondition(char *a, bool (*condition)(char)) {
    while (*a != '\0')
        if (condition(*a))
            return a;
        else
            a++;
    return a;
}

#endif //UNTITLED3_STRINGS_H
