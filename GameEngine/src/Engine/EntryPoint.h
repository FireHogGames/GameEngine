#pragma once

#ifdef EN_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, int** argv) {
	printf("My engine");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}
#else
#error The engine only supports windows
#endif