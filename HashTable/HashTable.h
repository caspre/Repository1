//HashTable header file
// Stanley Marcellus

#include <string>
using namespace std;

class HashTable {
private:
	//Collisions will be handled through Chaining(Closed Addressing)
	struct ListNode;//Linked List
	static const int maxIndex = 10;//Size of the Linked List
	int tableSize;//keeps track of the number of inputs
	ListNode *hashName[maxIndex];//Array of Linked Lists

public:
	HashTable();

	void putGet(string);

	int hash(string);
	

};