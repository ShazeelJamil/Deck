#ifndef DECK_H
#define DECK_H
template<typename T>
class Deck
{
	T* queue;
	int head;
	int tail;
	int capacity;
	int numberOfElements;
	void reSize(int ns);
public:
	Deck(int c = 10);
	~Deck();
	void insertAtTail(T p);
	void insertAtHead(T p);
	T deleteAtTail();
	T deleteAtHead();
	bool isEmpty();
	bool isFull();
	int getCapacity();
	int getNumberOfElements();
};
template class Deck<int>;
template class Deck<float>;
#endif // !DECK_H
