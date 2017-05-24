#pragma once  //______________________________________ Matrices.h  
#include "Resource.h"
class Matrices: public Win::Dialog
{
public:
	Matrices()
	{
	}
	~Matrices()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxEntrada;
	Win::Button btCalcular;
	Win::Label lb1;
	Win::Textbox tbxSalida;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(411);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(248);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Matrices";
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_WANTRETURN | ES_LEFT | ES_WINNORMALCASE, 12, 12, 271, 189, hWnd, 1000);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 294, 16, 110, 28, hWnd, 1001);
		lb1.Create(NULL, L"Suma", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 14, 215, 74, 25, hWnd, 1002);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 87, 216, 196, 25, hWnd, 1003);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxEntrada.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
		lb1.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
