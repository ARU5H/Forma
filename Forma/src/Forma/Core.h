#pragma once

#ifdef FM_PLATFORM_WINDOWS
	#ifdef FM_BUILD_DLL
		#define FORMA_API __declspec(dllexport)
	#else
		#define FORMA_API __declspec(dllimport)
	#endif
#else
	#error Forma only supports Windows!
#endif