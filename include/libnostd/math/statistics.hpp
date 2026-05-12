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
	 * @brief	Биноминальный кэоффициент по модулю.
	 * @details	\f$ C^k_n = \frac{n!}{k! \cdot (n-k)!} mod m \f$.
	 * @param[in]	Положительное целое число n.
         * @param[in]	Положительное целое число k.
         * @param[in]	Положительное целое число m. Модуль.
	 * @return	Биномиальный коэффициент.
	*/
	unsigned long binomial(unsigned long n, unsigned long k, unsigned long m);
	/**
         * @brief	Среднее арифметическое чисел в массиве.
         * @details	\f$ \overline{x} = \frac{1}{n} \sum_{i=1}^{n} x_{i}  \f$.
         * @param[in]	Массив чисел типа double.
         * @param[in]	Количество элементов в массиве.
         * @return	[double] Среднее арифметическое.
        */
	double mean(const double M[], int n);
	/**
         * @brief	Дисперсия чисел в массиве.
         * @details	\f$ D(x) = \frac{1}{n} \sum_{i=1}^{n} (x_{i} - \overline{x})^{2}  \f$.
         * @param[in]	Массив чисел типа double.
         * @param[in]	Количество элементов в массиве.
         * @return	[double] Значение дисперсии.
        */
	double var(const double M[], int n);
}
}
