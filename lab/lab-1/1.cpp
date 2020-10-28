#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 8;

    std::cout << "Enter the size of the firts array: ";
    size_t n1;
    std::cin >> n1;

    std::cout << "Enter the size of the second array: ";
    size_t n2;
    std::cin >> n2;

    std::srand( ( unsigned int )std::time( nullptr ) );

    int *a1 = new int[n1];

    std::cout << "\nFirst  array: ";
    for ( size_t i = 0; i < n1; i++ )
    {
        a1[i] = std::rand() % ( MAX_VALUE - MIN_VALUE ) + MIN_VALUE;
        std::cout << a1[i] << ' ';
    }
    std::cout << '\n';

    int *a2 = new int[n2];

    std::cout << "Second array: ";
    for ( size_t i = 0; i < n2; i++ )
    {
        a2[i] = std::rand() % ( MAX_VALUE - MIN_VALUE ) + MIN_VALUE;
        std::cout << a2[i] << ' ';
    }
    std::cout << '\n';

    size_t n3 = 0;

    for ( size_t i = 0; i < n1; i++ )
    {
        size_t count = 1;

        for ( size_t j = 0; j < i; j++ )
        {
            if ( a1[j] == a1[i] ) ++count;
        }

        for ( size_t j = 0; count != 0 && j < n2; j++ )
        {
            if ( a2[j] == a1[i] ) --count;
        }

        if ( count == 0 ) ++n3;
    }

    int *a3 = new int[n3];

    size_t m = 0;

    for ( size_t i = 0; i < n1; i++ )
    {
        size_t count = 1;

        for ( size_t j = 0; j < i; j++ )
        {
            if ( a1[j] == a1[i] ) ++count;
        }

        for ( size_t j = 0; count != 0 && j < n2; j++ )
        {
            if ( a2[j] == a1[i] ) --count;
        }

        if ( count == 0 ) a3[m++] = a1[i];
    }

    std::cout << "The common elements: ";

    for ( size_t i = 0; i < n3; i++ )
    {
        std::cout << a3[i] << ' ';
    }
    std::cout << '\n';

    delete [] a3;
    delete [] a2;
6
    delete [] a1;
}
