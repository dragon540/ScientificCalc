//
// Created by shobhit on 2/3/23.
//
#include <math.h>

#include "imag_num.h"

struct imag_num_RectForm imag_sum(struct imag_num_RectForm a, struct imag_num_RectForm b) {
    struct imag_num_RectForm c;
    c.real = a.real + b.real;
    c.cmplx = a.cmplx + b.cmplx;
    return c;
}
struct imag_num_RectForm imag_sub(struct imag_num_RectForm a, struct imag_num_RectForm b) {
    struct imag_num_RectForm c;
    c.real = a.real - b.real;
    c.cmplx = a.cmplx - b.cmplx;
    return c;
}
struct imag_num_RectForm imag_mul(struct imag_num_RectForm a, struct imag_num_RectForm b) {
    struct imag_num_RectForm c;
    c.real = (a.real * b.real) - (a.cmplx * b.cmplx);
    c.cmplx = (a.real * b.cmplx) + (a.cmplx * b.real);
    return c;
}
struct imag_num_RectForm imag_div(struct imag_num_RectForm a, struct imag_num_RectForm b) {
    struct imag_num_RectForm c;
    c.real = ( (a.real * b.real) + (a.cmplx * b.cmplx) )/( (b.real * b.real) + (b.cmplx * b.cmplx) );
    c.cmplx = ( (a.cmplx * b.real) - (a.real * b.cmplx) )/( (b.real * b.real) + (b.cmplx * b.cmplx) );
    return c;
}

struct imag_num_RectForm cnjgt(struct imag_num_RectForm a) {
    struct imag_num_RectForm c;
    c.real = a.real;
    c.cmplx = -a.cmplx;
    return c;
}

// converting rectangular form to polar form
struct imag_num_PolForm imagNum_RectToPol(struct imag_num_RectForm a) {
    struct imag_num_PolForm pol;
    pol.magnitude = sqrt((a.real * a.real) + (a.cmplx * a.cmplx));
    pol.angle = atan(a.cmplx/a.real);
    return pol;
}

// converting polar form to rectangular form
struct imag_num_RectForm imagNum_PolToRect(struct imag_num_PolForm a) {
    struct imag_num_RectForm rect;
    rect.real = a.magnitude * cos(a.angle);
    rect.cmplx = a.magnitude * sin(a.angle);
    return  rect;
}

