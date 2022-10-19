#ifndef COMPLEX
#define COMPLEX

class Complex{
    private:
       float first_num; // real part of complex number
       float sec_num; // imaginary part of complex number

    public:
	//Default Constructor
 	Complex();

	//Main Constructor
 	Complex(int first_other, int sec_other);

	//Operators
        Complex operator+(const Complex& other);

        Complex operator-(const Complex& other);

        Complex operator*(int num);

        friend Complex operator*(int num, Complex other);

	//absolute value of a complex number
	float absValue();

	};

//operator* from left
Complex operator*(int num, Complex other);

//sorting
void sorting(Complex array[], int n);

#endif
