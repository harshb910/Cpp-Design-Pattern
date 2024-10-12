#ifndef desktop_director_hpp
#define desktop_director_hpp

#include "desktop_builder.hpp"

using namespace std;

class DesktopDirector {
    private:
        DesktopBuilder *desktopBuilder;
    public:
        DesktopDirector(DesktopBuilder *builder) {
            desktopBuilder = builder;
        }
        Desktop* constructDesktop() {
            desktopBuilder->buildMotherboard();
            desktopBuilder->buildMonitor();
            desktopBuilder->buildSpeaker();
            desktopBuilder->buildRam();
            desktopBuilder->buildProcessor();
            desktopBuilder->buildKeyboard();
            desktopBuilder->buildMouse();
            return desktopBuilder->getDesktop();
        }
        Desktop* getDesktopBuilder() {
            return desktopBuilder->getDesktop();
        }
};


#endif