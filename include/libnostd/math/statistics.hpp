/**
 * @file
 * @brief Mathematical utils & statistics
 * @author YAS
*/

/**
 * @todo Добавить тесты для statistics
*/

namespace math{
namespace statistics{
	/**
	 * @brief Биноминальный кэоффициент по модулю.
	 * @details \f$ C^k_n = \frac{n!}{k! \cdot (n-k)!} mod m \f$.
	 * @param[in] Положительное целое число n.
         * @param[in] Положительное целое число k.
         * @param[in] Положительное целое число m. Модуль.
	 * @return Биномиальный коэффициент.
	*/
	unsigned long binomial(unsigned long n, unsigned long k, unsigned long m);
}
}
