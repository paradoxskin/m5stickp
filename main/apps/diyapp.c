#include "apps/diyapp.h"

int g_mpu_not_use = 0;
int g_appindex = -1;

AppInfo App_info[APP_COUNT];
AppFn App_init[APP_COUNT] = {&awake_init, &mpu_init};
AppFn App_action[APP_COUNT] = {&awake_action, &mpu_action};
