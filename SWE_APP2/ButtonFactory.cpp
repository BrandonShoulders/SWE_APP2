#include "ButtonFactory.h"

wxButton* ButtonFactory::createButton(wxWindow* Parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size) {
	wxButton* NewBtn = new wxButton;
	return NewBtn;
}
wxButton* ButtonFactory::createNum1Btn(wxWindow* Parent) {
	wxButton* num1Btn;
	num1Btn = new wxButton(Parent, 1, "1", wxPoint(8, 350), wxSize(75, 75));
	return num1Btn;
}
wxButton* ButtonFactory::createNum2Btn(wxWindow* Parent) {
	wxButton* num2Btn;
	num2Btn = new wxButton(Parent, 2, "2", wxPoint(83, 350), wxSize(75, 75));
	return num2Btn;
}
wxButton* ButtonFactory::createNum3Btn(wxWindow* Parent) {
	wxButton* num3Btn;
	num3Btn = new wxButton(Parent, 3, "3", wxPoint(158, 350), wxSize(75, 75));
	return num3Btn;
}
wxButton* ButtonFactory::createNum4Btn(wxWindow* Parent) {
	wxButton* num4Btn;
	num4Btn = new wxButton(Parent, 4, "4", wxPoint(8, 275), wxSize(75, 75));
	return num4Btn;
}
wxButton* ButtonFactory::createNum5Btn(wxWindow* Parent) {
	wxButton* num5Btn;
	num5Btn = new wxButton(Parent, 5, "5", wxPoint(83, 275), wxSize(75, 75));
	return num5Btn;
}
wxButton* ButtonFactory::createNum6Btn(wxWindow* Parent) {
	wxButton* num6Btn;
	num6Btn = new wxButton(Parent, 6, "6", wxPoint(158, 275), wxSize(75, 75));
	return num6Btn;
}
wxButton* ButtonFactory::createNum7Btn(wxWindow* Parent) {
	wxButton* num7Btn;
	num7Btn = new wxButton(Parent, 7, "7", wxPoint(8, 200), wxSize(75, 75));
	return num7Btn;
}
wxButton* ButtonFactory::createNum8Btn(wxWindow* Parent) {
	wxButton* num8Btn;
	num8Btn = new wxButton(Parent, 8, "8", wxPoint(83, 200), wxSize(75, 75));
	return num8Btn;
}
wxButton* ButtonFactory::createNum9Btn(wxWindow* Parent) {
	wxButton* num9Btn;
	num9Btn = new wxButton(Parent, 9, "9", wxPoint(158, 200), wxSize(75, 75));
	return num9Btn;
}
wxButton* ButtonFactory::createNum0Btn(wxWindow* Parent) {
	wxButton* num0Btn;
	num0Btn = new wxButton(Parent, 10, "0", wxPoint(83, 425), wxSize(75, 75));
	return num0Btn;
}
wxButton* ButtonFactory::createAddBtn(wxWindow* Parent) {
	wxButton* addBtn;
	addBtn = new wxButton(Parent, 11, "+", wxPoint(233, 425), wxSize(75, 75));
	return addBtn;
}
wxButton* ButtonFactory::createSubtractBtn(wxWindow* Parent) {
	wxButton* subtractBtn;
	subtractBtn = new wxButton(Parent, 12, "-", wxPoint(233, 350), wxSize(75, 75));
	return subtractBtn;
}
wxButton* ButtonFactory::createMultiplyBtn(wxWindow* Parent) {
	wxButton* multiplyBtn;
	multiplyBtn = new wxButton(Parent, 13, "*", wxPoint(233, 275), wxSize(75, 75));
	return multiplyBtn;
}
wxButton* ButtonFactory::createDivideBtn(wxWindow* Parent) {
	wxButton* divideBtn;
	divideBtn = new wxButton(Parent, 14, "/", wxPoint(233, 200), wxSize(75, 75));
	return divideBtn;
}
wxButton* ButtonFactory::createModuloBtn(wxWindow* Parent) {
	wxButton* moduloBtn;
	moduloBtn = new wxButton(Parent, 15, "%", wxPoint(233, 130), wxSize(75, 75));
	return moduloBtn;
}
wxButton* ButtonFactory::createSinBtn(wxWindow* Parent) {
	wxButton* sinBtn;
	sinBtn = new wxButton(Parent, 16, "sin", wxPoint(8, 165), wxSize(75, 35));
	return sinBtn;
}
wxButton* ButtonFactory::createCosBtn(wxWindow* Parent) {
	wxButton* cosBtn;
	cosBtn = new wxButton(Parent, 17, "cos", wxPoint(83, 165), wxSize(75, 35));
	return cosBtn;
}
wxButton* ButtonFactory::createTanBtn(wxWindow* Parent) {
	wxButton* tanBtn;
	tanBtn = new wxButton(Parent, 18, "tan", wxPoint(158, 165), wxSize(75, 35));
	return tanBtn;
}
wxButton* ButtonFactory::createClearBtn(wxWindow* Parent) {
	wxButton* clearBtn;
	clearBtn = new wxButton(Parent, 19, "C", wxPoint(8, 130), wxSize(75, 35));
	return clearBtn;
}
wxButton* ButtonFactory::creaeteDelBtn(wxWindow* Parent) {
	wxButton* delBtn;
	delBtn = new wxButton(Parent, 20, "del", wxPoint(8, 425), wxSize(75, 75));
	return delBtn;
}
wxButton* ButtonFactory::createEqualsBtn(wxWindow* Parent) {
	wxButton* equalBtn;
	equalBtn = new wxButton(Parent, 21, "=", wxPoint(158, 425), wxSize(75, 75));
	return equalBtn;
}
wxButton* ButtonFactory::createNegateBtn(wxWindow* Parent) {
	wxButton* negateBtn;
	negateBtn = new wxButton(Parent, 22, "(-) ", wxPoint(83, 130), wxSize(75, 35));
	return negateBtn;
}