#include<iostream>
#include <string>

using namespace std;

class IButton{
    public:
        virtual void press() = 0;
};

class ITextBox{
    public:
        virtual void showText() = 0;
};

class WindowsButton : public IButton{
    public:
        void press(){
            cout<<"Pressing Windows Button"<<endl;
        }
};

class MacButton : public IButton{
    public:
        void press(){
            cout<<"Pressing Mac Button"<<endl;
        }
};

class WindowsTextBox : public ITextBox{
    public:
        void showText(){
            cout<<"Showing Windows TextBox"<<endl;
        }
};

class MacTextBox : public ITextBox{
    public:
        void showText(){
            cout<<"Showing Mac TextBox"<<endl;
        }
};

class IFactory{
    public:
        virtual IButton* createButton() = 0;
        virtual ITextBox* createTextBox() = 0;
};
class MacFactory : public IFactory{
    public:
        IButton* createButton(){
            return new MacButton();
        }
        ITextBox* createTextBox(){
            return new MacTextBox();
        }
};

class WindowsFactory : public IFactory{
    public:
        IButton* createButton(){
            return new WindowsButton();
        }
        ITextBox* createTextBox(){
            return new WindowsTextBox();
        }
};

class GUIAbstractFactory{
    public:
        static IFactory* CreateFactory(string ostype){
            if(ostype == "Windows"){
                return new WindowsFactory();
            }else if(ostype == "Mac"){
                return new MacFactory();
            }
            return new WindowsFactory();
        }
};


int main(){
    cout<<"Enter OS type: ";
    string osType;
    cin>>osType;
    IFactory *fact = GUIAbstractFactory::CreateFactory(osType);

    IButton *button = fact->createButton();
    ITextBox *textbox = fact->createTextBox();

    button->press();

    textbox->showText();

    return 0;
}