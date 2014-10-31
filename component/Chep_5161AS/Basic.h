/*
 * 5161AS.h
 *
 *  Created on: 2014年10月31日
 *      Author: Keen
 */

#ifndef Chep_5161AS_H_
#define Chep_B5161AS_H_

#endif /* Chep_B5161AS_H_ */

bool T = true;
bool F = false;

bool nums[][10] = {
//       0  1  2  3  4  5  6  7
        { T, T, T, F, T, T, T, F }, // 0
        { F, F, T, F, T, F, F, F }, // 1
        { T, T, F, F, T, T, F, T }, // 2
        { F, T, T, F, T, T, F, T }, // 3
        { F, F, T, F, T, F, T, T }, // 4
        { F, T, T, F, F, T, T, T }, // 5
        { T, T, T, F, F, T, T, T }, // 6
        { F, F, T, F, T, T, F, F }, // 7
        { T, T, T, F, T, T, T, T }, // 8
        { F, T, T, F, T, T, T, T }, // 9
        };

#include "Arduino.h"

/**
 * 获得数字
 */
bool* getNum(int num) {
    return nums[num];
}

void Led5161ASSub(int led[], int num, bool dot) {
    bool* isON = getNum(num);
    for (int i = 0; i < 8; i++) {
        if (isON[i]) {
            digitalWrite(led[i], HIGH);
        } else {
            digitalWrite(led[i], LOW);
        }
    }
}

void Led5161ASSubBreath(int led[], int num, int microTime, bool dot) {
    //breath up
    bool* isON = getNum(num);
    for (int i = 0; i <= 255; i++) {
        for (int j = 0; j < 8; j++) {
            if (isON[j]) {
                analogWrite(led[j], i);
            }
        }
        delayMicroseconds(microTime);
    }
    //breath down
    for (int i = 255; i >= 0; i--) {
        for (int j = 0; j < 8; j++) {
            if (isON[j]) {
                analogWrite(led[j], i);
            }
        }
        delayMicroseconds(microTime);
    }
}
