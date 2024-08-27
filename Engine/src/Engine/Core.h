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

#ifdef ENG_ENABLE_ASSERTS
	#define ENG_ASSERT(x, ...) {if(!(x)) { HZ_ERROR("Assertion failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define ENG_CORE_ASSERT(x, ...) {if(!(x)) { HZ_CORE_ERROR("Assertion failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define ENG_ASSERT(x, ...)
	#define ENG_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)
