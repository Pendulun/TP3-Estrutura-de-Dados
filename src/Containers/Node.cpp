#include "Node.hpp"

Containers::Node::Node(){
	this->count=1; // if it has been created, count is 1
	this->word="";
}

void Containers::Node::setCount(int newCount){
	this->count=newCount;
}

void Containers::Node::setWord(std::string newWord){
	this->word=newWord;
}

int Containers::Node::getCount(){
	return this->count;
}

std::string Containers::Node::getWord(){
	return this->word;
}