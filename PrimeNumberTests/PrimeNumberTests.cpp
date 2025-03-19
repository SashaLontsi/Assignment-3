#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PrimeNumberTests
{
	TEST_CLASS(PrimeNumberTests)
	{
	public:
		
		TEST_METHOD(TestPrimeNumbers) {
			Assert::AreEqual(1, isPrime(2));
			Assert::AreEqual(1, isPrime(3));
			Assert::AreEqual(1, isPrime(5));
			Assert::AreEqual(1, isPrime(7));
		}
		TEST_METHOD(TestNotPrimeNumbers) {
			Assert::AreEqual(0, isPrime(4));
			Assert::AreEqual(0, isPrime(6));
			Assert::AreEqual(0, isPrime(8));
		}
		TEST_METHOD(TestEdgeCases) {
			Assert::AreEqual(0, isPrime(1));
			Assert::AreEqual(0, isPrime(0));
			Assert::AreEqual(0, isPrime(-5));
		}
	};
}
