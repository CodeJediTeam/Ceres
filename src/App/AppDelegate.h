#pragma once

#include <Common/Globals.h>
#include <System/IAppDelegate.h>

class AppDelegate final : public Babylon::System::IAppDelegate
{
public:
    virtual void OnInit() override;
    virtual void OnDeinit() override;
    virtual void Run() override;
};
