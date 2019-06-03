#pragma once

#ifdef EN_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, int** argv) {

	Engine::Log::Init();
	EN_CORE_WARN("Core log engine initialized");
	EN_INFO("Client log engine initialized");

	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}
#else
#error The engine only supports windows
#endif