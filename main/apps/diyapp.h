#ifndef DIYAPP_H
#define DIYAPP_H

#include "st7789.h"

#define APP_COUNT 2

typedef void (*AppFn)();
typedef struct {
    uint8_t inited;
    uint8_t plugon;
    TFT_t *screen;
} AppInfo;


extern AppFn App_init[APP_COUNT];
extern AppFn App_action[APP_COUNT];
extern AppInfo App_info[APP_COUNT];
extern int g_appindex;
extern int g_mpu_not_use;

void awake_init();
void awake_action();
void mpu_init();
void mpu_action();

#endif /* DIYAPP_H */
