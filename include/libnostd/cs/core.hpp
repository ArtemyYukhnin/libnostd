#ifndef LIBNOSTD_CS_CORE_HPP
#define LIBNOSTD_CS_CORE_HPP

#include <string>

/**
 * @brief Basic Computer science utils
*/
namespace cs{
	/**
	* @brief Преобразует целое (беззнаковое) десятичное число в 16-ричное
	*
	* @param[in] decimal Целое десятичное число
	*
	* @return std::string Число в 16-ричной системе счисления
	*/
	std::string dec2hex(unsigned int decimal);
        /**
        * @brief Преобразует из 16-ной системы счисления в десятичную
        *
        * @param[in] hexademal Строка с числом в 16-ной системе счисления
        *  
        * @return unsigned int число в десятичной системе счисления
        */

	unsigned int hex2dec(const std::string & hexademal);
}
#endif
