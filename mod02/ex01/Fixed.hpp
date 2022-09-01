
# pragma once

# include <iostream>
# include <cmath>

class Fixed {

	public: /* constructors and deconstructors */
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &obj);
		~Fixed();

    public: /* copy assignment operator overload */
		Fixed& operator=(const Fixed &obj);

	public: /* setter and getter */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	public: /* converstions */
		float	toFloat(void) const;
		int		toInt(void) const;

	private: /* attributes */
		int					int_part;
		static const int	fract_bits = 8;

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
