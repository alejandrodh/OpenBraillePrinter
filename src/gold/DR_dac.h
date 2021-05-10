/*
 * Open Braille Printer (C) 2017-2021 Adhsoft0@gmail.com
 * See LICENSE.txt for more details.
*/

/*
 *  DR_dac.h
 *
 *  Created on: 30 de ago. de 2017
 *      Author: Alejandro
 */

/***********************************************************************************************************************************
 *** MODULO
 **********************************************************************************************************************************/
#ifndef DRIVERLPC_DR_DAC_H_
#define DRIVERLPC_DR_DAC_H_

/***********************************************************************************************************************************
 *** INCLUDES GLOBALES
 **********************************************************************************************************************************/
#include "./../DR_tipos.h"

/***********************************************************************************************************************************
 *** DEFINES GLOBALES
 **********************************************************************************************************************************/
#define 	PLAYLIST_SIZE	 15

/***********************************************************************************************************************************
 *** MACROS GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** TIPO DE DATOS GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** VARIABLES GLOBALES
 **********************************************************************************************************************************/
extern __RW uint8_t  dac_inicializado, playlist_start, playlist_cantidad;
extern __RW uint32_t muestra_actual;
extern __RW audio_t* playlist[ PLAYLIST_SIZE ];

/***********************************************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 **********************************************************************************************************************************/
void dac_y_timer_init ( void );
void TIMER0_IRQHandler( void );

#endif /* DRIVERLPC_DR_DAC_H_ */
