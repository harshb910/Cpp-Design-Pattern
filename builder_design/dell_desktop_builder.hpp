#ifndef dell_desktop_builder_hpp
#define dell_desktop_builder_hpp

#include "desktop_builder.hpp"

class DellDesktopBuilder : public DesktopBuilder{
    public:
        void buildMonitor();
        void buildKeyboard();
        void buildMouse();
        void buildSpeaker();
        void buildRam();
        void buildProcessor();
        void buildMotherboard();
        Desktop* getDesktop(){return desktop;};
};

#endif