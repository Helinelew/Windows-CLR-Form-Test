#include "MyForm.h"
using namespace Project2;
[STAThread]
int main(array<System::String^>^args)
{
	Application::EnableVisualStyles();
	Application::Run(gcnew MyForm());
	return 0;
}
