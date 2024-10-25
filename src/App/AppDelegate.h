#pragma once

#include <System/IAppDelegate.h>

namespace App
{

class AppDelegate final : public Babylon::System::IAppDelegate
{
public:
    void OnAppSetup() override;
    void OnAppTeardown() override;
    void OnAppRun() override;
};

} // namespace App
