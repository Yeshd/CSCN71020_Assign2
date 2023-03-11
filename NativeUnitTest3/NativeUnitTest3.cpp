#include "pch.h"
#include "CppUnitTest.h"

// Test case on length

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeUnitTest3
{
	TEST_CLASS(NativeUnitTest3)
	{
	public:
		
		TEST_METHOD(TestLength1)
		{
			int number = 100, length;
			if (number > 0 && number > 99)
			{
				length = number;
				Assert::AreEqual(number, number);
			}
			Assert::AreEqual(555, number);
		}

		TEST_METHOD(TestLength2)
		{
			int number = 20, length;
			if (number > 0 || number > 99)
			{
				length = number;
				Assert::AreEqual(number, number);
			}
			Assert::AreEqual(20, number);
		}

		TEST_METHOD(TestLength3)
		{
			int number = 5, length;
			if (number > 0 || number > 99)
			{
				length = number;
				Assert::AreEqual(number, number);
			}
			Assert::AreEqual(5, number);
		}
		
	};
}
