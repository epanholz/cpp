
#include "Serialization.hpp"

/* constructors */

Serialization::Serialization() {}

Serialization::Serialization(const Serialization &) {}

Serialization::~Serialization() {}

/* copy assignment operator overload */

Serialization& Serialization::operator=(const Serialization &) {
	return (*this);
}

/*
	reinterpret_cast
	Converts any pointer type to any other pointer type, even of unrelated classes. 
	The operation result is a simple binary copy of the value from one pointer to 
	the other. All pointer conversions are allowed: neither the content pointed nor 
	the pointer type itself is checked.
*/

/* member functions */

uintptr_t	Serialization::serialize(Data* ptr) {
	return (reinterpret_cast<std::uintptr_t>(ptr));
}

Data*			Serialization::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}
