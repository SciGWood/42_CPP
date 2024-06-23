#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>
# include <stdint.h>
# include <exception>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array();//										Default Constructor
		Array(unsigned int size);
		Array(const Array &other);//				    Copy constructor
		Array&	operator=(const Array &other);//	    Copy assignement operator
		~Array();//										Destructor

		T				&operator[](unsigned int i) const;
		unsigned int	size() const;

		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
};

template <typename T>
Array<T>::Array() : _array(new T[0]()), _size(0)
{

}

template <typename T>
Array<T>::Array(unsigned int size) : _array(new T[size]()), _size(size)
{

}

template <typename T>
Array<T>::Array(const Array &other)
{
	if (this != &other)
	{
		this->_size = other._size;
		this->_array = new T[other._size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = other._array[i];
	}
}
template <typename T>
Array<T>&	Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		this->_size = other._size;
		delete [] this->_array;
		this->_array = new T[other._size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = other._array[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_size)
		throw (Array<T>::OutOfBoundsException());
	return (this->_array[1]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
const char	*Array<T>::OutOfBoundsException::what() const throw()
{
	return ("\nOut of Bounds Exception.");
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_array;
}

#endif