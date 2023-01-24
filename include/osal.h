#pragma once


#ifdef _WIN32
  #define OSAL_EXPORT __declspec(dllexport)
#else
  #define OSAL_EXPORT
#endif

OSAL_EXPORT void osal();
