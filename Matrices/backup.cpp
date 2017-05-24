#include "stdafx.h"  //________________________________________ Matrices.cpp
#include "Matrices.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Matrices app;
	return app.BeginDialog(IDI_Matrices, hInstance);
}

void Matrices::Window_Open(Win::Event& e)
{
	//#ifdef _DEBUG
	//tbxEntrada.Text = L"1,2,3\r\n4,5,6\r\n7,8,9";
	//#endif
	this->radioSuma.Checked = true;
	this->radioResta.Checked = false;
}

void Matrices::btCalcular_Click(Win::Event& e)
{
	MATRIX entradaA;
	MATRIX entradaB;
	MATRIX salida;
	Sys::Convert::ToMatrix(tbxEntrada.Text, entradaA);
	Sys::Convert::ToMatrix(tbxEntrada2.Text, entradaB);
	if (radioSuma.Checked == true)
	{
		Suma(entradaA, entradaB, salida);
	}
	else
	{

	}
}
void Matrices::Suma(const MATRIX&entradaA, const MATRIX&entradaB, MATRIX&salida)
{
	wstring texto;
	const int rowsA = entradaA.size();
	const int colsA = (rowsA == 0) ? 0 : entradaA[0].size();
	const int rowsB = entradaB.size();
	const int colsB = (rowsB == 0) ? 0 : entradaB[0].size();
	if (rowsA != rowsB || colsA != colsB)
	{
		tbxEntrada.ShowBalloonTip(L"MatOper", L"Las matrices deben ser del mismo tamaño", TTI_ERROR);
		return;
	}
	int i, j;
	salida.resize(rowsA);
	for (i = 0; i < rowsA; i++)
	{
		salida[i].resize(colsA);
	}
	for (i = 0; i < rowsA; i++)
	{
		for (j = 0; j < colsA; j++)
		{
			salida[i][j] = entradaA[i][j] + entradaB[i][j];
		}
	}
	Sys::Convert::ToString(salida, texto);
	tbxSalida.Text = texto;
}

