#pragma once

#ifdef TE_PLATFORM_WINDOWS

extern TryEngine::Application* TryEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hello\n");
	auto app = TryEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif
