#include <Helix.h>


class Sandbox : public Helix::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

int main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}