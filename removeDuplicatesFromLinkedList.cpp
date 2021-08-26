using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList) {
  // Write your code here.
	LinkedList *currentLink = linkedList;
	while(currentLink != nullptr){
		while(currentLink->next != nullptr && 
			currentLink->value == currentLink->next->value){
			currentLink->next = currentLink->next->next;
		}
		currentLink = currentLink->next;
	}
  return linkedList;
}
