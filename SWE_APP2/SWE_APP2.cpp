#include "SWE_App2.h"
#include "Window.h"


wxIMPLEMENT_APP(App);

bool App::OnInit()
{

	window = new Window();

	window->Show();

	return true;
}
