//
// Created by shobhit on 2/3/23.
//

#include "imag_num.h"

struct imag_num imag_sum(struct imag_num a, struct imag_num b) {
    struct imag_num c;
    c.real = a.real + b.real;
    c.cmplx = a.cmplx + b.cmplx;
    return c;
}
struct imag_num imag_sub(struct imag_num a, struct imag_num b) {
    struct imag_num c;
    c.real = a.real - b.real;
    c.cmplx = a.cmplx - b.cmplx;
    return c;
}
struct imag_num imag_mul(struct imag_num a, struct imag_num b) {
    struct imag_num c;
    c.real = (a.real * b.real) - (a.cmplx * b.cmplx);
    c.cmplx = (a.real * b.cmplx) + (a.cmplx * b.real);
    return c;
}
struct imag_num imag_div(struct imag_num a, struct imag_num b) {
    struct imag_num c;
    c.real = ( (a.real * b.real) + (a.cmplx * b.cmplx) )/( (b.real * b.real) + (b.cmplx * b.cmplx) );
    c.cmplx = ( (a.cmplx * b.real) - (a.real * b.cmplx) )/( (b.real * b.real) + (b.cmplx * b.cmplx) );
    return c;
}

struct imag_num cnjgt(struct imag_num a) {
    struct imag_num c;
    c.real = a.real;
    c.cmplx = -a.cmplx;
    return c;
}
