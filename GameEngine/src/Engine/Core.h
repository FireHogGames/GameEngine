#pragma once

#if (_MSC_VER >= 1915)
#define no_init_all deprecated
#endif

#ifdef EN_PLATFORM_WINDOWS
	#ifdef EN_BUILD_DLL
		#define Engine_API __declspec(dllexport)
	#else
		#define Engine_API __declspec(dllimport)
	#endif
#else
	#error The engine only supports windows 
#endif