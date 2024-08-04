#include "AppDelegate.h"

#include <iostream>

namespace App
{

void AppDelegate::Init()
{
    std::cout << "AppDelegate::Init()" << std::endl;
}

void AppDelegate::DeInit()
{
    std::cout << "AppDelegate::DeInit()" << std::endl;
}

void AppDelegate::Run()
{
    std::cout << "Hello from App" << std::endl;
}

} // namespace App
