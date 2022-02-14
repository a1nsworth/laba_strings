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

int *getPtrSymbolByCondition(const char *a, const size_t n, bool (*condition)(char)) {
    for (register size_t i = 0; i < n; ++i)
        if (condition(*(a + i)))
            return a + i;
}

#endif //UNTITLED3_STRINGS_H
