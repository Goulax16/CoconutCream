#pragma once

#ifdef CC_PLATFORM_WINDOWS

extern CoconutCream::Application* CoconutCream::CreateApplication();

int main(int argc, char** argv)
{
	auto app = CoconutCream::CreateApplication();
	app->Run();
	delete app;
}

#endif