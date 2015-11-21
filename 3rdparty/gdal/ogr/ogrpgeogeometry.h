/******************************************************************************
 * $Id: ogrpgeogeometry.h 21540 2011-01-22 00:06:04Z rouault $
 *
 * Project:  OpenGIS Simple Features Reference Implementation
 * Purpose:  Implements decoder of shapebin geometry for PGeo
 * Author:   Frank Warmerdam, warmerdam@pobox.com
 *
 ******************************************************************************
 * Copyright (c) 2005, Frank Warmerdam <warmerdam@pobox.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ****************************************************************************/

#ifndef _OGR_PGEOGEOMETRY_H_INCLUDED
#define _OGR_PGEOGEOMETRY_H_INCLUDED

#include "ogr_geometry.h"

#define SHPT_NULL          0

#define SHPT_POINT         1
#define SHPT_POINTM       21
#define SHPT_POINTZM      11
#define SHPT_POINTZ        9

#define SHPT_MULTIPOINT    8
#define SHPT_MULTIPOINTM  28
#define SHPT_MULTIPOINTZM 18
#define SHPT_MULTIPOINTZ  20

#define SHPT_ARC           3
#define SHPT_ARCM         23
#define SHPT_ARCZM        13
#define SHPT_ARCZ         10

#define SHPT_POLYGON       5
#define SHPT_POLYGONM     25
#define SHPT_POLYGONZM    15
#define SHPT_POLYGONZ     19

#define SHPT_MULTIPATCHM  31
#define SHPT_MULTIPATCH   32


OGRErr OGRCreateFromShapeBin( GByte *pabyShape,
                              OGRGeometry **ppoGeom,
                              int nBytes );

#endif