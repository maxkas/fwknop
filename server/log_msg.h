/*
 *****************************************************************************
 *
 * File:    log_msg.h
 *
 * Author:  Damien Stuart (dstuart@dstuart.org)
 *
 * Purpose: Header file for log_msg.c.
 *
 * Copyright 2010 Damien Stuart (dstuart@dstuart.org)
 *
 *  License (GNU Public License):
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
 *  USA
 *
 *****************************************************************************
*/
#ifndef LOG_MSG_H
#define LOG_MSG_H

#include <syslog.h>
#include <stdarg.h>

/* The LOG_STDERR value can be or'ed with the msg_log() level value
 * to cause message going to syslog to be printed to stderr as well.
 * LOG_STDERR_ONLY can be set to send a message stderr with a copy to
 * syslog as well.
*/
#define LOG_STDERR      0x1000
#define LOG_STDERR_ONLY 0x3000
#define LOG_STDERR_MASK 0x0FFF

void init_logging(fko_srv_options_t *opts);
void free_logging(void);
void set_log_facility(int fac);
void log_msg(int, char*, ...);

#endif /* LOG_MSG_H */

/***EOF***/
