#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab9.1/dod.cpp"
#include "../Lab9.1/var.cpp"
#include "../Lab9.1/sum.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			a = pow(x, 2 * n + 1) / (2 * n + 1);

			Assert::AreEqual(a, 0,0.1);
		}
	};
}
