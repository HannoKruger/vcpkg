// *****************************************************
// Copyright (c) 2001-2011 iAnywhere Solutions, Inc.
// Portions copyright (c) 1997-2011 Sybase, Inc.
// All rights reserved. All unpublished rights reserved.
// *****************************************************
/* FUNC_INFO is in the following form:                                   */
/* FUNC_INFO( scope, return type, calling convention, name, parameters ) */

/* definitions of database interface procedures generated by      */
/* the SQL preprocessor                                           */

FUNC_INFO( extern, void, _esqlentry_, sqlstop, (SQLCA *))
FUNC_INFO( extern, void, _esqlentry_, dbpp_connect_40, (SQLCA *,char *,char *,char *, char *, char *))
FUNC_INFO( extern, void, _esqlentry_, dbpp_disconnect, (SQLCA *, char * ))
FUNC_INFO( extern, void, _esqlentry_, dbpp_setconnect, (SQLCA *, char * ))
FUNC_INFO( extern, void, _esqlentry_, dbpp_commit, (SQLCA *,unsigned int))
FUNC_INFO( extern, void, _esqlentry_, dbpp_rollback, (SQLCA *,unsigned int))
FUNC_INFO( extern, void, _esqlentry_, dbpp_prepare_describe_12, (SQLCA *,char *,char *,short int *,char *,struct sqlda *,struct sqlda *,unsigned int, unsigned short int, a_sql_uint32 ))
FUNC_INFO( extern, void, _esqlentry_, dbpp_prepare_describe_exec_12, (SQLCA *,char *,char *,short int *,char *,struct sqlda *,struct sqlda *,unsigned int, unsigned short int, a_sql_uint32 ))
FUNC_INFO( extern, void, _esqlentry_, dbpp_prepare_exec_drop, (SQLCA *,char *,struct sqlda *,struct sqlda *))
FUNC_INFO( extern, void, _esqlentry_, dbpp_dropstmt, (SQLCA *,char *,char *,short int *))
FUNC_INFO( extern, void, _esqlentry_, dbpp_execute_into, (SQLCA *,char *,char *,short *,struct sqlda *,struct sqlda *))
FUNC_INFO( extern, void, _esqlentry_, dbpp_execute_array, (SQLCA *,char *,char *,short *,struct sqlda *,struct sqlda *,unsigned short int))
FUNC_INFO( extern, void, _esqlentry_, dbpp_execute_imm, (SQLCA *,char *,unsigned short int ))
FUNC_INFO( extern, void, _esqlentry_, dbpp_describe, (SQLCA *,char *,char *,short int *,struct sqlda *,unsigned int))
FUNC_INFO( extern, void, _esqlentry_, dbpp_describe_cursor, (SQLCA *,char *,struct sqlda *,unsigned int))
FUNC_INFO( extern, void, _esqlentry_, dbpp_describe_names, (SQLCA *,char *,char*, short int*,char *,struct sqlda *,unsigned int, unsigned short int))
FUNC_INFO( extern, void, _esqlentry_, dbpp_describe_usertypes, (SQLCA *,char *,char *,short int *,struct sqlda *,unsigned int,unsigned short int))
FUNC_INFO( extern, void, _esqlentry_, dbpp_describe_usertypes_cursor, (SQLCA *,char *,struct sqlda *,unsigned int,unsigned short int))
FUNC_INFO( extern, void, _esqlentry_, dbpp_describe_usertypes_names, (SQLCA *,char *,char*, short int*,char *,struct sqlda *,unsigned int, unsigned short int,unsigned short int))
FUNC_INFO( extern, void, _esqlentry_, dbpp_declare, (SQLCA *,char *,char *,char *,short int *, a_sql_uint32))
FUNC_INFO( extern, void, _esqlentry_, dbpp_open, (SQLCA *,char *,char *,char *,short int *,struct sqlda *, short int, short int, a_sql_uint32))
FUNC_INFO( extern, void, _esqlentry_, dbpp_explain, (SQLCA *,char *,unsigned short int,struct sqlda *))
FUNC_INFO( extern, void, _esqlentry_, dbpp_fetch, (SQLCA *,char *,unsigned short int,a_sql_int32,struct sqlda *, short int, unsigned short int ))
FUNC_INFO( extern, void, _esqlentry_, dbpp_fetch_array, (SQLCA *,char *,unsigned short int,a_sql_int32,struct sqlda *, short int, unsigned short int, unsigned short int ))
FUNC_INFO( extern, void, _esqlentry_, dbpp_get_data, (SQLCA *, char *, unsigned short int, a_sql_int32, struct sqlda *, unsigned short int ))
FUNC_INFO( extern, void, _esqlentry_, dbpp_put_into, (SQLCA *,char *,struct sqlda *,struct sqlda *))
FUNC_INFO( extern, void, _esqlentry_, dbpp_put_array, (SQLCA *,char *,struct sqlda *,struct sqlda *,unsigned short int))
FUNC_INFO( extern, void, _esqlentry_, dbpp_update, (SQLCA *,char *,struct sqlda *))
FUNC_INFO( extern, void, _esqlentry_, dbpp_delete, (SQLCA *,char *,char *,char *))
FUNC_INFO( extern, void, _esqlentry_, dbpp_resume, (SQLCA *,char *))
FUNC_INFO( extern, void, _esqlentry_, dbpp_close, (SQLCA *,char *))
FUNC_INFO( extern, void, _esqlentry_, dbpp_setoption, (SQLCA *,int,char *,char *,struct sqlda *))
FUNC_INFO( extern, void, _esqlentry_, dbpp_getoption, (SQLCA *,int,char *,char *,struct sqlda *))

/* definitions of descriptor management functions called by    */
/* preprocessor-generated code.					*/

FUNC_INFO( extern, struct sqlda *, _esqlentry_, dealloc_descriptor, ( SQLCA *, struct sqlda * ))
FUNC_INFO( extern, struct sqlda *, _esqlentry_, alloc_descriptor, ( SQLCA *, unsigned short ))
FUNC_INFO( extern, void, _esqlentry_, get_descriptor_data, ( SQLCA *, struct sqlda *, unsigned short, unsigned short, void *, unsigned short, a_descriptor_behaviour, a_descriptor_behaviour ))
FUNC_INFO( extern, unsigned short, _esqlentry_, get_descriptor_count, ( SQLCA *, struct sqlda *  ))
FUNC_INFO( extern, short, _esqlentry_, get_descriptor_field, ( SQLCA *, struct sqlda *, unsigned short, a_descriptor_field, a_descriptor_behaviour, a_descriptor_behaviour ))
FUNC_INFO( extern, void, _esqlentry_, check_descriptor_null_value, ( SQLCA *, struct sqlda *, unsigned short ))
FUNC_INFO( extern, short, _esqlentry_, set_descriptor_field, ( SQLCA *, struct sqlda *, unsigned short, a_descriptor_field, short, a_descriptor_behaviour, a_descriptor_behaviour ))
FUNC_INFO( extern, void, _esqlentry_, set_descriptor_count, ( SQLCA *, struct sqlda *, int ))
FUNC_INFO( extern, void, _esqlentry_, set_descriptor_data, ( SQLCA *, struct sqlda *, unsigned short, unsigned short, void *, unsigned short, a_descriptor_behaviour, a_descriptor_behaviour ))

/* definitions for database utility routines */

FUNC_INFO( extern, unsigned int, _esqlentry_, db_string_connect, (SQLCA*,char *))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_string_disconnect, (SQLCA*,char *))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_start_engine, (SQLCA*, char*))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_start_database, (SQLCA*, char*))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_stop_engine, (SQLCA *, char *))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_stop_database, (SQLCA *, char *))
FUNC_INFO( extern, int, _esqlentry_, db_cancel_request, ( SQLCA * ))
FUNC_INFO( extern, struct sqlda *, _esqlentry_, alloc_sqlda_noind, (unsigned int ))
FUNC_INFO( extern, struct sqlda *, _esqlentry_, alloc_sqlda, (unsigned int ))
FUNC_INFO( extern, struct sqlda *, _esqlentry_, fill_sqlda, (struct sqlda *))
FUNC_INFO( extern, struct sqlda *, _esqlentry_, fill_sqlda_ex, (struct sqlda *, unsigned int))
FUNC_INFO( extern, struct sqlda *, _esqlentry_, fill_s_sqlda, (struct sqlda *, unsigned int))
FUNC_INFO( extern, void, _esqlentry_, free_sqlda_noind, (struct sqlda *))
FUNC_INFO( extern, void, _esqlentry_, free_sqlda, (struct sqlda *))
FUNC_INFO( extern, void, _esqlentry_, free_filled_sqlda, (struct sqlda *))
FUNC_INFO( extern, a_sql_uint32, _esqlentry_, sqlda_storage, (struct sqlda *, int))
FUNC_INFO( extern, a_sql_uint32, _esqlentry_, sqlda_string_length, (struct sqlda *, int))
FUNC_INFO( extern, unsigned int, _esqlentry_, sql_needs_quotes, ( SQLCA *, char * ))
FUNC_INFO( extern, char *, _esqlentry_, sqlerror_message, ( SQLCA *, char *, int ))
FUNC_INFO( extern, unsigned short, _esqlentry_, db_find_engine, ( SQLCA *, char * ))
FUNC_INFO( extern, unsigned short, _esqlentry_, db_connection_info, ( SQLCA *, short int, struct sqlda * ))
FUNC_INFO( extern, unsigned short, _esqlentry_, db_is_working, ( SQLCA * ))
FUNC_INFO( extern, int, _esqlentry_, db_init, ( SQLCA * ))
FUNC_INFO( extern, int, _esqlentry_, db_fini, ( SQLCA * ))
FUNC_INFO( extern, void, _esqlentry_, db_interface_option,  ( SQLCA *, int, a_sql_int32 ))
FUNC_INFO( extern, void, _esqlentry_, db_ping_server, ( SQLCA *, int, char *, struct sqlda *, struct sqlda * ))
FUNC_INFO( extern, void, _esqlentry_, db_backup, ( SQLCA *, int, int, a_sql_uint32, struct sqlda * ))
FUNC_INFO( extern, void, _esqlentry_, db_delete_file, ( SQLCA *, char * ))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_string_ping_server, ( SQLCA *, char *, unsigned int ))
FUNC_INFO( extern, short, _esqlentry_, db_version_check, ( unsigned short ))
FUNC_INFO( extern, unsigned short, _esqlentry_, db_verify_version_12, ( void ))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_locate_servers, ( SQLCA *, SQL_CALLBACK_PARM, void * ))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_locate_servers_ex, ( SQLCA *, SQL_CALLBACK_PARM, void *, unsigned int ))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_get_property, ( SQLCA *, a_db_property, char *, int ))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_set_property, ( SQLCA *, a_db_set_property, char * ))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_time_change, ( SQLCA * ))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_change_char_charset, ( SQLCA *, const char * ))
FUNC_INFO( extern, unsigned int, _esqlentry_, db_change_nchar_charset, ( SQLCA *, const char * ))
FUNC_INFO( extern, void *, _esqlentry_, DBAlloc, ( size_t ))
FUNC_INFO( extern, void *, _esqlentry_, DBRealloc, ( void *, size_t ))
FUNC_INFO( extern, void, _esqlentry_, DBFree, ( void * ))

/* Callback definitions */
FUNC_INFO( extern, void, _esqlentry_, db_register_a_callback, ( SQLCA *, a_db_callback_index, SQL_CALLBACK_PARM ))
