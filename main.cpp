// main.cpp
#include "MainUI.h"

int main() {
    MainUI ui;
    while (true) {
        ui.displayMenu();
        ui.inputChoice();
    }
    return 0;
}
