#pragma once

#include <Common/Globals.h>
#include <System/IConfigurator.h>

namespace App
{

class Configurator final : public Babylon::System::IConfigurator
{
public:
    Configurator();
};

} // namespace App
