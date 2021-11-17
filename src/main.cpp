#include "../include/basic.h"

int main()
{
    Menu *const menu = new Menu();
    menu->init();

    delete menu;

    return 0;
}