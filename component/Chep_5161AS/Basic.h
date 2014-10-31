/*
 * 5161AS.h
 *
 *  Created on: 2014年10月31日
 *      Author: Keen
 */

#ifndef Chep_5161AS_H_
#define Chep_B5161AS_H_

#endif /* 5161AS_H_ */

bool num0[] = {};
bool num1[] = {};
bool num2[] = {};
bool num3[] = {};
bool num4[] = {};
bool num5[] = {};
bool num6[] = {};
bool num7[] = {};
bool num8[] = {};
bool num9[] = {};
bool dot[] = {};

#include "Arduino.h"

/**
 * 获得数字
 */
bool* getNum(int num) {
    return num1;
}

bool Led5161ASSub(int led[], int num, bool dot) {
    if (num > 9) {
        return false;
    }
    // 显示负号
    if (num < 0) {
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], LOW);
        digitalWrite(led[2], LOW);
        digitalWrite(led[3], LOW);
        digitalWrite(led[4], LOW);
        digitalWrite(led[5], LOW);
        digitalWrite(led[6], LOW);
        digitalWrite(led[7], HIGH);
        return true;
    }
    switch (num) {
    case 1:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], LOW);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], LOW);
        digitalWrite(led[6], LOW);
        digitalWrite(led[7], LOW);

        break;
    case 2:
        digitalWrite(led[0], HIGH);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], LOW);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], LOW);
        digitalWrite(led[7], HIGH);

        break;
    case 3:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], LOW);
        digitalWrite(led[7], HIGH);

        break;
    case 4:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], LOW);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], LOW);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[7], HIGH);

        break;
    case 5:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], LOW);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[7], HIGH);

        break;
    case 6:
        digitalWrite(led[0], HIGH);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], LOW);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[7], HIGH);

        break;
    case 7:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], LOW);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], LOW);
        digitalWrite(led[7], LOW);

        break;
    case 8:
        digitalWrite(led[0], HIGH);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[7], HIGH);
        break;
    case 9:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[7], HIGH);

        break;
    case 0:
        digitalWrite(led[0], HIGH);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[7], LOW);

        break;
    }

    return true;
}

bool Led5161ASSubBreath(int led[], int num, int time, bool dot) {
    if (num > 9) {
        return false;
    }
    // 显示负号
    if (num < 0) {
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], LOW);
        digitalWrite(led[2], LOW);
        digitalWrite(led[3], LOW);
        digitalWrite(led[4], LOW);
        digitalWrite(led[5], LOW);
        digitalWrite(led[6], LOW);
        digitalWrite(led[7], HIGH);
        return true;
    }
    switch (num) {
    case 1:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], LOW);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], LOW);
        digitalWrite(led[6], LOW);
        digitalWrite(led[7], LOW);

        break;
    case 2:
        digitalWrite(led[0], HIGH);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], LOW);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], LOW);
        digitalWrite(led[7], HIGH);

        break;
    case 3:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], LOW);
        digitalWrite(led[7], HIGH);

        break;
    case 4:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], LOW);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], LOW);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[7], HIGH);

        break;
    case 5:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], LOW);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[7], HIGH);

        break;
    case 6:
        digitalWrite(led[0], HIGH);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], LOW);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[7], HIGH);

        break;
    case 7:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], LOW);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], LOW);
        digitalWrite(led[7], LOW);

        break;
    case 8:
        digitalWrite(led[0], HIGH);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[7], HIGH);
        break;
    case 9:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[7], HIGH);

        break;
    case 0:
        digitalWrite(led[0], HIGH);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], HIGH);
        if (dot)
            digitalWrite(led[3], HIGH);
        else
            digitalWrite(led[3], LOW);
        digitalWrite(led[4], HIGH);
        digitalWrite(led[5], HIGH);
        digitalWrite(led[6], HIGH);
        digitalWrite(led[7], LOW);

        break;
    }

    return true;
}
