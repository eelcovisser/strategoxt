#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToBuild_1;
Symbol sym_FromApp_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_WithAnno_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_Conc_2;
Symbol sym_AsFix_0;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_opt_1;
Symbol sym_layout_0;
Symbol sym_Anno_2;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Cong_2;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Str_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Anno_2;
Symbol sym_RootApp_1;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_AM_2;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_BA_2;
Symbol sym_Path_2;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
  ATprotectSymbol(sym_FromTerm_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
  sym_FromApp_1 = ATmakeSymbol("FromApp", 1, ATfalse);
  ATprotectSymbol(sym_FromApp_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
  sym_WithAnno_2 = ATmakeSymbol("WithAnno", 2, ATfalse);
  ATprotectSymbol(sym_WithAnno_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_AsFix_0 = ATmakeSymbol("AsFix", 0, ATfalse);
  ATprotectSymbol(sym_AsFix_0);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_w_18;
ATerm term_v_18;
ATerm term_n_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_g_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_r_9;
ATerm term_v_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_s_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_c_6;
void init_constant_terms (void)
{
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Cong_2, term_q_7, (ATerm) ATempty);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATempty);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_c_6);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_j_6, term_k_6);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_e_16, term_c_6);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_c_6);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_c_6);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_c_6);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_AsFix_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix          treat concrete syntax parts as AsFix trees", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm t_1 (ATerm i_1, ATerm j_1, ATerm);
ATerm Clean_0_0 (ATerm);
ATerm topdown_1_0 (ATerm b_74 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm o_6 (ATerm y_3, ATerm);
ATerm p_6 (ATerm c_4, ATerm);
ATerm str_explode_0_0 (ATerm);
ATerm TrmOp_0_0 (ATerm);
ATerm s_4 (ATerm c_19, ATerm d_19, ATerm);
ATerm foldr_3_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm v_4 (ATerm f_19, ATerm e_19, ATerm);
ATerm x_4 (ATerm e_107, ATerm);
ATerm y_4 (ATerm p_107, ATerm);
ATerm z_4 (ATerm t_106, ATerm);
ATerm y_11 (ATerm h_10, ATerm);
ATerm trm_explode_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm MetaExplode_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm f_75 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm t_75 (ATerm), ATerm);
ATerm ImplodeLayout_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm e_5 (ATerm j_39, ATerm k_39, ATerm);
ATerm f_5 (ATerm x_42, ATerm y_42, ATerm);
ATerm h_5 (ATerm p_92 (ATerm), ATerm s_419, ATerm b_43, ATerm);
ATerm g_5 (ATerm t_42, ATerm u_42, ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_95 (ATerm), ATerm);
ATerm w_25 (ATerm q_25, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm i_5 (ATerm z_42, ATerm);
ATerm j_5 (ATerm l_39, ATerm m_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_27 (ATerm g_26, ATerm);
ATerm m_27 (ATerm k_26, ATerm l_26, ATerm m_26, ATerm);
ATerm n_27 (ATerm u_26, ATerm v_26, ATerm w_26, ATerm);
ATerm k_5 (ATerm);
ATerm g_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm d_5 (ATerm y_33, ATerm z_33, ATerm);
ATerm debug_1_0 (ATerm n_92 (ATerm), ATerm);
ATerm h_1 (ATerm);
ATerm k_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_94 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm q_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm h_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm q_5 (ATerm a_44, ATerm b_44, ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm o_5 (ATerm y_48, ATerm z_48, ATerm x_48, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm l_5 (ATerm j_36, ATerm k_36, ATerm);
ATerm foldr_2_0 (ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_93 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm need_help_1_0 (ATerm p_96 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm n_5 (ATerm p_50, ATerm q_50, ATerm);
ATerm o_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_58 (ATerm), ATerm g_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm s_98 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm parse_options_1_0 (ATerm r_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm t_4 (ATerm);
ATerm w_4 (ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm iowrap_3_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm meta_explode_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL;
  a_0 = t;
  t = term_c_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_e_6;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_6), b_0), term_f_6);
  f_0 = t;
  t = SSL_printnl(e_0, f_0);
  t = term_i_6;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL;
      t = term_c_6;
      t = h_0(t);
      t_0 = t;
      t = term_j_6;
      u_0 = t;
      t = term_k_6;
      v_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_6, term_k_6, t_0);
      t = o_5(u_0, v_0, t_0, t);
      _fail(t);
    }
  else
    {
      ATerm z_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_0 = ATgetFirst((ATermList) t);
          r_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_0;
      t = d_0(t);
      t = term_c_6;
      t = g_0(t);
      z_0 = t;
      t = (ATerm) ATinsert(CheckATermList(r_0), z_0);
    }
  return(t);
}
ATerm t_1 (ATerm i_1, ATerm j_1, ATerm t)
{
  ATerm n_1 = NULL;
  t = SSL_is_int(i_1);
  t = SSL_int_to_string(i_1);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, n_1);
  return(t);
}
ATerm Clean_0_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,r_1 = NULL;
  o_1 = t;
  if(match_cons(t, sym_Op_2))
    {
      p_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_1;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = p_1;
  if(match_string(t, "Wld"))
    {
      ATerm n_6 = t;
      int r_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_1(p_1, o_1, t);
          ;
          LocalPopChoice(r_6);
        }
      else
        {
          t = n_6;
          t = term_s_6;
        }
    }
  else
    {
      t = t_1(p_1, o_1, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm b_74 (ATerm), ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    t = topdown_1_0(b_74, t);
    return(t);
  }
  t = b_74(t);
  t = SRTS_all(o_0, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm n_3 = NULL,p_3 = NULL,q_3 = NULL;
    n_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_3 = ATgetFirst((ATermList) t);
        q_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_6 = t;
      int v_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_1 = NULL,d_1 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(n_3);
          a_1 = t;
          t = p_3;
          t = c_80(t);
          d_1 = t;
          t = (ATerm) ATinsert(CheckATermList(q_3), d_1);
          n_0 = t;
          t = SSLsetAnnotations(n_0, a_1);
          ;
          LocalPopChoice(v_6);
        }
      else
        {
          t = t_6;
          {
            ATerm s_1 = NULL,w_1 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(n_3);
            s_1 = t;
            t = q_3;
            t = r_3(t);
            w_1 = t;
            t = (ATerm) ATinsert(CheckATermList(w_1), p_3);
            d_2 = t;
            t = SSLsetAnnotations(d_2, s_1);
          }
        }
    }
    return(t);
  }
  t = r_3(t);
  return(t);
}
ATerm o_6 (ATerm y_3, ATerm t)
{
  ATerm z_3 = NULL;
  t = SSL_is_string(y_3);
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, z_3));
  return(t);
}
ATerm p_6 (ATerm c_4, ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,o_4 = NULL;
  t = SSL_explode_term(c_4);
  if(match_cons(t, sym__2))
    {
      f_4 = ATgetArgument(t, 0);
      g_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4;
  t = map_1_0(str_explode_0_0, t);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, f_4, o_4);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,v_5 = NULL;
  v_5 = t;
  if(match_cons(t, sym_meta_var_1))
    {
      r_5 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_5), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_FromTerm_1))
        {
          r_5 = ATgetArgument(t, 0);
          {
            ATerm w_6 = t;
            int x_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_5;
                t = z_4(r_5, t);
                ;
                LocalPopChoice(x_6);
              }
            else
              {
                t = w_6;
                {
                  ATerm a_7 = t;
                  int e_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_6(v_5, t);
                      ;
                      LocalPopChoice(e_7);
                    }
                  else
                    {
                      t = a_7;
                      t = p_6(v_5, t);
                    }
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_FromStrategy_1))
            {
              r_5 = ATgetArgument(t, 0);
              {
                ATerm f_7 = t;
                int g_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_5;
                    t = x_4(r_5, t);
                    ;
                    LocalPopChoice(g_7);
                  }
                else
                  {
                    t = f_7;
                    {
                      ATerm h_7 = t;
                      int l_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_6(v_5, t);
                          ;
                          LocalPopChoice(l_7);
                        }
                      else
                        {
                          t = h_7;
                          t = p_6(v_5, t);
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_FromApp_1))
                {
                  r_5 = ATgetArgument(t, 0);
                  {
                    ATerm m_7 = t;
                    int n_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym_FromStrategy_1, r_5);
                        t = x_4(r_5, t);
                        ;
                        LocalPopChoice(n_7);
                      }
                    else
                      {
                        t = m_7;
                        {
                          ATerm o_7 = t;
                          int p_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = o_6(v_5, t);
                              ;
                              LocalPopChoice(p_7);
                            }
                          else
                            {
                              t = o_7;
                              t = p_6(v_5, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = term_r_7;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          r_5 = ATgetFirst((ATermList) t);
                          s_5 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm s_7 = t;
                            int t_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_6 = NULL,m_6 = NULL;
                                t = r_5;
                                t = str_explode_0_0(t);
                                l_6 = t;
                                t = s_5;
                                t = str_explode_0_0(t);
                                m_6 = t;
                                t = (ATerm) ATmakeAppl(sym_Cong_2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, m_6), l_6));
                                ;
                                LocalPopChoice(t_7);
                              }
                            else
                              {
                                t = s_7;
                                {
                                  ATerm w_7 = t;
                                  int z_7 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = o_6(v_5, t);
                                      ;
                                      LocalPopChoice(z_7);
                                    }
                                  else
                                    {
                                      t = w_7;
                                      t = p_6(v_5, t);
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          ATerm a_8 = t;
                          int g_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = o_6(v_5, t);
                              ;
                              LocalPopChoice(g_8);
                            }
                          else
                            {
                              t = a_8;
                              t = p_6(v_5, t);
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm TrmOp_0_0 (ATerm t)
{
  ATerm q_6 = NULL,u_6 = NULL,y_6 = NULL,z_6 = NULL;
  z_6 = t;
  t = SSL_explode_term(z_6);
  if(match_cons(t, sym__2))
    {
      q_6 = ATgetArgument(t, 0);
      u_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6;
  t = map_1_0(trm_explode_0_0, t);
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, q_6, y_6);
  return(t);
}
ATerm s_4 (ATerm c_19, ATerm d_19, ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  t = c_19;
  t = trm_explode_0_0(t);
  b_7 = t;
  t = d_19;
  t = trm_explode_0_0(t);
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, c_7), b_7));
  return(t);
}
ATerm foldr_3_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t)
{
  ATerm y_7 = NULL,b_8 = NULL,c_8 = NULL;
  y_7 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_7;
      t = x_85(t);
    }
  else
    {
      ATerm n_8 = NULL,o_8 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_8 = ATgetFirst((ATermList) t);
          c_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_8;
      t = z_85(t);
      n_8 = t;
      t = c_8;
      t = foldr_3_0(x_85, y_85, z_85, t);
      o_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_8, o_8);
      t = y_85(t);
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm m_9 = NULL,o_9 = NULL,b_2 = NULL;
  m_9 = t;
  t = SSL_explode_term(m_9);
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_8 = ATgetArgument(t, 1);
        if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
          {
            o_9 = ATgetFirst((ATermList) u_8);
            {
              ATerm v_8 = (ATerm) ATgetNext((ATermList) u_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(m_9);
  if(match_cons(t, sym__2))
    {
      ATerm w_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_8 = ATgetArgument(t, 1);
        if(((ATgetType(x_8) == AT_LIST) && !(ATisEmpty(x_8))))
          {
            ATerm d_9 = ATgetFirst((ATermList) x_8);
            ATerm e_9 = (ATerm) ATgetNext((ATermList) x_8);
            if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
              {
                b_2 = ATgetFirst((ATermList) e_9);
                {
                  ATerm j_9 = (ATerm) ATgetNext((ATermList) e_9);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, b_2), o_9));
  return(t);
}
ATerm v_4 (ATerm f_19, ATerm e_19, ATerm t)
{
  ATerm s_8 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = e_19;
    {
      ATerm l_9 = t;
      int p_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_9 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              i_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, term_r_9), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, i_9))));
          ;
          LocalPopChoice(p_9);
        }
      else
        {
          t = l_9;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = f_19;
  if(match_cons(t, sym_meta_listvar_1))
    {
      s_8 = ATgetArgument(t, 0);
      {
        ATerm s_9 = t;
        int u_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, s_8)));
            ;
            LocalPopChoice(u_9);
          }
        else
          {
            t = s_9;
            t = f_19;
          }
      }
    }
  else
    {
      t = f_19;
    }
  t = foldr_3_0(p_0, s_0, trm_explode_0_0, t);
  return(t);
}
ATerm x_4 (ATerm e_107, ATerm t)
{
  t = e_107;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm y_4 (ATerm p_107, ATerm t)
{
  ATerm t_9 = NULL;
  t = p_107;
  t = MetaExplode_0_0(t);
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, t_9);
  return(t);
}
ATerm z_4 (ATerm t_106, ATerm t)
{
  t = t_106;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm y_11 (ATerm h_10, ATerm t)
{
  ATerm i_10 = NULL;
  t = SSL_is_int(h_10);
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, i_10);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm x_9 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_10 = NULL,m_10 = NULL;
      m_10 = t;
      if(match_cons(t, sym_meta_var_1))
        {
          l_10 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, l_10);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              l_10 = ATgetArgument(t, 0);
              {
                ATerm k_10 = t;
                int n_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym_Op_2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, term_r_9), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, l_10))));
                    ;
                    LocalPopChoice(n_10);
                  }
                else
                  {
                    t = k_10;
                    t = y_11(m_10, t);
                  }
              }
            }
          else
            {
              t = y_11(m_10, t);
            }
        }
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = x_9;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 = NULL,g_2 = NULL;
            g_2 = t;
            t = SSL_is_string(g_2);
            f_2 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, f_2);
            ;
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm q_10 = t;
              int u_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
                  r_10 = t;
                  if(match_cons(t, sym_FromTerm_1))
                    {
                      s_10 = ATgetArgument(t, 0);
                      t = r_10;
                      t = z_4(s_10, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          s_10 = ATgetArgument(t, 0);
                          t = r_10;
                          t = y_4(s_10, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              s_10 = ATgetArgument(t, 0);
                              t = r_10;
                              t = x_4(s_10, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_WithAnno_2))
                                {
                                  s_10 = ATgetArgument(t, 0);
                                  t_10 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_2 = NULL,k_2 = NULL;
                                    t = s_10;
                                    t = trm_explode_0_0(t);
                                    j_2 = t;
                                    t = t_10;
                                    t = MetaExplode_0_0(t);
                                    k_2 = t;
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, j_2, k_2);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Conc_2))
                                    {
                                      s_10 = ATgetArgument(t, 0);
                                      t_10 = ATgetArgument(t, 1);
                                      t = r_10;
                                      t = v_4(s_10, t_10, t);
                                    }
                                  else
                                    {
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = term_r_9;
                                        }
                                      else
                                        {
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              s_10 = ATgetFirst((ATermList) t);
                                              t_10 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = r_10;
                                          t = s_4(s_10, t_10, t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                  ;
                  LocalPopChoice(u_10);
                }
              else
                {
                  t = q_10;
                  t = TrmOp_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm d_12 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      d_12 = ATgetArgument(t, 0);
      t = d_12;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          d_12 = ATgetArgument(t, 0);
          {
            ATerm j_12 = NULL;
            t = d_12;
            t = trm_explode_0_0(t);
            j_12 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, j_12);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              d_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_12;
          t = str_explode_0_0(t);
        }
    }
  return(t);
}
ATerm MetaExplode_0_0 (ATerm t)
{
  t = alltd_1_0(w_0, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm f_75 (ATerm), ATerm t)
{
  ATerm l_12 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_75(t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = SRTS_one(l_12, t);
      }
    return(t);
  }
  t = l_12(t);
  return(t);
}
ATerm alltd_1_0 (ATerm t_75 (ATerm), ATerm t)
{
  ATerm t_12 (ATerm t)
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_75(t);
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        t = SRTS_all(t_12, t);
      }
    return(t);
  }
  t = t_12(t);
  return(t);
}
ATerm ImplodeLayout_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm x_20 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      ATerm p_20 = NULL,q_20 = NULL,t_20 = NULL,u_20 = NULL;
      q_20 = t;
      if(match_cons(t, sym_BA_2))
        {
          t_20 = ATgetArgument(t, 0);
          u_20 = ATgetArgument(t, 1);
          {
            ATerm r_2 = NULL,y_2 = NULL,a_3 = NULL,v_2 = NULL;
            t = SSLgetAnnotations(q_20);
            r_2 = t;
            t = t_20;
            t = ImplodeLayout_1_0(_fail, t);
            y_2 = t;
            t = u_20;
            t = ImplodeLayout_1_0(_id, t);
            a_3 = t;
            t = (ATerm) ATmakeAppl(sym_BA_2, y_2, a_3);
            v_2 = t;
            t = SSLsetAnnotations(v_2, r_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              t_20 = ATgetArgument(t, 0);
              {
                ATerm d_4 = NULL,h_4 = NULL,w_2 = NULL;
                t = SSLgetAnnotations(q_20);
                d_4 = t;
                t = t_20;
                t = ImplodeLayout_1_0(_id, t);
                h_4 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, h_4);
                w_2 = t;
                t = SSLsetAnnotations(w_2, d_4);
              }
            }
          else
            {
              if(match_cons(t, sym_AM_2))
                {
                  t_20 = ATgetArgument(t, 0);
                  u_20 = ATgetArgument(t, 1);
                  {
                    ATerm q_4 = NULL,u_4 = NULL,b_5 = NULL,x_2 = NULL;
                    t = SSLgetAnnotations(q_20);
                    q_4 = t;
                    t = t_20;
                    t = x_20(t);
                    u_4 = t;
                    t = u_20;
                    t = ImplodeLayout_1_0(_id, t);
                    b_5 = t;
                    t = (ATerm) ATmakeAppl(sym_AM_2, u_4, b_5);
                    x_2 = t;
                    t = SSLsetAnnotations(x_2, q_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RuleNoCond_2))
                    {
                      t_20 = ATgetArgument(t, 0);
                      u_20 = ATgetArgument(t, 1);
                      {
                        ATerm a_6 = NULL,d_6 = NULL,g_6 = NULL,z_2 = NULL;
                        t = SSLgetAnnotations(q_20);
                        a_6 = t;
                        t = t_20;
                        t = x_20(t);
                        d_6 = t;
                        t = u_20;
                        t = ImplodeLayout_1_0(_id, t);
                        g_6 = t;
                        t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, d_6, g_6);
                        z_2 = t;
                        t = SSLsetAnnotations(z_2, a_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Rule_3))
                        {
                          t_20 = ATgetArgument(t, 0);
                          u_20 = ATgetArgument(t, 1);
                          p_20 = ATgetArgument(t, 2);
                          {
                            ATerm d_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,b_3 = NULL;
                            t = SSLgetAnnotations(q_20);
                            d_7 = t;
                            t = t_20;
                            t = x_20(t);
                            i_7 = t;
                            t = u_20;
                            t = ImplodeLayout_1_0(_id, t);
                            j_7 = t;
                            t = p_20;
                            t = x_20(t);
                            k_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Rule_3, i_7, j_7, k_7);
                            b_3 = t;
                            t = SSLsetAnnotations(b_3, d_7);
                          }
                        }
                      else
                        {
                          ATerm u_7 = NULL,x_7 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,t_8 = NULL,g_3 = NULL,f_3 = NULL,d_3 = NULL,c_3 = NULL;
                          if(match_cons(t, sym_appl_2))
                            {
                              t_20 = ATgetArgument(t, 0);
                              u_20 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(q_20);
                          x_7 = t;
                          t = t_20;
                          if(match_cons(t, sym_prod_3))
                            {
                              f_8 = ATgetArgument(t, 0);
                              i_8 = ATgetArgument(t, 1);
                              j_8 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(t_20);
                          e_8 = t;
                          t = i_8;
                          if(match_cons(t, sym_cf_1))
                            {
                              m_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(i_8);
                          l_8 = t;
                          t = m_8;
                          if(match_cons(t, sym_opt_1))
                            {
                              r_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(m_8);
                          q_8 = t;
                          t = r_8;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_opt_1, r_8);
                          c_3 = t;
                          t = SSLsetAnnotations(c_3, q_8);
                          t_8 = t;
                          t = (ATerm) ATmakeAppl(sym_cf_1, t_8);
                          d_3 = t;
                          t = SSLsetAnnotations(d_3, l_8);
                          p_8 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, f_8, p_8, j_8);
                          f_3 = t;
                          t = SSLsetAnnotations(f_3, e_8);
                          k_8 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, k_8, u_20);
                          g_3 = t;
                          t = SSLsetAnnotations(g_3, x_7);
                          d_8 = t;
                          {
                            ATerm z_10 = t;
                            int a_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,k_9 = NULL,n_9 = NULL,q_9 = NULL,v_9 = NULL,w_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,m_3 = NULL,l_3 = NULL,k_3 = NULL,j_3 = NULL,i_3 = NULL,h_3 = NULL;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    z_8 = ATgetArgument(t, 0);
                                    a_9 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(d_8);
                                y_8 = t;
                                t = z_8;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    f_9 = ATgetArgument(t, 0);
                                    g_9 = ATgetArgument(t, 1);
                                    h_9 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(z_8);
                                c_9 = t;
                                t = f_9;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    b_10 = ATgetFirst((ATermList) t);
                                    c_10 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(f_9);
                                a_10 = t;
                                t = b_10;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    f_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(b_10);
                                e_10 = t;
                                t = f_10;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_cf_1, f_10);
                                h_3 = t;
                                t = SSLsetAnnotations(h_3, e_10);
                                g_10 = t;
                                t = c_10;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = (ATerm) ATinsert(CheckATermList(c_10), g_10);
                                i_3 = t;
                                t = SSLsetAnnotations(i_3, a_10);
                                d_10 = t;
                                t = g_9;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    q_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(g_9);
                                n_9 = t;
                                t = q_9;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    y_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(q_9);
                                w_9 = t;
                                t = y_9;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_opt_1, y_9);
                                j_3 = t;
                                t = SSLsetAnnotations(j_3, w_9);
                                z_9 = t;
                                t = (ATerm) ATmakeAppl(sym_cf_1, z_9);
                                k_3 = t;
                                t = SSLsetAnnotations(k_3, n_9);
                                v_9 = t;
                                t = (ATerm) ATmakeAppl(sym_prod_3, d_10, v_9, h_9);
                                l_3 = t;
                                t = SSLsetAnnotations(l_3, c_9);
                                k_9 = t;
                                t = a_9;
                                {
                                  ATerm y_0 (ATerm t)
                                  {
                                    if(match_cons(t, sym_meta_var_1))
                                      {
                                        if(((u_7 != NULL) && (u_7 != ATgetArgument(t, 0))))
                                          _fail(ATgetArgument(t, 0));
                                        else
                                          u_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    return(t);
                                  }
                                  t = oncetd_1_0(y_0, t);
                                  b_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_appl_2, k_9, b_9);
                                  m_3 = t;
                                  t = SSLsetAnnotations(m_3, y_8);
                                }
                                LocalPopChoice(a_11);
                                t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(u_7));
                              }
                            else
                              {
                                t = z_10;
                                {
                                  ATerm c_11 = t;
                                  int d_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm e_11 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = f_72(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = e_11;
                                        }
                                      t = term_s_6;
                                      ;
                                      LocalPopChoice(d_11);
                                    }
                                  else
                                    {
                                      t = c_11;
                                    }
                                }
                              }
                          }
                        }
                    }
                }
            }
        }
      return(t);
    }
    t = alltd_1_0(x_0, t);
    return(t);
  }
  t = x_20(t);
  return(t);
}
ATerm e_5 (ATerm j_39, ATerm k_39, ATerm t)
{
  ATerm h_21 = NULL;
  t = SSL_fputc(j_39, k_39);
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_21);
  return(t);
}
ATerm f_5 (ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm i_21 = NULL;
  t = SSL_write_term_to_stream_text(x_42, y_42);
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_21);
  return(t);
}
ATerm h_5 (ATerm p_92 (ATerm), ATerm s_419, ATerm b_43, ATerm t)
{
  ATerm j_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_419, term_l_11);
  t = k_5(t);
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_21, b_43);
  t = p_92(t);
  t = fclose_0_0(t);
  t = b_43;
  return(t);
}
ATerm g_5 (ATerm t_42, ATerm u_42, ATerm t)
{
  ATerm n_21 = NULL;
  t = SSL_write_term_to_stream_baf(t_42, u_42);
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_21);
  return(t);
}
ATerm c_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(match_cons(m_11, sym_Stream_1))
        {
          j_11 = ATgetArgument(m_11, 0);
        }
      else
        _fail(t);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(j_11, k_11, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm b_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(match_cons(n_11, sym_Stream_1))
        {
          i_12 = ATgetArgument(n_11, 0);
        }
      else
        _fail(t);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(i_12, m_12, t);
  b_12 = t;
  t = term_o_11;
  g_12 = t;
  t = b_12;
  if(match_cons(t, sym_Stream_1))
    {
      h_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_11, b_12);
  t = e_5(g_12, h_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,k_22 = NULL,m_22 = NULL,j_24 = NULL,q_24 = NULL,z_13 = NULL,w_13 = NULL;
  a_22 = t;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_22);
  g_22 = t;
  t = h_22;
  {
    ATerm p_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((y_21 != NULL) && (y_21 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(b_1, t);
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = p_11;
        t = term_s_11;
        y_21 = t;
      }
    m_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_22, k_22);
    w_13 = t;
    t = SSLsetAnnotations(w_13, g_22);
    t = a_22;
    if(match_cons(t, sym__2))
      {
        c_22 = ATgetArgument(t, 0);
        d_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_22);
    b_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_22, (ATerm) ATmakeAppl(sym__2, not_null(y_21), d_22));
    z_13 = t;
    t = SSLsetAnnotations(z_13, b_22);
    f_22 = t;
    if(match_cons(t, sym__2))
      {
        j_24 = ATgetArgument(t, 0);
        q_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm t_11 = t;
      int u_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,a_14 = NULL;
          t = SSLgetAnnotations(f_22);
          b_11 = t;
          t = j_24;
          t = fetch_1_0(c_1, t);
          f_11 = t;
          t = q_24;
          if(match_cons(t, sym__2))
            {
              h_11 = ATgetArgument(t, 0);
              i_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_5(e_1, h_11, i_11, t);
          g_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_11, g_11);
          a_14 = t;
          t = SSLsetAnnotations(a_14, b_11);
          ;
          LocalPopChoice(u_11);
        }
      else
        {
          t = t_11;
          {
            ATerm q_11 = NULL,v_11 = NULL,z_11 = NULL,a_12 = NULL,b_14 = NULL;
            t = SSLgetAnnotations(f_22);
            q_11 = t;
            t = q_24;
            if(match_cons(t, sym__2))
              {
                z_11 = ATgetArgument(t, 0);
                a_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_5(f_1, z_11, a_12, t);
            v_11 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_24, v_11);
            b_14 = t;
            t = SSLsetAnnotations(b_14, q_11);
          }
        }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  i_25 = t;
  t = dtime_0_0(t);
  t = i_25;
  t = r_95(t);
  h_25 = t;
  t = dtime_0_0(t);
  e_25 = t;
  t = h_25;
  if(match_cons(t, sym__2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_25), (ATerm) ATmakeAppl(sym_Runtime_1, e_25)), g_25);
  return(t);
}
ATerm w_25 (ATerm q_25, ATerm t)
{
  t = SSL_fclose(q_25);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  u_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_25 = ATgetArgument(t, 0);
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_25);
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            t = w_25(u_25, t);
          }
      }
    }
  else
    {
      t = w_25(u_25, t);
    }
  return(t);
}
ATerm i_5 (ATerm z_42, ATerm t)
{
  t = SSL_read_term_from_stream(z_42);
  return(t);
}
ATerm j_5 (ATerm l_39, ATerm m_39, ATerm t)
{
  ATerm x_25 = NULL;
  t = SSL_fopen(l_39, m_39);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_25);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_25 = NULL;
  t = SSL_stdin_stream();
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_25);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_25 = NULL;
  t = SSL_stdout_stream();
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_25);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_26 = NULL;
  t = SSL_stderr_stream();
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_26);
  return(t);
}
ATerm l_27 (ATerm g_26, ATerm t)
{
  ATerm h_26 = NULL;
  t = SSL_explode_term(g_26);
  if(match_cons(t, sym__2))
    {
      ATerm c_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_12 = ATgetArgument(t, 1);
        if(((ATgetType(e_12) == AT_LIST) && !(ATisEmpty(e_12))))
          {
            h_26 = ATgetFirst((ATermList) e_12);
            {
              ATerm f_12 = (ATerm) ATgetNext((ATermList) e_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_26;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm m_27 (ATerm k_26, ATerm l_26, ATerm m_26, ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,s_26 = NULL,k_14 = NULL;
  t = SSLgetAnnotations(m_26);
  p_26 = t;
  t = k_26;
  if(match_cons(t, sym_Path_1))
    {
      s_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_26, l_26);
  k_14 = t;
  t = SSLsetAnnotations(k_14, p_26);
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(n_26, o_26, t);
  return(t);
}
ATerm n_27 (ATerm u_26, ATerm v_26, ATerm w_26, ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,c_27 = NULL,n_14 = NULL;
  t = SSLgetAnnotations(w_26);
  z_26 = t;
  t = SSL_is_string(u_26);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_27, v_26);
  n_14 = t;
  t = SSLsetAnnotations(n_14, z_26);
  if(match_cons(t, sym__2))
    {
      x_26 = ATgetArgument(t, 0);
      y_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(x_26, y_26, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm e_27 = NULL,j_27 = NULL,k_27 = NULL;
  e_27 = t;
  if(match_cons(t, sym__2))
    {
      j_27 = ATgetArgument(t, 0);
      k_27 = ATgetArgument(t, 1);
      {
        ATerm k_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_27(e_27, t);
            ;
            LocalPopChoice(n_12);
          }
        else
          {
            t = k_12;
            {
              ATerm o_12 = t;
              int p_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_27(j_27, k_27, e_27, t);
                  ;
                  LocalPopChoice(p_12);
                }
              else
                {
                  t = o_12;
                  t = n_27(j_27, k_27, e_27, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_27(e_27, t);
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_q_12;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_27 = NULL;
      r_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_27, term_u_12);
      t = k_5(t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      t = debug_1_0(g_1, t);
      _fail(t);
    }
  p_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5(q_27, t);
  o_27 = t;
  t = p_27;
  t = fclose_0_0(t);
  t = o_27;
  return(t);
}
ATerm d_5 (ATerm y_33, ATerm z_33, ATerm t)
{
  t = SSL_strcat(y_33, z_33);
  return(t);
}
ATerm debug_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  t_27 = t;
  t = n_92(t);
  u_27 = t;
  t = term_e_6;
  v_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_27), u_27);
  w_27 = t;
  t = SSL_printnl(v_27, w_27);
  t = t_27;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_28 = NULL;
      d_28 = t;
      t = SSL_is_string(d_28);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_1, t);
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
              j_28 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_28 = ATgetArgument(t, 0);
                  t = k_28;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_28 = ATgetArgument(t, 0);
                      t = k_28;
                      {
                        ATerm c_13 = t;
                        int d_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_13);
                          }
                        else
                          {
                            t = c_13;
                            t = debug_1_0(k_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_28 = NULL,q_28 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_28 = ATgetArgument(t, 0);
                          l_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_28;
                      t = eval_config_0_0(t);
                      p_28 = t;
                      t = l_28;
                      t = eval_config_0_0(t);
                      q_28 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_28, q_28);
                      t = d_5(p_28, q_28, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL;
  u_28 = t;
  t = term_g_13;
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_13, u_28);
  t = n_5(v_28, u_28, t);
  {
    ATerm h_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_28 = NULL,x_28 = NULL;
        t = eval_config_0_0(t);
        w_28 = t;
        t = term_g_13;
        x_28 = t;
        t = SSL_table_put(x_28, u_28, w_28);
        t = w_28;
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = h_13;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_29 = NULL;
        t = term_n_13;
        t = get_config_0_0(t);
        e_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_29, term_o_13);
        t = geq_0_0(t);
        t = c_29;
        t = a_94(t);
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        t = c_29;
      }
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm h_29 = NULL;
  h_29 = t;
  if(match_string(t, "-k"))
    {
      t = h_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_29;
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
  i_29 = t;
  t = SSL_string_to_int(i_29);
  j_29 = t;
  t = term_p_13;
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, j_29);
  t = q_5(k_29, j_29, t);
  t = i_29;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_q_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_1, m_1, q_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm m_29 = NULL;
  m_29 = t;
  if(match_string(t, "-S"))
    {
      t = m_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_29;
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  t = term_n_13;
  n_29 = t;
  t = term_r_13;
  o_29 = t;
  t = term_s_13;
  t = q_5(n_29, o_29, t);
  t = term_t_13;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_u_13;
  return(t);
}
ATerm y_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  t = SSL_string_to_int(p_29);
  q_29 = t;
  t = term_n_13;
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_13, q_29);
  t = q_5(r_29, q_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_29);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_v_13;
  return(t);
}
ATerm c_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  t = term_x_13;
  s_29 = t;
  t = term_c_6;
  t_29 = t;
  t = term_y_13;
  t = q_5(s_29, t_29, t);
  t = term_d_14;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_1, v_1, x_1, t);
      ;
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_1, z_1, a_2, t);
            ;
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            t = Option_3_0(c_2, e_2, h_2, t);
          }
      }
    }
  return(t);
}
ATerm q_5 (ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm u_29 = NULL;
  t = term_g_13;
  u_29 = t;
  t = SSL_table_put(u_29, a_44, b_44);
  t = (ATerm) ATmakeAppl(sym__3, term_g_13, a_44, b_44);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  if(match_string(t, "-o"))
    {
      t = w_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_29;
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL;
  x_29 = t;
  t = term_j_14;
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, x_29);
  t = q_5(y_29, x_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_29);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_l_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_2, l_2, m_2, t);
  return(t);
}
ATerm o_5 (ATerm y_48, ATerm z_48, ATerm x_48, ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
  {
    ATerm m_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_14 = ATgetArgument(t, 0);
            ATerm r_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
        t = n_5(y_48, z_48, t);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = m_14;
        t = (ATerm) ATempty;
      }
    b_30 = t;
    t = (ATerm) ATinsert(CheckATermList(b_30), x_48);
    c_30 = t;
    t = SSL_table_put(y_48, z_48, c_30);
    t = a_30;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
      t = term_c_6;
      t = m_0(t);
      n_30 = t;
      t = term_j_6;
      o_30 = t;
      t = term_k_6;
      p_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_6, term_k_6, n_30);
      t = o_5(o_30, p_30, n_30, t);
      _fail(t);
    }
  else
    {
      ATerm t_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_30 = ATgetFirst((ATermList) t);
          k_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_30 = ATgetFirst((ATermList) t);
          m_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_30;
      t = k_0(t);
      t = l_30;
      t = l_0(t);
      t_30 = t;
      t = (ATerm) ATinsert(CheckATermList(m_30), t_30);
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm v_30 = NULL;
  v_30 = t;
  if(match_string(t, "-i"))
    {
      t = v_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_30;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  w_30 = t;
  t = term_t_14;
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_14, w_30);
  t = q_5(x_30, w_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_30);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_2, o_2, p_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_6;
  t = whoami_0_0(t);
  y_30 = t;
  t = term_e_6;
  a_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_14), y_30);
  b_31 = t;
  t = SSL_printnl(a_31, b_31);
  t = term_i_6;
  z_30 = t;
  t = SSL_exit(z_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm l_5 (ATerm j_36, ATerm k_36, ATerm t)
{
  ATerm z_14 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_36, k_36);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = z_14;
      t = SSL_addr(j_36, k_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
  d_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_31;
      t = v_85(t);
    }
  else
    {
      ATerm i_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_31 = ATgetFirst((ATermList) t);
          f_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_31;
      t = foldr_2_0(v_85, w_85, t);
      i_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_31, i_31);
      t = w_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  if(match_cons(t, sym__2))
    {
      i_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(i_13, j_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_31 = NULL,e_13 = NULL,f_13 = NULL;
  t = times_0_0(t);
  f_13 = t;
  t = SSL_explode_term(f_13);
  if(match_cons(t, sym__2))
    {
      ATerm d_15 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_13;
  t = foldr_2_0(q_2, s_2, t);
  l_31 = t;
  t = SSL_TicksToSeconds(l_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  if(match_cons(t, sym__2))
    {
      x_31 = ATgetArgument(t, 0);
      y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_31;
        if((x_31 != t))
          {
            _fail(t);
          }
        t = w_31;
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = e_15;
        t = (ATerm) ATmakeAppl(sym__2, x_31, y_31);
        {
          ATerm k_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_31, y_31);
              ;
              LocalPopChoice(l_15);
            }
          else
            {
              t = k_15;
              t = SSL_gtr(x_31, y_31);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_31, y_31);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_93 (ATerm), ATerm t)
{
  ATerm c_32 = NULL;
  c_32 = t;
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_32 = NULL;
        t = term_n_13;
        t = get_config_0_0(t);
        e_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_32, term_i_6);
        t = geq_0_0(t);
        t = c_32;
        t = z_93(t);
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        t = c_32;
      }
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,j_32 = NULL,k_32 = NULL;
  t = run_time_0_0(t);
  g_32 = t;
  t = term_c_6;
  t = whoami_0_0(t);
  h_32 = t;
  t = term_e_6;
  j_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_15), g_32), term_o_15), h_32);
  k_32 = t;
  t = SSL_printnl(j_32, k_32);
  t = (ATerm) ATmakeAppl(sym__2, term_e_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_15), g_32), term_o_15), h_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_13;
  l_32 = t;
  t = SSL_exit(l_32);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL;
  u_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_32 = ATgetArgument(t, 0);
          {
            ATerm c_14 = NULL,q_14 = NULL;
            t = SSLgetAnnotations(u_32);
            c_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_32);
            q_14 = t;
            t = SSLsetAnnotations(q_14, c_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  ATerm q_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_15);
    }
  else
    {
      t = q_15;
      t = fetch_1_0(u_2, t);
    }
  t = p_96(t);
  return(t);
}
ATerm map_1_0 (ATerm s_79 (ATerm), ATerm t)
{
  ATerm k_33 (ATerm t)
  {
    ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
    h_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_33;
      }
    else
      {
        ATerm y_14 = NULL,r_15 = NULL,s_15 = NULL,s_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_33 = ATgetFirst((ATermList) t);
            j_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_33);
        y_14 = t;
        t = i_33;
        t = s_79(t);
        r_15 = t;
        t = j_33;
        t = k_33(t);
        s_15 = t;
        t = (ATerm) ATinsert(CheckATermList(s_15), r_15);
        s_14 = t;
        t = SSLsetAnnotations(s_14, y_14);
      }
    return(t);
  }
  t = k_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_33 = ATgetFirst((ATermList) t);
      o_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_33 = NULL,t_33 = NULL;
        ATerm e_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_33)), not_null(t_33));
          return(t);
        }
        t = o_33;
        t = j_0(t);
        if(((s_33 != NULL) && (s_33 != t)))
          _fail(t);
        else
          s_33 = t;
        t = n_33;
        t = i_0(t);
        if(((t_33 != NULL) && (t_33 != t)))
          _fail(t);
        else
          t_33 = t;
        t = o_33;
        t = reverse_acc_2_0(i_0, e_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_6;
      t = j_0(t);
    }
  return(t);
}
ATerm n_5 (ATerm p_50, ATerm q_50, ATerm t)
{
  t = SSL_table_get(p_50, q_50);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm x_33 = NULL,a_34 = NULL,b_34 = NULL,w_14 = NULL;
  b_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_34);
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_34);
  w_14 = t;
  t = SSLsetAnnotations(w_14, x_33);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_34), term_v_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL;
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      t = fetch_1_0(o_3, t);
    }
  t = term_y_15;
  t = echo_0_0(t);
  t = term_j_6;
  v_33 = t;
  t = term_k_6;
  w_33 = t;
  t = term_z_15;
  t = n_5(v_33, w_33, t);
  t = reverse_acc_2_0(_id, s_3, t);
  t = map_1_0(t_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_16 = ATgetFirst((ATermList) t);
                ATerm d_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_34;
          }
        ;
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        t = (ATerm) ATinsert(ATempty, g_34);
      }
    h_34 = t;
    t = term_s_11;
    i_34 = t;
    t = SSL_printnl(i_34, h_34);
    t = g_34;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL;
  t = term_e_16;
  m_34 = t;
  t = term_c_6;
  n_34 = t;
  t = term_f_16;
  t = q_5(m_34, n_34, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  t = term_e_16;
  q_34 = t;
  t = term_c_6;
  r_34 = t;
  t = term_f_16;
  t = q_5(q_34, r_34, t);
  t = term_h_16;
  o_34 = t;
  t = term_c_6;
  p_34 = t;
  t = term_i_16;
  t = q_5(o_34, p_34, t);
  t = term_k_16;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, v_3, w_3, t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      t = Option_3_0(x_3, a_4, b_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_58 (ATerm), ATerm g_58 (ATerm), ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,a_15 = NULL;
  x_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_34 = ATgetFirst((ATermList) t);
      u_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_34);
  s_34 = t;
  t = t_34;
  t = f_58(t);
  v_34 = t;
  t = u_34;
  t = g_58(t);
  w_34 = t;
  t = (ATerm) ATinsert(CheckATermList(w_34), v_34);
  a_15 = t;
  t = SSLsetAnnotations(a_15, s_34);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,h_35 = NULL,i_35 = NULL,c_15 = NULL;
  c_35 = t;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_16;
        t = s_98(t);
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
      }
    t = c_35;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_35 = ATgetFirst((ATermList) t);
        f_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_35);
    d_35 = t;
    t = term_x_14;
    i_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_14, e_35);
    t = q_5(i_35, e_35, t);
    t = f_35;
    {
      ATerm s_35 (ATerm t)
      {
        ATerm r_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_16 = t;
            int u_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_35 = NULL;
                l_35 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_35;
                ;
                LocalPopChoice(u_16);
              }
            else
              {
                t = t_16;
                t = s_98(t);
                t = Cons_2_0(_id, s_35, t);
              }
            ;
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
            {
              ATerm o_35 = NULL,p_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_35 = ATgetFirst((ATermList) t);
                  p_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_35), (ATerm) ATmakeAppl(sym_Undefined_1, o_35));
            }
          }
        return(t);
      }
      t = s_35(t);
      h_35 = t;
      t = (ATerm) ATinsert(CheckATermList(h_35), (ATerm) ATmakeAppl(sym_Program_1, e_35));
      c_15 = t;
      t = SSLsetAnnotations(c_15, d_35);
    }
  }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm e_36 = NULL;
  e_36 = t;
  if(match_string(t, "--help"))
    {
      t = e_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_36;
        }
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL;
  t = term_u_15;
  f_36 = t;
  t = term_c_6;
  g_36 = t;
  t = term_v_16;
  t = q_5(f_36, g_36, t);
  t = term_w_16;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_y_16;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  z_35 = t;
  t = term_j_6;
  b_36 = t;
  t = term_k_6;
  c_36 = t;
  t = (ATerm) ATempty;
  d_36 = t;
  t = SSL_table_put(b_36, c_36, d_36);
  t = z_35;
  {
    ATerm e_4 (ATerm t)
    {
      ATerm z_16 = t;
      int a_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_98(t);
          ;
          LocalPopChoice(a_17);
        }
      else
        {
          t = z_16;
          {
            ATerm b_17 = t;
            int c_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_4, j_4, k_4, t);
                ;
                LocalPopChoice(c_17);
              }
            else
              {
                t = b_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_4, t);
    {
      ATerm d_17 = t;
      int e_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_36 = NULL;
          p_36 = t;
          {
            ATerm g_17 = t;
            int h_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_16 = NULL;
                t = p_36;
                {
                  ATerm i_17 = t;
                  int j_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_17);
                    }
                  else
                    {
                      t = i_17;
                      t = fetch_1_0(l_4, t);
                    }
                  t = p_36;
                  t = default_system_usage_0_0(t);
                  t = term_r_13;
                  j_16 = t;
                  t = SSL_exit(j_16);
                }
                ;
                LocalPopChoice(h_17);
              }
            else
              {
                t = g_17;
                {
                  ATerm x_16 = NULL;
                  t = term_e_16;
                  t = get_config_0_0(t);
                  t = p_36;
                  t = default_system_about_0_0(t);
                  t = term_r_13;
                  x_16 = t;
                  t = SSL_exit(x_16);
                }
              }
          }
          ;
          LocalPopChoice(e_17);
        }
      else
        {
          t = d_17;
          {
            ATerm k_17 = t;
            int l_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
                ATerm m_4 (ATerm t)
                {
                  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,f_15 = NULL;
                  v_36 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_36 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_36);
                  t_36 = t;
                  t = u_36;
                  if(((x_35 != NULL) && (x_35 != t)))
                    _fail(t);
                  else
                    x_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_36);
                  f_15 = t;
                  t = SSLsetAnnotations(f_15, t_36);
                  return(t);
                }
                t = fetch_1_0(m_4, t);
                t = term_e_6;
                r_36 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_35)), term_m_17);
                s_36 = t;
                t = SSL_printnl(r_36, s_36);
                t = (ATerm) ATmakeAppl(sym__2, term_e_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_35)), term_m_17));
                t = default_system_usage_0_0(t);
                t = term_i_6;
                q_36 = t;
                t = SSL_exit(q_36);
                ;
                LocalPopChoice(l_17);
              }
            else
              {
                t = k_17;
              }
          }
        }
      y_35 = t;
      t = term_j_6;
      a_36 = t;
      t = SSL_table_destroy(a_36);
      t = y_35;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
  t = parse_options_1_0(r_96, t);
  a_37 = t;
  t = term_n_17;
  d_37 = t;
  t = SSL_table_create(d_37);
  t = term_n_17;
  b_37 = t;
  t = term_o_17;
  c_37 = t;
  t = SSL_table_put(b_37, c_37, a_37);
  t = a_37;
  t = t_96(t);
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_96, t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_96(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = if_verbose2_1_0(c_5, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL;
  t = term_v_17;
  e_37 = t;
  t = term_c_6;
  f_37 = t;
  t = term_w_17;
  t = q_5(e_37, f_37, t);
  t = term_x_17;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL;
  g_37 = t;
  t = term_x_14;
  t = get_config_0_0(t);
  h_37 = t;
  t = term_e_6;
  i_37 = t;
  t = (ATerm) ATinsert(ATempty, h_37);
  j_37 = t;
  t = SSL_printnl(i_37, j_37);
  t = g_37;
  return(t);
}
ATerm iowrap_3_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_96(t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              {
                ATerm d_18 = t;
                int e_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(e_18);
                  }
                else
                  {
                    t = d_18;
                    {
                      ATerm f_18 = t;
                      int g_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_4, w_4, a_5, t);
                          ;
                          LocalPopChoice(g_18);
                        }
                      else
                        {
                          t = f_18;
                          {
                            ATerm h_18 = t;
                            int j_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(j_18);
                              }
                            else
                              {
                                t = h_18;
                                t = keep_option_0_0(t);
                              }
                          }
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
    l_37 = t;
    {
      ATerm k_18 = t;
      int l_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_37 != NULL) && (k_37 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_37 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_5, t);
          ;
          LocalPopChoice(l_18);
        }
      else
        {
          t = k_18;
          t = term_n_18;
          k_37 = t;
        }
      t = not_null(k_37);
      t = ReadFromFile_0_0(t);
      m_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_37, m_37);
      t = apply_strategy_1_0(a_96, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(n_4, c_96, p_4, r_4, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,v_38 = NULL,w_38 = NULL,i_15 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  l_38 = t;
  if(match_cons(t, sym__2))
    {
      j_38 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_17 = NULL,r_17 = NULL,s_17 = NULL,h_15 = NULL;
            t = SSLgetAnnotations(l_38);
            f_17 = t;
            t = j_38;
            t = fetch_1_0(u_5, t);
            r_17 = t;
            t = k_38;
            t = ImplodeLayout_1_0(_fail, t);
            s_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_17, s_17);
            h_15 = t;
            t = SSLsetAnnotations(h_15, f_17);
            ;
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
            t = l_38;
          }
      }
    }
  else
    {
      t = l_38;
    }
  z_37 = t;
  if(match_cons(t, sym__2))
    {
      v_37 = ATgetArgument(t, 0);
      w_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_37);
  u_37 = t;
  t = w_37;
  t = MetaExplode_0_0(t);
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_37, x_37);
  i_15 = t;
  t = SSLsetAnnotations(i_15, u_37);
  y_37 = t;
  if(match_cons(t, sym__2))
    {
      v_38 = ATgetArgument(t, 0);
      w_38 = ATgetArgument(t, 1);
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_18 = NULL,m_18 = NULL,q_18 = NULL,j_15 = NULL;
            t = SSLgetAnnotations(y_37);
            i_18 = t;
            t = v_38;
            t = fetch_1_0(w_5, t);
            m_18 = t;
            t = w_38;
            t = topdown_1_0(x_5, t);
            q_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_18, q_18);
            j_15 = t;
            t = SSLsetAnnotations(j_15, i_18);
            ;
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = y_37;
          }
      }
    }
  else
    {
      t = y_37;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = Option_3_0(y_5, z_5, b_6, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Clean_0_0(t);
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_v_18;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_w_18;
  return(t);
}
ATerm meta_explode_0_0 (ATerm t)
{
  t = iowrap_3_0(p_5, t_5, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = meta_explode_0_0(t);
  return(t);
}
