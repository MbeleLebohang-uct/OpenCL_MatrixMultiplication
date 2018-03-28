/*
scalarprod_g - caluclate and time the scalar product

Windows version

EEE4084F prepated by S. Winberg 2017
*/

#include "stdafx.h"
#include "Timer.h"

LARGE_INTEGER clk_frequency, clk_tic;

void CPU_tic()
{
	QueryPerformanceFrequency(&clk_frequency);
	QueryPerformanceCounter(&clk_tic);
}

double CPU_toc() {
	LARGE_INTEGER clk_toc;
	QueryPerformanceCounter(&clk_toc);
	return (double)(clk_toc.QuadPart - clk_tic.QuadPart) * 1000.0 / clk_frequency.QuadPart;
}