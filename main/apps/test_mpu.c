#include "apps/diyapp.h"
#include "parameter.h"
#include "axp192.h"

void mpu_init()
{
    AppInfo *appinfo = &App_info[g_appindex];
    if (appinfo->inited == 0) {
        appinfo->inited = 1;
    }
    lcdFillScreen(appinfo->screen, BLACK);
    g_mpu_not_use = appinfo->plugon ^1;
    return;
}

void mpu_action()
{
    AppInfo *appinfo = &App_info[g_appindex];
    g_mpu_not_use = appinfo->plugon;
    appinfo->plugon ^= 1;
    return;
}
