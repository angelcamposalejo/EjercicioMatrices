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
}

void Matrices::btCalcular_Click(Win::Event& e)
{
	MATRIX entrada;
	Sys::Convert::ToMatrix(tbxEntrada.Text, entrada);
	const int rows = entrada.size();
	const int cols = (rows == 0) ? 0 : entrada[0].size();
	int i, j;
	int maxR = 0;
	int maxC = 0;
	double max = entrada[0][0];
	int minR = 0;
	int minC = 0;
	double min = entrada[0][0];
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (entrada[i][j] > max)
			{
				max = entrada[i][j];
				maxR = i;
				maxC = j;
			}
			else
			{
				if (entrada[i][j] < min)
				{
					min = entrada[i][j];
					minR = i;
					minC = j;
				}
			}
		}
	}
	tbxMaximo.DoubleValue = max;
	wstring texto;
	Sys::Format(texto, L"(%d,%d)", maxR, maxC);
	tbxMaxPosition.Text = texto;
}

