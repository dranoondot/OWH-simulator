#include "touch.h"
#include <iostream>

Touch::Touch(std::string n)
{
    FileName(n);
}

Touch::~Touch()
{
}

//Create File
void Touch::FileName(std::string fn)
{
    file = fn;
}

/*
prints FileName
Used for ls.cpp
*/
std::string Touch::RetFile()
{
    return file;
}

//Will be updated soon
