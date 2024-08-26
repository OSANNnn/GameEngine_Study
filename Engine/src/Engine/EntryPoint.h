#pragma once

#ifdef ENG_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(const int argc, const char** argv)
{
	int x = 6; //delete this
	Engine::Log::Init();
	ENG_CORE_WARN("Init LOG");//delete this
	ENG_TRACE("APP Log init var = {0}", x);//delete this

	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}

#else

	#error OS not supported!

#endif // ENG_PLATFORM_WINDOWS
