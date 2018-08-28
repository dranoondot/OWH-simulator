#ifndef TOUCH_H
#define TOUCH_H
#include <iostream>

class Touch
{
    public:
        Touch(std::string);
        ~Touch();
        void FileName(std::string);
        std::string RetFile();
    private:
        std::string file;
};

#endif
//Will Uppdate soon...
