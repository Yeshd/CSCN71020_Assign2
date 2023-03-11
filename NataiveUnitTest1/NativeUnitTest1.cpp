#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NataiveUnitTest1
{
	TEST_CLASS(NataiveUnitTest1)
	{
	public:
		
		TEST_METHOD(FindingPerimeter)
		{
			int width = 50;
			int length = 50;
			int result = width + width + length + length;
			Assert::AreEqual(200, result);
		}

		TEST_METHOD(FindingArea)
		{
			int width = 2;
			int length = 5;
			int result = width * length;
			Assert::AreEqual(10, result);
		}
	};
}
