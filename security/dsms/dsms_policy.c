/*
 * Copyright (c) 2018 Samsung Electronics Co., Ltd. All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 */

#include <linux/dsms.h>

#include "dsms_access_control.h"

// Policy entries *MUST BE* ordered by function_name field, as the find
// function uses binary search to find the function entry in the policy table.


size_t dsms_policy_size(void)
{
	return (sizeof dsms_policy)/(sizeof *dsms_policy);
}
