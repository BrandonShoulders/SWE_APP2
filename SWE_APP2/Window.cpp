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


CalculatorProcessor* processer;

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
	delete textbox;
}
void Window::onBtnClicked(wxCommandEvent& e) {

	int id = e.GetId();
	std::string token = textbox->GetValue().ToStdString();

	
	switch (id) {
	case 1:
		textbox->AppendText(num1->GetLabel());
	    break;
	case 2:
		textbox->AppendText(num2->GetLabel());
		break;
	case 3:
		textbox->AppendText(num3->GetLabel());
		break;
	case 4:
		textbox->AppendText(num4->GetLabel());
		break;
	case 5:
		textbox->AppendText(num5->GetLabel());
		break;
	case 6:
		textbox->AppendText(num6->GetLabel());
		break;
	case 7:
		textbox->AppendText(num7->GetLabel());
		break;
	case 8:
		textbox->AppendText(num8->GetLabel());
		break;
	case 9:
		textbox->AppendText(num9->GetLabel());
		break;
	case 10:
		textbox->AppendText(num0->GetLabel());
		break;
	case 11:
		textbox->AppendText(addBtn->GetLabel());
		break;
	case 12:
		textbox->AppendText(subtractBtn->GetLabel());
		break;
	case 13:
		textbox->AppendText(multiplyBtn->GetLabel());
		break;
	case 14:
		textbox->AppendText(divideBtn->GetLabel());
		break;
	case 15:
		textbox->AppendText(moduloBtn->GetLabel());
		break;
	case 16:
		textbox->AppendText(sinBtn->GetLabel());
		break;
	case 17:
		textbox->AppendText(cosBtn->GetLabel());
		break;
	case 18:	 
		break;
	case 19:
		clearfunction();
		break;
	case 20:
		delfunction(token);		
		break;
	case 21:
		processer->evaluate(token);
		break;
	case 22:
		textbox->AppendText(negateBtn->GetLabel());
		break;
	default: 
		textbox->AppendText(textbox->GetLabel());
		break;
	}


}
void Window::onExit(wxCommandEvent& e) {

	this->Close();
}

std::string Window::delfunction(std::string str) {

	std::string newstring;
	if (!str.empty())
	{
		str.pop_back();
		str = newstring;
	}
	return newstring;
}

void Window::clearfunction() 
{
	if (!textbox->IsEmpty()) {
		textbox->Clear();
	}
}
