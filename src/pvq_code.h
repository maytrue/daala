/*
    Daala video codec
    Copyright (C) 2012 Daala project contributors

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

*/

#ifndef PVQ_CODE_H_
#define PVQ_CODE_H_

#include "entenc.h"
#include "entdec.h"

extern const ogg_uint16_t cdf_table[][16];
extern const unsigned char decayE[];

void laplace_encode_special(od_ec_enc *enc,int pos,unsigned decay,int max);
int laplace_decode_special(od_ec_dec *dec,unsigned decay,int max);

void pvq_encoder(od_ec_enc *enc,const int *y,int N,int K,int *num,int *den,int *u);
void pvq_decoder(od_ec_dec *dec,int *y,int N,int K,int *num,int *den,int *u);

void pvq_encode_delta(od_ec_enc *enc, const int *y,int N,int K,int *num, int *den);
void pvq_decode_delta(od_ec_dec *dec, int *y,int N,int K,int *num, int *den);

#endif
