
#include "Serialization.hpp"

/* constructors */

Serialization::Serialization() {}

Serialization::Serialization(const Serialization &) {}

Serialization::~Serialization() {}

/* copy assignment operator overload */

Serialization& Serialization::operator=(const Serialization &) {
	return (*this);
}

/* member functions */

uintptr_t	Serialization::serialize(Data* ptr) {
	return (reinterpret_cast<std::uintptr_t>(ptr));
}

Data*			Serialization::deserialize(uintptr_t raw) {
	Data*	ret;
	ret = reinterpret_cast<Data*>(raw);
	return (ret);
}
