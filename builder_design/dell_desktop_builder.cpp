#include<iostream>
#include"dell_desktop_builder.hpp"
#include <string>

using namespace std;

void DellDesktopBuilder::buildMonitor() {
    desktop->setMonitor(string("Dell Monitor"));
}

void DellDesktopBuilder::buildKeyboard() {
    desktop->setKeyBoard(string("Dell Keyboard"));
}

void DellDesktopBuilder::buildMouse() {
    desktop->setMouse(string("Dell Mouse"));
}

void DellDesktopBuilder::buildSpeaker() {
    desktop->setSpeaker(string("Dell Speaker"));
}

void DellDesktopBuilder::buildRam(){
    desktop->setRam(string("Dell Ram"));
}

void DellDesktopBuilder::buildProcessor(){
    desktop->setProcessor(string("Dell Processor"));
}

void DellDesktopBuilder::buildMotherboard(){
    desktop->setMotherBoard(string("Dell Motherboard"));
}