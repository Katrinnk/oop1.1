#include "pch.h"
#include "CppUnitTest.h"
#include "Z:/university/ооп/програми/1.1/Point.h"
#include "Z:/university/ооп/програми/1.1/Point.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Point k;
			double x, y;
			k.Init(3, 2);
			int test = k.Init(3, 2);
			Assert::AreEqual(test, 1);
		}
	};
}

