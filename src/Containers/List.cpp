#include "List.hpp"

Containers::List::List(){
	createEmptyList();
}

void Containers::List::insert(T* Node){
	// get's overrided
}

void Containers::List::createEmptyList(){
	this->head = new T;
	this->last = this->head;
	this->head->next = nullptr;
}

T* Containers::List::getHead(){
	return this->head;
}

T* Containers::List::getLast(){
	return this->last;
}

Containers::List::~List(){
	delete this->head;
	delete this->last;
}