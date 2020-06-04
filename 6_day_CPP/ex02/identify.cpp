#include <iostream>
#include <string>

class Base
{
	public :
		virtual ~Base() {}
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A"<< std::endl;
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	if (dynamic_cast<A *>(&p) != NULL)
		std::cout << "A"<< std::endl;
	if (dynamic_cast<B *>(&p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(&p) != NULL)
		std::cout << "C" << std::endl;
}

int main()
{
	A *p_A = new A;
	B *p_B = new B;
	C *p_C = new C;

	A ref_A;
	B ref_B;
	C ref_C;

	identify_from_pointer(p_A);
	identify_from_pointer(p_B);
	identify_from_pointer(p_C);

	identify_from_reference(ref_A);
	identify_from_reference(ref_B);
	identify_from_reference(ref_C);

	delete p_A;
	delete p_B;
	delete p_C;

}
