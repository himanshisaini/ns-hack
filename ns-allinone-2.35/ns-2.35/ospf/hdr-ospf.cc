/*
 * hdp-ospf.cc
 * Copyright (C) 2006 by the University of Extremadura
 * This program is free software: you can redistribute it and/or modify it 
 * under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 3 of the License, or 
 * (at your option) any later version. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without 
 * even the implied warranty of MERCHANTABILITY or FITNESS FOR 
 * A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details. You should have received a copy of the GNU General 
 * Public License along with this program. If not, see <http://www.gnu.org/licenses/>. 
 */

// by Inés María Romero Dávila (inroda04@alumnos.unex.es)
// and Alfonso Gazo Cervero (agazo@unex.es)

#include "hdr-ospf.h"

//**********************************************************************************
// OSPFHeaderClass Constructor
//**********************************************************************************

int hdr_Ospf::offset_;
static class OSPFHeaderClass : public PacketHeaderClass {
public:
	OSPFHeaderClass() : PacketHeaderClass("PacketHeader/rtProtoOSPF",
					     sizeof(hdr_Ospf)) {
		bind_offset(&hdr_Ospf::offset_);
	}
} class_ospfhdr;