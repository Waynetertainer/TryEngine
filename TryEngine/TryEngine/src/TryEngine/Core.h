#pragma once

#ifdef TE_PLATFORM_WINDOWS
	#ifdef TE_BUILD_DLL
		#define TRYENGINE_API __declspec(dllexport)
	#else
		#define TRYENGINE_API __declspec(dllimport)
	#endif
#else
	#error Only Windows
#endif

