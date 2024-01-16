#pragma once

#ifdef HX_PLATFORM_WINDOWS

extern Helix::Application* Helix::CreateApplication();

int main(int argc, char** argv)
{
	printf("Helix Engine Starting...");
	auto app = Helix::CreateApplication();
	app->Run();
	delete app;
}

#endif