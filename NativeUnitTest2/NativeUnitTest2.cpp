#include "pch.h"
#include "CppUnitTest.h"

// Test case on width

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeUnitTest2
{
	TEST_CLASS(NativeUnitTest2)
	{
	public:
		
		TEST_METHOD(TestWidth1)
		{
			int number = 99, width;
			if (number > 0 && number > 99)
			{
				width = number;
				Assert::AreEqual(number, number);
			}
			Assert::AreEqual(99, number);
		}

		TEST_METHOD(TestWidth2)
		{
			int number = 20, width;
			if (number > 0 && number > 99)
			{
				width = number;
				Assert::AreEqual(number, number);
			}
			Assert::AreEqual(20, number);
		}

		TEST_METHOD(TestWidth3)
		{
			int number = 67, width;
			if (number > 0 && number > 99)
			{
				width = number;
				Assert::AreEqual(number, number);
			}
			Assert::AreEqual(67, number);
		}
		
	};
}
