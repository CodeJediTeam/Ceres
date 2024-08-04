#pragma once

#include <System/IAppDelegate.h>

namespace App
{

class AppDelegate final : public Babylon::System::IAppDelegate
{
public:
    void Init() override;
    void DeInit() override;
    void Run() override;
};

} // namespace App
