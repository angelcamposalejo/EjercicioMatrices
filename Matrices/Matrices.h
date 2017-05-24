#pragma once  //______________________________________ Matrices.h  
#include "Resource.h"
class Matrices : public Win::Dialog
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
	Win::Label lb2;
	Win::Label lb3;
	Win::Textbox tbxMaximo;
	Win::Label lb4;
	Win::Textbox tbxMaxPosition;
	Win::Label lb10;
	Win::Textbox tbxMinimo;
	Win::Label lb5;
	Win::Textbox tbxMinPosition;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(472);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(256);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Matrices";
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_WANTRETURN | ES_LEFT | ES_WINNORMALCASE, 12, 47, 271, 189, hWnd, 1000);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 294, 51, 110, 28, hWnd, 1001);
		lb2.Create(NULL, L"Introduce los elementos de la matriz separados por coma", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 11, 5, 272, 33, hWnd, 1002);
		lb3.Create(NULL, L"Maximo", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 297, 87, 79, 25, hWnd, 1003);
		tbxMaximo.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 377, 88, 88, 25, hWnd, 1004);
		lb4.Create(NULL, L"Posición Maximo", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 295, 126, 80, 32, hWnd, 1005);
		tbxMaxPosition.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 377, 129, 88, 25, hWnd, 1006);
		lb10.Create(NULL, L"Minimo", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 296, 172, 80, 25, hWnd, 1007);
		tbxMinimo.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 378, 176, 87, 25, hWnd, 1008);
		lb5.Create(NULL, L"Posición Minimo", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 296, 217, 80, 32, hWnd, 1009);
		tbxMinPosition.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 377, 221, 87, 25, hWnd, 1010);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxEntrada.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
		lb2.Font = fontArial014A;
		lb3.Font = fontArial014A;
		tbxMaximo.Font = fontArial014A;
		lb4.Font = fontArial014A;
		tbxMaxPosition.Font = fontArial014A;
		lb10.Font = fontArial014A;
		tbxMinimo.Font = fontArial014A;
		lb5.Font = fontArial014A;
		tbxMinPosition.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) { btCalcular_Click(e); return true; }
		return false;
	}
};
