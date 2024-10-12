#include<iostream>
#include"dell_desktop_builder.hpp"
#include"hp_desktop_builder.hpp"
#include"desktop_director.hpp"

using namespace std;

int main(){

    HPDesktopBuilder *hpDesktopBuilder = new HPDesktopBuilder();
    DellDesktopBuilder *dellDesktopBuilder = new DellDesktopBuilder();

    DesktopDirector *director = new DesktopDirector(dellDesktopBuilder);
    Desktop *dellDesktop = director->constructDesktop();
    cout << "Dell Desktop: " << endl;
    dellDesktop->showSpecs();

    director = new DesktopDirector(hpDesktopBuilder);
    Desktop *hpDesktop = director->constructDesktop();
    cout << "HP Desktop: " << endl;
    hpDesktop->showSpecs();

    return 0;
}