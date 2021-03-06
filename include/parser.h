#ifndef _PARSER_H_
#define _PARSER_H_

#include "xtypes.h"
#include "ref_all.h"


Matrix ref_list2vect(ref_list l); // Should this stay here?

/* Internal calls */
Ref declare_ref(char* name);
Ref exec_cmd(char* cmd, ref_list args);
Ref exec_fun(Fun f, ref_list args, bool force_funref);

/* Parse-helpers */
int (*get_classtest(c_class class)) (int);
int isalnum_extended(int c);
int isdigit_extended(int c);
char* pop_word(void);
char* jump_cclass(char* ptr, c_class class);

/* Expression evaluators */
int eval_input(char* user_input);
int exec_instrution(void);
Ref eval_expression(bool force_funref);
Ref eval_float(void);
Ref eval_vector(void);
Ref eval_fun(char* fun_name, bool force_funref);
Ref eval_cmd(char* cmd);

#endif

