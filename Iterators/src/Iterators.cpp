//============================================================================
// Name        : Iterators.cpp
// Author      : Demet Demir
// Description : Iterators in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iterator>
using namespace std;

int main() {

	//iterators often are used to iterate through arrays, lists and vectors
    const int size = 4;
    int array[size] = { 3, 5, 7, 11 };

    for(
        int* i = &array[0];    // alternativ: int* i = array;
        i <= &array[size - 1]; // alternativ: i <= array + size - 1;
        ++i
    ){
        std::cout << *i << ", ";
    }

    //another example
    int array1[] = { 3, 5, 7, 11 };

    for(
        auto i = std::begin(array1);
        i != std::end(array1);
        ++i
    ){
        std::cout << *i << ", ";
    }



	return 0;
}
