#pragma once

#ifdef ENG_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(const int argc, const char** argv)
{
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}

#else

	#error OS not supported!

#endif // ENG_PLATFORM_WINDOWS
