#include <iostream>
#include <cmath>     // For std::log and std::exp
#include <iomanip>   // For std::fixed and std::setprecision

int main() {
    long double n_ld; // Use long double for higher precision
    long long t_ll;
    
    std::cin >> n_ld >> t_ll;
    
    long double growth_factor_per_second_ld = 1.000000011L; 
    long double log_nt_ld = std::log(n_ld) + static_cast<long double>(t_ll) * std::log(growth_factor_per_second_ld);
    long double result_ld = std::exp(log_nt_ld);
    std::cout << std::fixed << std::setprecision(20) << result_ld << std::endl;
    
    return 0;
}