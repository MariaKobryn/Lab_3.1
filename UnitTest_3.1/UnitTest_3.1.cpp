#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.1/Triad.cpp"
#include "C:\Users\Maria\source\repos\Lab_3.1\Lab_3.1\Triad.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date d1(1975, 4, 1), d2(1974, 10, 15);
			Assert::AreEqual(d1 > d2, true);
		}
	};
}
