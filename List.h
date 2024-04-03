#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "defs.h"
#include "Category.h"
using namespace std;

template <class T>
class List {

	public:
		//constructor
		List(){
	elements = new T[MAX_ARRAY];
	numElements = 0;
		}
				
		//destructor
		~List(){
	delete [] elements;
}
		
		//other
		List<T>& operator+=(const T& s){
	if (numElements >= MAX_ARRAY)   return *this;
  	elements[numElements++] = s;
	cout<<numElements;
	return *this;
}

		List& operator-=(const T& s){
	int index = 0;
	while (index < numElements){
		if (s == elements[index]){
			--numElements;
			break;
		}
		++index;
	}

	while (index < numElements){
		elements[index] = elements[index + 1];
		++index;
	}
	return *this;
}

		const T& operator[](int index) const{
	if (index < 0 || index >= numElements) {
		cout<<"List index out of bounds"<<endl;
		exit(1);
	}
	return elements[index];
}


		const T& operator[](int index){
	if (index < 0 || index >= numElements) {
		cout<<"List index out of bounds"<<endl;
		exit(1);
	}
	return elements[index];
}

		int getSize() const{
	return numElements;
}
		bool isFull() const{
			{
	return numElements >= MAX_ARRAY;
}
		}

		void clear(){
			numElements = 0;
		}
	
	
	private:
		int numElements;
		T* elements;
	
};


#endif