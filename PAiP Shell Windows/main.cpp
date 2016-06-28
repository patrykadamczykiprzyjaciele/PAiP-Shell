///G£ÓWNY PLIK PSH
//INCLUDES
#include "PAIP_SHELL\PAiP_Shell.h"
//USING NAMESPACE
using namespace PAiP_Shell;
//MAIN
int main(int argc, char* argv[])
{
	Preconfigure::start();

	Kernel::loop();

	return 0;
}