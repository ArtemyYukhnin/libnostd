#include "libnostd/math/core.hpp"
namespace math{
namespace statistics{
unsigned long binomial(unsigned long n, unsigned long k, unsigned long m){
	if((k == 0) or (k == n)) return 1UL;
	if(k>n) return 0UL;
	return (prod(k+1, n, m)*invmod(factorial(n-k, m), m))%m;
}

double mean(const double M[], int n){
	double sum=0;
	for(int i = 0; i < n; ++i){
		sum += M[i];
	}
	return sum/static_cast<double>(n);
}

double var(const double M[], int n){
	double sum = mean(M, n);
	double d = 0;
	for(int i = 0; i < n; ++i){
		d += (M[i]-sum)*(M[i]-sum);
	}
	return d/static_cast<double>(n);
}

}
}
