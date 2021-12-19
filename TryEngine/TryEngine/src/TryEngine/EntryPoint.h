#pragma once

#ifdef TE_PLATFORM_WINDOWS

extern TryEngine::Application* TryEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hello\n");

	TryEngine::Log::Init();
	TE_CORE_WARN("LogWarn");
	int a = 5;
	TE_INFO("LogInfo {0}", a);

	auto app = TryEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif
