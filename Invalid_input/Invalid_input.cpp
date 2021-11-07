#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Invalidinput
{
	TEST_CLASS(Invalidinput)
	{
	public:
		
		TEST_METHOD(Invalid_input)
		{
			bool ischar();
			if (isdigit(true));
			{
				printf("invalid");
			}
		}
	};
}
