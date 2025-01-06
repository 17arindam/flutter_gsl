#ifndef GSL_SPECIAL_FUNC_H
#define GSL_SPECIAL_FUNC_H

// Include necessary GSL headers
#include <gsl/gsl_sf_bessel.h>

// Function declarations following the new convention
double sf_bessel_J0(double x);
double sf_bessel_J1(double x);
double sf_bessel_j0(double x);
double sf_bessel_j1(double x);
double sf_bessel_j2(double x);
double sf_bessel_Y0(double x);
double sf_bessel_Y1(double x);
double sf_bessel_y0(double x);
double sf_bessel_y1(double x);
double sf_bessel_y2(double x);
double sf_bessel_Jn(int n, double x);
double sf_bessel_Yn(int n, double x);
double sf_bessel_i0(double x);
double sf_bessel_i1(double x);
double sf_bessel_in(int n, double x);
double sf_bessel_k0(double x);
double sf_bessel_k1(double x);
double sf_bessel_kn(int n, double x);
double sf_bessel_j0_scaled(double x);
double sf_bessel_j1_scaled(double x);
double sf_bessel_jn_scaled(int n, double x);
double sf_bessel_y0_scaled(double x);
double sf_bessel_y1_scaled(double x);
double sf_bessel_yn_scaled(int n, double x);
double sf_bessel_i0_scaled(double x);
double sf_bessel_i1_scaled(double x);
double sf_bessel_in_scaled(int n, double x);
double sf_bessel_k0_scaled(double x);
double sf_bessel_k1_scaled(double x);
double sf_bessel_kn_scaled(int n, double x);
double sf_bessel_Jnu(double nu, double x);
double sf_bessel_Ynu(double nu, double x);
double sf_bessel_Inu(double nu, double x);
double sf_bessel_Knu(double nu, double x);
double sf_bessel_Jnu_scaled(double nu, double x);
double sf_bessel_Ynu_scaled(double nu, double x);
double sf_bessel_Inu_scaled(double nu, double x);
double sf_bessel_Knu_scaled(double nu, double x);
double sf_bessel_zero_J0(unsigned int s);
double sf_bessel_zero_J1(unsigned int s);
double sf_bessel_zero_Jnu(double nu, unsigned int s);

#endif // GSL_SPECIAL_FUNC_H