#pragma once

#include "Core.h"

namespace Forma {

	class FORMA_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	// To be defined in client
	Application* CreateApplication();

}