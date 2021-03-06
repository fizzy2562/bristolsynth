
/*
 *  Diverse Bristol audio routines.
 *  Copyright (c) by Nick Copeland <nickycopeland@hotmail.com> 1996,2012
 *
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef EXPDCO_H
#define EXPDCO_H

#define EXPDCO_WAVE_SZE 1024
#define EXPDCO_WAVE_SZE_M 1023
#define EXPDCO_WAVE_SZE_2 512
#define EXPDCO_WAVE_SZE_3 1380

#define BRISTOL_SQR 8

typedef struct BristolEXPDCO {
	bristolOPSpec spec;
	float *wave[8];
	float *null;
} bristolEXPDCO;

typedef struct BristolEXPDCOlocal {
	unsigned int flags;
	float wtp;
	float note_diff;
	int tune_diff;
	float cpwm;
	float lsv;
	float ssg;
} bristolEXPDCOlocal;

#endif /* EXPDCO_H */

