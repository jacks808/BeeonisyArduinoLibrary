/*
 * Functions.h
 *
 *  Created on: 2014年10月30日
 *      Author: Keen
 *      Use case:用于封装常用函数
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#endif /* FUNCTIONS_H_ */

#include "Arduino.h"

/**
 * 高低电压交替
 * @led:引脚号
 * @time:延迟时间
 * ps:执行时间为:time * 2
 */
void flash(int led, int time) {
    digitalWrite(led, HIGH);
    delay(time);
    digitalWrite(led, LOW);
    delay(time);
}
/**
 * 逐渐点亮
 */
void breathUp(int led, int time) {
    for (int i = 0; i <= 255; i++) {
        analogWrite(led, i);
        delay(time);
    }
}
/**
 * 逐渐熄灭
 * @led:引脚
 * @time:步长
 */
void breathDown(int led, int time) {
    for (int i = 255; i >= 0; i--) {
        analogWrite(led, i);
        delay(time);
    }
}

/**
 * 5161AS型共阴极接线方式显示数字
 * @led:引脚
 * @num:要显示的数字
 * @dot:显示小数点
 */
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
