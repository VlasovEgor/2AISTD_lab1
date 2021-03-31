#include "pch.h"
#include "CppUnitTest.h"
#include "../Red_Black_Tree.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test2Aistd1
{
	TEST_CLASS(Test2Aistd1)
	{
	public:
		
		TEST_METHOD(insert_empty)
		{
			RBTree<int, char> tree;
			tree.Insert(3, 'a');
			Assert::AreEqual(tree.Get_Color(3), true);
		}
		TEST_METHOD(insert1) {
			RBTree<char, int> tree;
			tree.Insert('a', 2);
			tree.Insert('b', 66);
			Assert::AreEqual(tree.Get_Color('a'), true);
			Assert::AreEqual(tree.Get_Color('f'), false);
		}
		TEST_METHOD(insert2) {
			RBTree<int, char> tree;
			tree.Insert('a', 5);
			tree.Insert('b', 33); 
			tree.Insert('c', 67);
			tree.Insert('d', 25); 
			tree.Insert('e', 80);
			tree.Insert('f', 50);
			Assert::AreEqual(tree.Get_Color(1), true);
			Assert::AreEqual(tree.Get_Color(2), true);
			Assert::AreEqual(tree.Get_Color(3), true);
			Assert::AreEqual(tree.Get_Color(4), false);
			Assert::AreEqual(tree.Get_Color(5), false);
			Assert::AreEqual(tree.Get_Color(6), false);
		}

		TEST_METHOD(Size)
		{
			RBTree<int, char> tree;
			Assert::AreEqual(tree.Size(), 0);
		}
		
		TEST_METHOD(Find_El)
		{
			RBTree<int, char> tree;
			for (int i = 1; i < 10; i++) 
			{
				tree.Insert(i, i + 10);
				Assert::AreEqual(tree.Find_Element(5), (char)15);
				Assert::AreEqual(tree.Find_Element(8), (char)18);
			}
		}
		TEST_METHOD(Remove_El)
		{
			RBTree<int, char> tree;
			for (int i = 1; i < 10; i++)
			{
				tree.Insert(i, i + 10);
			}
			tree.Remove(2);
			Assert::AreEqual(tree.Size(), 8);
		}
	};
}
