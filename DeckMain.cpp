//#include"Deck_implementation.cpp"
#include"Deck.h"
#include<iostream>
using namespace std;
int main()
{
	Deck<int> d;
	d.insertAtHead(1);
	d.insertAtHead(2);
	d.insertAtHead(3);
	d.insertAtHead(4);
	d.insertAtHead(5);
	d.insertAtHead(6);
	d.insertAtHead(7);
	d.insertAtTail(11);
	d.insertAtTail(12);
	d.insertAtTail(13);
	d.insertAtTail(14);
	d.insertAtTail(15);
	d.insertAtTail(16);
	d.insertAtTail(17);
	
	//cout << d.getNumberOfElements() << "\n";
	int d1 = d.getNumberOfElements();
	for (int i = 0; i < d1; i++)
		cout << d.deleteAtHead()<<" ";
	//for (int i = 0; i < d1; i++)
	//	cout << d.deleteAtTail()<<" ";
	return 0;
}