#include "stdafx.h"  //________________________________________ Matrices.cpp
#include "Matrices.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Matrices app;
	return app.BeginDialog(IDI_Matrices, hInstance);
}

void Matrices::Window_Open(Win::Event& e)
{
}

void Matrices::btCalcular_Click(Win::Event& e)
{
}

