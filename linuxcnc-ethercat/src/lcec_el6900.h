//
//    Copyright (C) 2018 Sascha Ittner <sascha.ittner@modusoft.de>
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; if not, write to the Free Software
//    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
//
#ifndef _LCEC_EL6900_H_
#define _LCEC_EL6900_H_

#include "lcec.h"

#define LCEC_EL6900_VID LCEC_BECKHOFF_VID
#define LCEC_EL6900_PID 0x1AF43052

#define LCEC_EL6900_PDOS 5

#define LCEC_EL6900_PARAM_SLAVEID      1
#define LCEC_EL6900_PARAM_STDIN_NAME   2
#define LCEC_EL6900_PARAM_STDOUT_NAME  3

#define LCEC_EL6900_PARAM_SLAVE_PDOS    4
#define LCEC_EL6900_PARAM_SLAVE_CH_PDOS 2

#define LCEC_EL6900_DIO_MAX_COUNT 32

int lcec_el6900_preinit(struct lcec_slave *slave);
int lcec_el6900_init(int comp_id, struct lcec_slave *slave, ec_pdo_entry_reg_t *pdo_entry_regs);

#endif

