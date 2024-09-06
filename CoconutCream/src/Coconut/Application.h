#pragma once

#include "Core.h"

namespace CoconutCream {

	class CC_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}