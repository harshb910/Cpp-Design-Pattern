#include <iostream>
#include <string>
#include "desktop.hpp"

using namespace std;

void Desktop::setMonitor(string pMonitor) {
    monitor = pMonitor;
}

void Desktop::setKeyBoard(string pKeyBoard) {
    keyboard = pKeyBoard;
}

void Desktop::setMouse(string pMouse) {
    mouse = pMouse;
}

void Desktop::setSpeaker(string pSpeaker) {
    speaker = pSpeaker;
}

void Desktop::setRam(string pRam) {
    ram = pRam;
}

void Desktop::setProcessor(string pProcessor) {
    processor = pProcessor;
}

void Desktop::setMotherBoard(string pMotherBoard) {
    motherBoard = pMotherBoard;
}

void Desktop::showSpecs() {
    cout<<"---------------------------------------------------------------"<<endl;
    cout << "Monitor: " << monitor << endl
         << "Keyboard: " << keyboard << endl
         << "Mouse: " << mouse << endl
         << "Speaker: " << speaker << endl
         << "Ram: " << ram << endl
         << "Processor: " << processor << endl
         << "MotherBoard: " << motherBoard << endl;
    cout<<"---------------------------------------------------------------"<<endl;
}