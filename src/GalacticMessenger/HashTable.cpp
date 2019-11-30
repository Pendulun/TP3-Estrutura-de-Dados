#include "HashTable.hpp"

GalacticMessenger::HashTable::HashTable(){
	this->hashTable=nullptr;
	this->tamVector=0;
}

GalacticMessenger::HashTable::~HashTable(){
	for (i=0;i<this->tamVector;i++){
		delete hashTable[i];
	}
	delete[] this->hashTable;
}

//Containers::WordNode* GalacticMessenger::HashTable::createVector(int tam){
//	return new Containers::WordNode[tam];
//}

//Adaptation of https://cp-algorithms.com/string/string-hashing.html
int GalacticMessenger::HashTable::hash(std::string &word){
    const int p = 29; //nearest prime number above 26 (number of letters in the portuguese alphabet)
    const int m = 1e5 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}

//From https://cp-algorithms.com/string/string-hashing.html
void GalacticMessenger::HashTable::insert(std::string word){
    unsigned int index = this->hash(word);
	Containers::WordNode* searchNode;
	searchNode=this->search(word);
	//if it already is in the hashtable
	if(searchWord!=nullptr){
		searchWord->setCount(searchWord->getCount()+1);
	}else{
		Containers::WordNode* newWord = new Containers::WordNode();
    	newWord->setWord(word);
    	this->hashTable[index].insert(newWord);
	}
}

//Adaptation of https://cp-algorithms.com/string/string-hashing.html
Containers:WordNode* GalacticMessenger::HashTable::search(std::string word){
    unsigned int index = this->hash(word);
    //Search the linked list at that specific index
    Containers::WordNode* searchNode;
    searchNode = this->hash[index].getHead()->getNext();
    while(searchNode!=nullptr){
        if(searchNode->getWord()==word){
        	return searchNode;
        }else{
        	searchNode=searchNode->getNext();
        }
    }
    return nullptr;
}

void GalacticMessenger::HashTable::setCode(std::string word, std::string code){
	unsigned int index = this->hash(word);
	Containers::WordNode* searchNode;
	searchNode = this->search(word);
	if(searchNode!=nullptr){
		searchNode->setCode(code);
	}
}

std::string GalacticMessenger::HashTable::getCode(std::string word){
	unsigned int index = this->hash(word);
	Containers::WordNode* searchNode;
	if(searchNode!=nullptr){
		return searchNode->getCode();
	}else{
		return "";
	}
}

int GalacticMessenger::HashTable::getCount(std::string word){
	unsigned int index = this->hash(word);
	Containers::WordNode* searchNode;
	if(searchNode!=nullptr){
		return searchNode->getCount();
	}else{
		return 0;
	}
}

int GalacticMessenger::HashTable::getTamVector(){
	return this->hashtable.size(); // dont know if this works and if its necessary
}