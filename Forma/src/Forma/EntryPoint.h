#pragma once

#ifdef FM_PLATFORM_WINDOWS

extern Forma::Application* Forma::CreateApplication();

int main(int argc, char** argv) {
	auto app = Forma::CreateApplication();
	app->Run();
	delete app;
}

#endif