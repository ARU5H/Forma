#include <Forma.h>

class Sandbox : public Forma::Application {
public:
	Sandbox(){}
	~Sandbox(){}
};

Forma::Application* Forma::CreateApplication() {
	return new Sandbox();
}