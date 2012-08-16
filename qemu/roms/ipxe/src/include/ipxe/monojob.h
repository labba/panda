#ifndef _IPXE_MONOJOB_H
#define _IPXE_MONOJOB_H

/** @file
 *
 * Single foreground job
 *
 */

FILE_LICENCE ( GPL2_OR_LATER );

struct interface;

extern struct interface monojob;

extern int monojob_wait ( const char *string );

#endif /* _IPXE_MONOJOB_H */