#include "TryEngine.h"

class Sandbox : public TryEngine::Application 
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

TryEngine::Application* TryEngine::CreateApplication() {
	return new Sandbox();
}