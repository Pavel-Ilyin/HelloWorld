#include "pch.h"
#include "CppUnitTest.h"
#include "../HelloWorld/Calculator.h"
#include "C:\Users\PC\source\repos\HelloWorld\HelloWorld\Calculator.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			Calculator calculator = Calculator();
			int sumResult = calculator.sum(3, 2);
			Assert::AreEqual(5, sumResult);
		}
	};
}
