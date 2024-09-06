#include <CC.h>

class Beach : public CoconutCream::Application {
public:
	Beach()
	{

	}

	~Beach()
	{

	}
};

CoconutCream::Application* CoconutCream::CreateApplication()
{
	return new Beach();
}