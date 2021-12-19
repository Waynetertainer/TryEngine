#pragma once

#include "Core.h"

namespace TryEngine
{
	class TRYENGINE_API Application
	{
	public:
		Application();


		virtual ~Application();


		void Run();
	};

	Application* CreateApplication();
}

