#include "stdafx.h"
#include "OpenCL.h"

bool OpenCL_Init(const char * Vendor)
{
	return false;
}

void OpenCL_Destroy() {

}

bool OpenCL_LoadKernel(const char * Filename, const char * Function)
{
	return false;
}

cl_mem OpenCL_CreateBuffer(cl_uint Argument, cl_mem_flags Flags, size_t Size)
{
	return cl_mem();
}

void OpenCL_FreeBuffer(cl_mem Buffer)
{
}

bool OpenCL_ConstantInt(cl_uint Argument, int Value)
{
	return false;
}

bool OpenCL_ReadData(cl_mem Buffer, size_t Size, void * Data)
{
	return false;
}

bool OpenCL_WriteData(cl_mem Buffer, size_t Size, void * Data)
{
	return false;
}

bool OpenCL_Run(int N, size_t * LocalSize)
{
	return false;
}

void OpenCL_PrepareLocalSize(int N, size_t * LocalSize)
{
}
