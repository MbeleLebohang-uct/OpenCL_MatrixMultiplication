#pragma once

#ifndef OPENCL_H
#define OPENCL_H

/*****************************************************************
 *						Macros
 *****************************************************************/
#ifndef bool
	#define bool  char
	#define true  1
	#define false 0
#endif

 /*****************************************************************
  *						Includes
  *****************************************************************/

  /*****************************************************************
  *						Function Declarations
  *****************************************************************/
bool OpenCL_Init(const char* Vendor);
void OpenCL_Destroy();

bool OpenCL_LoadKernel(const char* Filename, const char* Function);

cl_mem OpenCL_CreateBuffer(cl_uint Argument, cl_mem_flags Flags, size_t Size);
void   OpenCL_FreeBuffer(cl_mem Buffer);

bool OpenCL_ConstantInt(cl_uint Argument, int Value);

bool OpenCL_ReadData(cl_mem Buffer, size_t Size, void* Data);
bool OpenCL_WriteData(cl_mem Buffer, size_t Size, void* Data);

bool OpenCL_Run(int N, size_t* LocalSize);

void OpenCL_PrepareLocalSize(int N, size_t* LocalSize);


#endif // !OPENCL_H


