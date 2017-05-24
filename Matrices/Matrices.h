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
	void Producto(const MATRIX&entradaA, const MATRIX&entradaB, MATRIX&salida);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxEntrada;
	Win::Button btCalcular;
	Win::Label lb2;
	Win::Textbox tbxEntrada2;
	Win::Textbox tbxSalida;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(601);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(246);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Matrices";
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_WANTRETURN | ES_LEFT | ES_WINNORMALCASE, 12, 47, 130, 189, hWnd, 1000);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 340, 113, 110, 28, hWnd, 1001);
		lb2.Create(NULL, L"Introduce los elementos de la matriz separados por coma", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 11, 5, 272, 33, hWnd, 1002);
		tbxEntrada2.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE | ES_WANTRETURN | ES_LEFT | ES_WINNORMALCASE, 211, 42, 127, 196, hWnd, 1003);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 466, 42, 128, 197, hWnd, 1004);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxEntrada.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxEntrada2.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
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
