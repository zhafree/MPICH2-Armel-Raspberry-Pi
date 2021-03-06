/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*
 *  (C) 2008 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#include "hydra.h"
#include "bsci.h"
#include "common.h"

HYD_status HYDT_bsci_launcher_lsf_init(void)
{
    HYDT_bsci_fns.query_env_inherit = HYDT_bscd_lsf_query_env_inherit;
    HYDT_bsci_fns.launch_procs = HYDT_bscd_common_launch_procs;

    return HYD_SUCCESS;
}

HYD_status HYDT_bsci_rmk_lsf_init(void)
{
    HYDT_bsci_fns.query_node_list = HYDT_bscd_lsf_query_node_list;
    HYDT_bsci_fns.query_native_int = HYDT_bscd_lsf_query_native_int;

    return HYD_SUCCESS;
}
