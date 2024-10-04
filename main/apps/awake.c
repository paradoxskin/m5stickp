#include "apps/diyapp.h"
#include "parameter.h"
#include "axp192.h"

void awake_init()
{
    AppInfo *appinfo = &App_info[g_appindex];
    if (appinfo->inited == 0) {
        appinfo->inited = 1;
    }
    lcdFillScreen(appinfo->screen, BLACK);
    lcdDrawLine(appinfo->screen, 0, 0, 135, 240, RED);
    return;
}

void awake_action()
{
    AppInfo *appinfo = &App_info[g_appindex];
    if (appinfo->plugon) {
        AXP192_ScreenBreath(0);
    } else {
        AXP192_ScreenBreath(9);
    }
    appinfo->plugon ^= 1;
    return;
}
