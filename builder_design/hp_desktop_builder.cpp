#include<iostream>
#include"hp_desktop_builder.hpp"

using namespace std;

void HPDesktopBuilder::buildMonitor() {
    desktop->setMonitor("HP Monitor");
}

void HPDesktopBuilder::buildKeyboard() {
    desktop->setKeyBoard("HP Keyboard");
}

void HPDesktopBuilder::buildMouse() {
    desktop->setMouse("HP Mouse");
}

void HPDesktopBuilder::buildSpeaker() {
    desktop->setSpeaker("HP Speaker");
}

void HPDesktopBuilder::buildRam(){
    desktop->setRam("HP Ram");
}

void HPDesktopBuilder::buildProcessor(){
    desktop->setProcessor("HP Processor");
}

void HPDesktopBuilder::buildMotherboard(){
    desktop->setMotherBoard("HP Motherboard");
}