/*
 *  ctermid() - POSIX 1003.1b 4.7.1 - Generate Terminal Pathname
 *
 *  COPYRIGHT (c) 1989-1998.
 *  On-Line Applications Research Corporation (OAR).
 *  Copyright assigned to U.S. Government, 1994.
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.OARcorp.com/rtems/license.html.
 *
 *  $Id$
 */

#include <rtems.h>
#if defined(RTEMS_NEWLIB)

#include <stdio.h>

static ctermid_name = "/dev/console";

char *ctermid(
  char *s
)
{
  if ( !s )
    return ctermid_name;

  strcpy( s, ctermid_name );
  return s;
}

#endif
