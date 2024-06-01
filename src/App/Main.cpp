#include <App/Configurator.h>
#include <Common/Globals.h>
#include <System/Entry.h>

//BABYLON_ENTRY_POINT(App::Configurator)

int main(int argc, char** argv)
{
    std::cout << "Hello from App" << std::endl;
    Babylon::System::Core::Execute<App::Configurator>();
    return 0;
}
