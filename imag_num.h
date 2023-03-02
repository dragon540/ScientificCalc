//
// Created by shobhit on 2/3/23.
//

#ifndef SCIENTIFICCALC_IMAG_NUM_H
#define SCIENTIFICCALC_IMAG_NUM_H

#endif //SCIENTIFICCALC_IMAG_NUM_H

struct imag_num {
    double real;
    double cmplx;
};

struct imag_num imag_sum(struct imag_num a, struct imag_num b);
struct imag_num imag_sub(struct imag_num a, struct imag_num b);
struct imag_num imag_mul(struct imag_num a, struct imag_num b);
struct imag_num imag_div(struct imag_num a, struct imag_num b);

struct imag_num cnjgt(struct imag_num a);

