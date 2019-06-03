#pragma once

#include "Core.h"

namespace Engine {
	class Engine_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be degined in client
	Application* CreateApplication();
}