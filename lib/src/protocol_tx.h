/*
 * PD Buddy - USB Power Delivery for everyone
 * Copyright (C) 2017 Clayton G. Hobbs <clay@lakeserv.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PDB_PROTOCOL_TX_H
#define PDB_PROTOCOL_TX_H

#include <stdint.h>

#include <ch.h>

#include <pdb.h>


/* Events for the Protocol TX thread */
#define PDB_EVT_PRLTX_RESET EVENT_MASK(0)
#define PDB_EVT_PRLTX_I_TXSENT EVENT_MASK(1)
#define PDB_EVT_PRLTX_I_RETRYFAIL EVENT_MASK(2)
#define PDB_EVT_PRLTX_DISCARD EVENT_MASK(3)
#define PDB_EVT_PRLTX_MSG_TX EVENT_MASK(4)

/* The Protocol TX thread object */
extern thread_t *pdb_prltx_thread;

/* Protocol layer TX thread mailbox */
extern mailbox_t pdb_prltx_mailbox;

/* The ID to be used in transmission */
extern int8_t pdb_prltx_messageidcounter;

/*
 * Start the Protocol TX thread
 */
void pdb_prltx_run(struct pdb_config *cfg);


#endif /* PDB_PROTOCOL_TX_H */
