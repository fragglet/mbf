// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id$
//
// Copyright (C) 1993-1996 by id Software, Inc.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// DESCRIPTION:
//  Nil.
//    
//-----------------------------------------------------------------------------


#ifndef __M_ARGV__
#define __M_ARGV__

//
// MISC
//
extern int  myargc;
extern char **myargv;

// Returns the position of the given parameter in the arg list (0 if not found).
int M_CheckParm(const char *check);

#endif

//----------------------------------------------------------------------------
//
// $Log$
// Revision 1.2  2000-08-12 21:29:28  fraggle
// change license header
//
// Revision 1.1.1.1  2000/07/29 13:20:39  fraggle
// imported sources
//
// Revision 1.3  1998/05/01  14:26:18  killough
// beautification
//
// Revision 1.2  1998/01/26  19:27:05  phares
// First rev with no ^Ms
//
// Revision 1.1.1.1  1998/01/19  14:02:58  rand
// Lee's Jan 19 sources
//
//
//----------------------------------------------------------------------------
