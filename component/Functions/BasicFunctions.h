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
 * 获得数字长度
 */
int size(int array[]) {
    int size = sizeof(array) / sizeof(array[0]);
    return size;
}

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
 * @led:引脚号
 * @time:步长延迟,总时间为time * 256 ms
 */
void breathUp(int led, int time) {
    for (int i = 0; i <= 255; i++) {
        analogWrite(led, i);
        delay(time);
    }
}

/**
 * 逐渐点亮
 * @leds:引脚号数组
 * @time:步长延迟,总时间为time * 256 ms
 */
void breathUp(int leds[], int time) {
    for (int i = 0; i <= 255; i++) {
        for (int j = 0; j < size(leds); j++) {
            analogWrite(leds[j], i);
        }
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
 * 逐渐熄灭
 * @led:引脚
 * @time:步长
 */
void breathDown(int leds[], int time) {
    for (int i = 255; i >= 0; i--) {
        for (int j = 0; j < size(leds); j++) {
            analogWrite(leds[j], i);
        }
        delay(time);
    }
}
