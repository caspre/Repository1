#include <iostream>
using namespace std;
class NumberList
{
protected:
	// Declare a class for the list node
	struct ListNode
	{
		double value;
		ListNode *next;
		ListNode(double value1, ListNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	ListNode *head;                   // List head pointer
public:
	NumberList() { head = NULL; }    // Constructor
	~NumberList();                    // Destructor
	void add(double number);
	void remove(double number);
	void removeAll(double number);
	void displayList() const;
};

//*****************************************************
// add adds a new element to the end of the list.     *
//***************************************************** 
void NumberList::add(double number)
{
	if (head == NULL)
		head = new ListNode(number);
	else
	{
		// The list is not empty
		// Use nodePtr to traverse the list
		ListNode *nodePtr = head;
		while (nodePtr->next != NULL)
			nodePtr = nodePtr->next;

		// nodePtr->next is nullptr so nodePtr points to last node
		// Create a new node and put it after the last node
		nodePtr->next = new ListNode(number);
	}
}

//***************************************************
// displayList outputs a sequence of all values     *
// currently stored in the list.                    *
//***************************************************
void NumberList::displayList() const
{
	ListNode *nodePtr = head;   // Start at head of list
	while (nodePtr)
	{
		// Print the value in the current node
		cout << nodePtr->value << "    ";
		// Move on to the next node
		nodePtr = nodePtr->next;
	}
}

void NumberList::remove(double number) {
	
	ListNode *nodePtr = head;
	ListNode *prev;

	if (head->value == number) {
		head = head->next;
		delete nodePtr;
	}//if
	else {
		//v It seems that I can use NULL or nullptr
		while ((nodePtr != NULL) && (nodePtr->value != number))
		{
			prev = nodePtr;
			nodePtr = nodePtr->next;


		}//while
		if (nodePtr) {
			prev->next = nodePtr->next;
			delete nodePtr;
		}//if
	}//else
	
	
}//function remove

void NumberList::removeAll(double number) {

	ListNode *nodePtr = head;
	ListNode *prev = nodePtr;

	while (head->value == number) {
		head = head->next;
		delete nodePtr;
		nodePtr = head;
		prev = nodePtr;
	}//if

	while (nodePtr != nullptr)
	{
		if (nodePtr->value == number) {
			prev->next = nodePtr->next;
			delete nodePtr;
			nodePtr = prev;
		}//if

		prev = nodePtr;
		nodePtr = nodePtr->next;

	}//while



}//function removeAll

//******************************************************
// Destructor deallocates the memory used by the list. *
//******************************************************
NumberList::~NumberList()
{
	ListNode *nodePtr = head;  // Start at head of list
	while (nodePtr != NULL)
	{
		// garbage keeps track of node to be deleted
		ListNode *garbage = nodePtr;
		// Move on to the next node, if any
		nodePtr = nodePtr->next;
		// Delete the "garbage" node
		delete garbage;
	}
}