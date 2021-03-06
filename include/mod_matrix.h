#ifndef _MOD_MATRIX_H
#define _MOD_MATRIX_H


#include "matrix.h"
#include "ref_all.h"

void load_mod_matrix(void);

Ref matrix_call(ref_list args);
Ref transpose_call(ref_list args);
Ref mult_call(ref_list args);
Ref addition_call(ref_list args);
Ref sub_call(ref_list args);
Ref mult_scal_call(ref_list args);
Ref expo_call(ref_list args);
Ref determinant_call(ref_list args);
Ref invert_call(ref_list args);
Ref triangular_call(ref_list args);
Ref echelon_call(ref_list args);
Ref solve_call(ref_list args);
Ref rank_call(ref_list args);
Ref decomposition_call(ref_list args);
Ref kernel_call(ref_list args);

	


Ref speedtest_cmd(ref_list args);
#endif 
