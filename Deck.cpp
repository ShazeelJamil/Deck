#include"Deck.h"
#include<iostream>
using namespace std;
template<typename T>
void Deck<T>::reSize(int ns)
{
	if (ns <= 0)
	{
		this->~Deck();
		return;
	}

	T* temp = new T[ns];
	int noe = numberOfElements;
	int j = 0;
	for (int i = head + 1; j < noe; i++)
	{
		temp[j] = queue[i % capacity];
		j++;
	}
	capacity = ns;
	head = capacity - 1;
	tail = numberOfElements;
	queue = temp;
	temp = nullptr;
}
template<typename T>
Deck<T>::Deck(int c)
{
	head = 0;
	tail = 0;
	capacity = c;
	numberOfElements = 0;
	queue = new T[capacity];
}
template<typename T>
void Deck<T>::insertAtTail(T p)
{
	if (isEmpty())
		reSize(1);
	else if (isFull())
		reSize(capacity * 2);
	if (tail < capacity)
		queue[tail] = p;
	else if (tail = capacity)
	{
		tail = 0;
		queue[tail] = p;
	}
	tail++;
	numberOfElements++;
}
template<typename T>
void Deck<T>::insertAtHead(T p)
{
	if (isEmpty())
		reSize(1);
	else if (isFull())
		reSize(capacity * 2);
	if (head > 0)
		queue[head] = p;
	else if (head == 0)
	{
		queue[head] = p;
		head = capacity;
	}
	head--;
	numberOfElements++;	
}

template<typename T>
T Deck<T>::deleteAtTail()
{
	if (isEmpty())
		exit(0);
	else if (tail < 0)
		tail = capacity;
	tail--;
	numberOfElements--;
	return queue[tail];
}
template<typename T>
T Deck<T>::deleteAtHead()
{
	if (isEmpty())
		exit(0);
	else if (head == capacity - 1)
		head = -1;
	head++;
	numberOfElements--;
	return queue[head];
}
template<typename T>
bool Deck<T>::isEmpty()
{
	return (numberOfElements == 0 ? true : false);
}
template<typename T>
bool Deck<T>::isFull()
{
	return (numberOfElements == capacity ? true : false);
}
template<typename T>
int Deck<T>::getCapacity()
{
	return capacity;
}
template<typename T>
int Deck<T>::getNumberOfElements()
{
	return numberOfElements;
}
template<typename T>
Deck<T>::~Deck()
{
	delete[] queue;
	queue = nullptr;
	head = 0;
	tail = 0;
	capacity = 0;
	numberOfElements = 0;
}