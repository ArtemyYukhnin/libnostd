#ifndef LIBNOSTD_MATH_CORE_HPP
#define LIBNOSTD_MATH_CORE_HPP
/**
 * @brief Basic mathematical utils
*/
namespace math{
	/**
	 * @brief Вычисление квадрата числа
	 * @details Вычисление квадрата через умножение числа на самого себя
	 * 	   (number * numer)
	 * @param[in] num вещественное число
	 * @return Квадрат числа
	*/
	double square(double num);
	/**
         * @brief Быстрое (бинарное) возведение в целую степень
         * @details Возведение числа в целую степень с абсолютной точностью
	 *	    Алгоритм: возводим число в степени 1, 2, 4, ..., 2n,
	 * 	    каждый раз, пока степень не равна 0, сдвигаясь на 1 бит вправо,
	 *          Если последний бит 1 (не равен 0), домножаем результат на base.
         * @param[in] base Основание. Вещественное число
	 * @param[in] exp Экспонента. Неотрицательное длинное целое
         * @return число, возведенное в степень \f$ {base}^{exp} \f$.
        */

	double fast_power(double base, unsigned long long exp);

	/**
         * @brief Вычисление корня из вещественного числа по формуле Герона
         * @details Метод эквивалентен использованию метода Ньютона для решения уравнения \f$ x^2 - S - 0 \f$.
		    Алгоритм можнео представить следующим образом:
		    \f$ x_{0}\approx {\sqrt{S}},  \f$
                    \f$ x_{n+1}={\frac{1}{2}}\left(x_{n}+\frac{S}{x_{n}}\right)}, \f$
                    \f$ {\sqrt{S}}=\lim_{n \to \infinity}{x_{n}} \f$
        */

	double sqrt_heron(double num);
}
#endif
