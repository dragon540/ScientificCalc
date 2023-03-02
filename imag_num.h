//
// Created by shobhit on 2/3/23.
//

#ifndef SCIENTIFICCALC_IMAG_NUM_H
#define SCIENTIFICCALC_IMAG_NUM_H

#endif //SCIENTIFICCALC_IMAG_NUM_H

struct imag_num_RectForm {
    double real;
    double cmplx;
};

struct imag_num_PolForm {
    double magnitude;
    double angle;
};

struct imag_num_RectForm imag_sum(struct imag_num_RectForm a, struct imag_num_RectForm b);
struct imag_num_RectForm imag_sub(struct imag_num_RectForm a, struct imag_num_RectForm b);
struct imag_num_RectForm imag_mul(struct imag_num_RectForm a, struct imag_num_RectForm b);
struct imag_num_RectForm imag_div(struct imag_num_RectForm a, struct imag_num_RectForm b);

struct imag_num_RectForm cnjgt(struct imag_num_RectForm a);

// converting rectangular form to polar form
struct imag_num_PolForm imagNum_RectToPol(struct imag_num_RectForm a);

// converting polar form to rectangular form
struct imag_num_RectForm imagNum_PolToRect(struct imag_num_PolForm a);