#pragma once
#include "wx/wx.h"



static class ButtonFactory : public wxFrame
{
private:
	wxButton* createButton(wxWindow* Parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size);

	wxButton* num1 = nullptr;
	wxButton* num2 = nullptr;
	wxButton* num3 = nullptr;
	wxButton* num4 = nullptr;
	wxButton* num5 = nullptr;
	wxButton* num6 = nullptr;
	wxButton* num7 = nullptr;
	wxButton* num8 = nullptr;
	wxButton* num9 = nullptr;
	wxButton* num0 = nullptr;
	wxButton* addBtn = nullptr;
	wxButton* subtractBtn = nullptr;
	wxButton* multiplyBtn = nullptr;
	wxButton* divideBtn = nullptr;
	wxButton* moduloBtn = nullptr;
	wxButton* sinBtn = nullptr;
	wxButton* cosBtn = nullptr;
	wxButton* tanBtn = nullptr;
	wxButton* negateBtn = nullptr;
	wxButton* deleteBtn = nullptr;
	wxButton* clearBtn = nullptr;
	wxButton* equalBtn = nullptr;

public:
	static wxButton* createNum0Btn(wxWindow* Parent);
	static wxButton* createNum1Btn(wxWindow* Parent);
	static wxButton* createNum2Btn(wxWindow* Parent);
	static wxButton* createNum3Btn(wxWindow* Parent);
	static wxButton* createNum4Btn(wxWindow* Parent);
	static wxButton* createNum5Btn(wxWindow* Parent);
	static wxButton* createNum6Btn(wxWindow* Parent);
	static wxButton* createNum7Btn(wxWindow* Parent);
	static wxButton* createNum8Btn(wxWindow* Parent);
	static wxButton* createNum9Btn(wxWindow* Parent);
	static wxButton* createNegateBtn(wxWindow* Parent);
	static wxButton* createAddBtn(wxWindow* Parent);
	static wxButton* createSubtractBtn(wxWindow* Parent);
	static wxButton* createMultiplyBtn(wxWindow* Parent);
	static wxButton* createDivideBtn(wxWindow* Parent);
	static wxButton* createModuloBtn(wxWindow* Parent);
	static wxButton* createSinBtn(wxWindow* Parent);
	static wxButton* createCosBtn(wxWindow* Parent);
	static wxButton* createTanBtn(wxWindow* Parent);
	static wxButton* createClearBtn(wxWindow* Parent);
	static wxButton* creaeteDelBtn(wxWindow* Parent);
	static wxButton* createEqualsBtn(wxWindow* Parent);
};

