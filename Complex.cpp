#include <iostream>
#include <cmath>
#include "Complex.hpp"

	//default constructor
	Complex::Complex(): first_num{0}, sec_num{0}{}

	//main constructor
        Complex::Complex(int first_other, int sec_other){
            first_num = first_other;
            sec_num = sec_other;
        }

	//operators
        Complex Complex::operator+(const Complex& other){
            return Complex(other.first_num + first_num, other.sec_num + sec_num);
        }

        Complex Complex::operator-(const Complex& other){
            return Complex(other.first_num - first_num, other.sec_num - sec_num);
        }

        Complex Complex::operator*(int num){
            return Complex(num * first_num, num * sec_num);
        }

	Complex operator*(int num, Complex other){
            return Complex(num * other.first_num, num * other.sec_num);
	}

	//absolute value of a complex number
        float Complex::absValue(){
            return sqrt(first_num * first_num + sec_num * sec_num);
        }

	//sorting complex nums with their absolute value
 	void sorting(Complex array[] , int n){
        	Complex key;
        	float sorting_value;
        	int j;

        for(int i = 1; i<n; ++i){
        	key = array[i]; //take complex number
        	sorting_value = array[i].absValue();//take value
        	j = i;

        while(j > 0 && array[j-1].absValue()>sorting_value){
           	array[j] = array[j-1];
           	j--;
        }

        array[j] = key;   //insert in right place

   }
 }
