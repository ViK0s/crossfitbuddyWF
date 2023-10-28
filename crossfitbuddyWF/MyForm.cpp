#include "MyForm.h"
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace crossfitbuddyWF;


[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew MyForm());
	return 0;
}