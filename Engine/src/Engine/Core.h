#pragma once

#ifdef ENG_PLATFORM_WINDOWS
	#ifdef ENG_BUILD_DLL
		#define ENG_API __declspec(dllexport)
	#else
		#define ENG_API __declspec(dllimport)
	#endif // ENG_BUILD_DLL
#else
	#error OS not supported!

#endif // ENG_PLATFORM_WINDOWS
