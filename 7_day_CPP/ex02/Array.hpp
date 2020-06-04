#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>

template <typename T>
class Array
{
	private:
		T *_Array;
		int _N;

	public:
		Array(): _Array(new T[0]), _N(0) {}
		Array(unsigned int const &n): _Array(new T[n]), _N(n) {}

		Array(Array const &other)
		{
			this->_N = other._N;
			this->_Array = new T[this->_N];
			for (int i = 0; i < this->_N; i++)
			{
				this->_Array[i] = other._Array[i];
			}
		}

		Array& operator=(Array const &other)
		{
			if (this == &other)
				return(*this);
			this->_N = other._N;
			this->_Array = new T[this->_N];
			for (int i = 0; i < this->_N; i++)
			{
				this->_Array[i] = other._Array[i];
			}
			return(*this);
		}

		virtual ~Array() { delete [] this->_Array; }
		int size() const {return(this->_N);}

		T& operator[](int const &i)
		{
			if (i >= this->_N || i < 0)
				throw OutOfBound();
			return(this->_Array[i]);
		}

		class OutOfBound : public std::exception
		{
			public :
				OutOfBound() throw() {}
				virtual ~OutOfBound() throw() {}
				virtual const char* what() const throw() {return("element is out of bounds");}
		};

};

#endif
