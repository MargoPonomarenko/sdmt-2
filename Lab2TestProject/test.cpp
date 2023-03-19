#include "pch.h"
#include "../Lab2test/LinkedList.h"

TEST(CheckAddingElement, SuccessAdding) {
	LinkedList list;
	list.append('3');
	EXPECT_EQ(list.get(0), '3');
}

TEST(CheckListLength, TrueLength) {
	LinkedList list;
	list.append('3');
	list.append('4');
	list.append('5');
	EXPECT_EQ(list.length(), 3);
}

TEST(CheckDeletingOfElement, SuccessDeleting) {
	LinkedList list;
	list.append('3');
	EXPECT_EQ(list.deleteChar(0), '3');
	EXPECT_THROW(list.get(0), out_of_range);
	EXPECT_THROW(list.deleteChar(0), out_of_range);
}

TEST(CheckDeletingByValue, SuccessValueDeleting) {
	LinkedList list;
	list.append('3');
	list.append('4');
	list.append('4');
	list.append('5');
	list.append('4');
	list.append('3');
	list.deleteAll('4');
	EXPECT_EQ(list.length(), 3);
	list.deleteAll('2');
	EXPECT_EQ(list.length(), 3);
}
TEST(CheckGettingElement, SuccessGetting) {
	LinkedList list;
	list.append('3');
	list.append('4');
	EXPECT_EQ(list.get(1), '4');
	EXPECT_THROW(list.get(-1), out_of_range);
	EXPECT_THROW(list.get(3), out_of_range);
}

TEST(CheckGListCloning, SuccessCloning) {
	LinkedList list;
	list.append('3');
	list.append('4');

	LinkedList * clonedList = list.clone();
	int clonedListLength = clonedList->length();
	int listLength = list.length();

	EXPECT_EQ(clonedListLength, listLength);
	for (int i = 0; i < list.length(); i++) {
		char clonedElement = clonedList->get(i);
		EXPECT_EQ(clonedElement, list.get(i));
	}
}

TEST(CheckListReversing, SuccessReversing) {
	LinkedList list;
	list.append('3');
	list.append('4');
	list.append('5');
	list.reverse();

	EXPECT_EQ(list.get(0), '5');
	EXPECT_EQ(list.get(1), '4');
	EXPECT_EQ(list.get(2), '3');
}

TEST(CheckFindingFirst, TrueFirstCharacter) {
	LinkedList list;
	list.append('3');
	list.append('4');
	list.append('4');
	list.append('5');
	list.append('4');

	EXPECT_EQ(list.findFirst('4'), 1);
	EXPECT_EQ(list.findFirst('7'), -1);
}

TEST(CheckFindingLast, TrueLastCharacter) {
	LinkedList list;
	list.append('3');
	list.append('4');
	list.append('4');
	list.append('5');
	list.append('4');

	EXPECT_EQ(list.findLast('4'), 4);
	EXPECT_EQ(list.findLast('7'), -1);
}
