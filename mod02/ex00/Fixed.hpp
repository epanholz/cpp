
# pragma once

# include <iostream>

class Fixed {

	public: /* constructors and deconstructors */
		Fixed();
		Fixed(const Fixed &old_obj);
		~Fixed();

    public: /* copy assignment operator overload */
		Fixed&	operator=(const Fixed &old_obj);

	public: /* setter and getter */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private: /* attributes */
		int					int_part;
		static const int	fract_bits = 8;

};
