//============================================================================
// Name        : S43_BoxContainClas_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Constructing and Destructing
//============================================================================

#include <iostream>

class StreamInsertable

{
 friend std::ostream& operator<< (std::ostream& out, const StreamInsertable& operand);

public :
	virtual void stream_insert(std::ostream& out)const =0;

};

class BoxContainer : public StreamInsertable

{

		//typedef int value_type; // Allows us to change what's stored in the vector on the fly

		// Can make it store int, double,...

		using value_type = int;

		static const size_t DEFAULT_CAPACITY = 30;

public:

	BoxContainer(size_t capacity = DEFAULT_CAPACITY);

	BoxContainer(const BoxContainer& source);

	~BoxContainer();


	//StreamInsertable Interface
	virtual void stream_insert(std::ostream& out)const override;

	// Helper getter methods

	size_t size( ) const { return m_size; }
	size_t capacity() const{return m_capacity;};

	//Method to just play around with the class for now. Will
	//show a proper way to store in data starting from the next lecture

	void dummy_initialize()

	{

		//Put in 10 items

		for(size_t i{}; i < 10; ++i)

		{

			m_items[i] = i + 12;

		}
		//Set the size

		m_size = 10;

	//Using the default capacity

	}

private :

	value_type * m_items;

	size_t m_capacity;

	size_t m_size;

};

BoxContainer::BoxContainer(size_t capacity)

{

	m_items = new value_type[capacity];

	m_capacity = capacity;

	m_size =0;

}

BoxContainer::BoxContainer(const BoxContainer& source)

{

	//Set up the new box

	m_items = new value_type[source.m_capacity];

	m_capacity = source.m_capacity;

	m_size = source.m_size;

	//Copy the items over from source

	for(size_t i{} ; i < source.size(); ++i)
	{

		m_items[i] = source.m_items[i];
	}

}

BoxContainer::~BoxContainer()

{

	delete[] m_items;

}

void BoxContainer::stream_insert(std::ostream& out)const

{

	out << "BoxContainer : [ size :  " << m_size
		<< ", capacity : " << m_capacity << ", items : " ;

	for(size_t i{0}; i < m_size; ++i){

	out << m_items[i] << " " ;

	}

	std::cout << "]";

}

std::ostream& operator<< (std::ostream& out,const StreamInsertable& operand)

{
	operand.stream_insert(out);
 return out;

}

int main(){

	BoxContainer box1(15);

	box1.dummy_initialize();

	std::cout << "box1 : " << box1 << std::endl;

	std::cout << "&box1 : " << &box1 << std::endl;

	BoxContainer box2(box1);

	std::cout << "box2 : " << box2 << std::endl;

	std::cout << "&box2 : " << &box2 << std::endl;

	return 0;

}







