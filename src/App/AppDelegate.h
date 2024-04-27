#pragma once

#include <Common/Globals.h>
#include <Core/IAppDelegate.h>

class AppDelegate final : public BS::Core::IAppDelegate
{
public:
    virtual void OnInit() override;
    virtual void OnDeinit() override;
    virtual void Run() override;
};
