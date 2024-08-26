#include "Engpch.h"
#include "Application.h"
#include "Engine/Events/ApplicationEvent.h"
#include "Engine/Log.h"

Engine::Application::Application()
{

}

Engine::Application::~Application()
{

}

void Engine::Application::Run()
{
	Engine::WindowResizeEvent e(1208, 456);
	ENG_WARN(e);
	while (true);
}
