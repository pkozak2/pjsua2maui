/*
 * Copyright (c) 2011-2019 Belledonne Communications SARL.
 *
 * This file is part of bcg729.
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
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef VAD_H
#define VAD_H

/*****************************************************************************/
/* initBcg729VADChannel : create context structure and initialise it         */
/*    return value :                                                         */
/*      - the VAD channel context data                                       */
/*                                                                           */
/*****************************************************************************/
bcg729VADChannelContextStruct *initBcg729VADChannel();

/*******************************************************************************************/
/* bcg729_vad : voice activity detection from AnnexB                                       */
/*    parameters:                                                                          */
/*      -(i/o):VADChannelContext : context containing all informations needed for VAD      */
/*                                                                                         */
/*    returns : 1 for active voice frame, 0 for silence frame                              */
/*                                                                                         */
/*******************************************************************************************/
uint8_t bcg729_vad(bcg729VADChannelContextStruct *VADChannelContext, word32_t reflectionCoefficient, word16_t *LSFCoefficients, word32_t *autoCorrelationCoefficients, int8_t autoCorrelationCoefficientsScale, const word16_t *signalCurrentFrame);

#endif /* ifndef VAD_H */
