// complex.cpp
// Multiplying complex numbers

#include <iostream> // contains the definition of cout, endl
#include <complex> // contains the complex class definition
using namespace std; // cout, endl, complex are all part of this namespace
typedef complex<float> fcomp; // initializing an alias for complex<float>

int main()
{
    fcomp num1(2.0, 2.0); // use auto for type deduction
    fcomp num2(4.0, -2.0); // use uniform initialisation syntax (curly braces)
    auto answer = num1 * num2; // auto deduces a type for 'answer'
    cout << "The answer is: " << answer<< endl;
    cout << "Or in a more familiar form: " << answer.real()<< " + " <<answer.imag() << "j"<< endl << endl;

	// answer++; // The program is unable to to increment a value of type complex<float>.
                 // It does not make sense to increment a complex type as the increment is not defined as real or imaginary.
	return 0;
}
