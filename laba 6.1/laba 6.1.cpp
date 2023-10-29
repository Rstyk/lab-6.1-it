#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.1/lab 6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB61it
{
	TEST_CLASS(UnitTest1LAB61it)
	{
	public:


		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 2, 3, 4, 5 };
			int result = Number(a, 5);
			Assert::AreEqual(3, result);
		}
	};
}

