#include "Window.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)
EVT_MENU(wxID_EXIT, Window::onExit)
EVT_BUTTON(1, Window::onBtnClicked)
EVT_BUTTON(2, Window::onBtnClicked)
EVT_BUTTON(3, Window::onBtnClicked)
EVT_BUTTON(4, Window::onBtnClicked)
EVT_BUTTON(5, Window::onBtnClicked)
EVT_BUTTON(6, Window::onBtnClicked)
EVT_BUTTON(7, Window::onBtnClicked)
EVT_BUTTON(8, Window::onBtnClicked)
EVT_BUTTON(9, Window::onBtnClicked)
EVT_BUTTON(10, Window::onBtnClicked)
EVT_BUTTON(11, Window::onBtnClicked)
EVT_BUTTON(12, Window::onBtnClicked)
EVT_BUTTON(13, Window::onBtnClicked)
EVT_BUTTON(14, Window::onBtnClicked)
EVT_BUTTON(15, Window::onBtnClicked)
EVT_BUTTON(16, Window::onBtnClicked)
EVT_BUTTON(17, Window::onBtnClicked)
EVT_BUTTON(18, Window::onBtnClicked)
EVT_BUTTON(19, Window::onBtnClicked)
EVT_BUTTON(20, Window::onBtnClicked)
EVT_BUTTON(21, Window::onBtnClicked)
EVT_BUTTON(22, Window::onBtnClicked)
EVT_BUTTON(23, Window::onBtnClicked)
wxEND_EVENT_TABLE();






//Constructor for cpp file.
//The wxFrame takes in 5 parameters( Parent object ,ID tag , Title , where to create window(starting point from upper left screen, window width/height)
Window::Window() : wxFrame(nullptr, wxID_ANY, "Brandon's Calculator App", wxPoint(250, 250), wxSize(345, 550)) {



	 textbox = new wxTextCtrl(this, 23, " ", wxPoint(8, 8), wxSize(300, 75));
	 num1 = ButtonFactory::createNum1Btn(this);
	 num2 = ButtonFactory::createNum2Btn(this);
	 num3 = ButtonFactory::createNum3Btn(this);
	 num4 = ButtonFactory::createNum4Btn(this);
	 num5 = ButtonFactory::createNum5Btn(this);
	 num6 = ButtonFactory::createNum6Btn(this);
	 num7 = ButtonFactory::createNum7Btn(this);
	 num8 = ButtonFactory::createNum8Btn(this);
	 num9 = ButtonFactory::createNum9Btn(this);
     num0 = ButtonFactory::createNum0Btn(this);
	 addBtn = ButtonFactory::createAddBtn(this);
	 subtractBtn = ButtonFactory::createSubtractBtn(this);
	 multiplyBtn = ButtonFactory::createMultiplyBtn(this);
	 divideBtn = ButtonFactory::createDivideBtn(this);
	 moduloBtn = ButtonFactory::createModuloBtn(this);
	 sinBtn = ButtonFactory::createSinBtn(this);
	 cosBtn = ButtonFactory::createCosBtn(this);
	 tanBtn = ButtonFactory::createTanBtn(this);
	 negateBtn = ButtonFactory::createNegateBtn(this);
	 deleteBtn = ButtonFactory::creaeteDelBtn(this);
	 clearBtn = ButtonFactory::createClearBtn(this);
	 equalBtn = ButtonFactory::createEqualsBtn(this);

}



Window::~Window() {

}
void onBtnClick(wxCommandEvent& e) {

	int id = e.GetId();

	switch (id) {
	case 1:

	    break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	case 6:

		break;
	case 7:

		break;
	case 8:

		break;
	case 9:

		break;
	case 10:

		break;
	case 11:

		break;
	case 12:

		break;
	case 13:

		break;
	case 14:

		break;
	case 15:

		break;
	case 16:

		break;
	case 17:

		break;
	case 18:

		break;
	case 19:

		break;
	case 20:

		break;
	case 21:

		break;
	case 22:

		break;
	case 23:

		break;
	}






}
void Window::onExit(wxCommandEvent& e) {

	this->Close();
}

void Window::delfuntion() {

}

void Window::clearfuntion() 
{
	if (!textbox->IsEmpty()) {
		textbox->Clear();
	}
}
