#include <pch.h>

#include "AppDelegate.h"

namespace App
{

void AppDelegate::OnAppSetup()
{
    std::cout << "AppDelegate::Init()" << std::endl;
}

void AppDelegate::OnAppTeardown()
{
    std::cout << "AppDelegate::DeInit()" << std::endl;
}

void AppDelegate::OnAppRun()
{
    std::cout << "Hello from App" << std::endl;
}

} // namespace App
