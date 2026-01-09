// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){
    std::vector<std::complex<double>> points;

    points.push_back(std::complex<double>(3.5, 4.0));
    points.push_back(std::complex<double>(1.0, -2.1));
    points.push_back(std::complex<double>(-5.3, 6.0));
    points.push_back(std::complex<double>(7.2, 8.9));

    //using diff. means of element access
    //vectors support iterators, in c++ similar to pointers
    //.begin function returns iterator to first elem, then use -> to access .real() member func. of complex
    std::cout << "The first real part: " << points.begin()->real() << std::endl; //3.5

    //accessed by index. since points vector is an object, not iterator, no need for -> pointer operator
    std::cout << "Imaginary part at index 1: " << points[1].imag() << std::endl; //-2.1

    //prev, iterator, no. of positions to go back
    std::cout << "Next to last real: " << prev(points.end(), 2)->real() << std::endl; //-5.3

    //another iterator
    std::cout << "Last imaginary: " << (points.end() - 1)->imag() << std::endl; //8.9
    
    std::cout << std::endl << std::endl;
    return 0;
}
