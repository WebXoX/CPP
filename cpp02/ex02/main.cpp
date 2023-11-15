#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed const c( Fixed( 10.10f ) / Fixed( 2 ) );
	Fixed const co( Fixed( 10.10f ) == Fixed( 2 ) );
	Fixed const co2( Fixed( 10.10f ) != Fixed( 2 ) );
	Fixed const co3( Fixed( 10.10f ) > Fixed( 2 ) );
	Fixed const co4( Fixed( 10.10f ) < Fixed( 2 ) );
	Fixed const co5( Fixed( 10.10f ) <= Fixed( 2 ) );
	Fixed const co6( Fixed( 10.10f ) >= Fixed( 2 ) );
	std::cout << c << std::endl;
	std::cout <<"==" << co << std::endl;
	std::cout <<"!=" << co2 << std::endl;
	std::cout <<">" << co3 << std::endl;
	std::cout <<"<" << co4 << std::endl;
	std::cout <<"<=" << co5 << std::endl;
	std::cout <<">=" << co6 << std::endl;
	std::cout <<"min" << Fixed::min( a, b ) << std::endl;
	return 0;
}