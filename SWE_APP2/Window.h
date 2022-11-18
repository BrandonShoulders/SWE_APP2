#pragma once
#include "wx/wx.h"




class Window: public wxFrame
{

private:
	wxTextCtrl* textbox = nullptr;
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

	  Window();
	  ~Window();


};

