/*
 * Open Braille Printer (C) 2017-2021 Adhsoft0@gmail.com
 * See LICENSE.txt for more details.
*/
/*
 * PR_audio.h
 *
 *  Created on: 24 de set. de 2017
 */

/***********************************************************************************************************************************
 *** MODULO
 **********************************************************************************************************************************/
#ifndef PRIMITIVAS_PR_AUDIO_H_
#define PRIMITIVAS_PR_AUDIO_H_

#include "../DR_tipos.h"

/***********************************************************************************************************************************
 *** INCLUDES GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** DEFINES GLOBALES
 **********************************************************************************************************************************/
#define AUDIO_PC 0
#define AUDIO_INMEDIATO 1
#define AUDIO_LISTO_PARA_IMPRIMIR 2
#define AUDIO_BUFFER 3
#define AUDIO_ERROR_CRITICO 4
#define AUDIO_HOJA_CARGADA 5
#define AUDIO_MODO 6
#define AUDIO_NO_HAY_HOJA 7
#define AUDIO_ULTIMO_RENGLON 8
#define AUDIO_SONIDO_ACTIVADO 9
#define AUDIO_SONIDO_TECLA 10
#define AUDIO_NO_HAY_MAS_MEMORIA_PARA_ESCRIBIR 11
#define AUDIO_NO_HAY_MAS_ESPACIO_EN_LA_HOJA 12
#define AUDIO_BIENVENIDO 13

/***********************************************************************************************************************************
 *** MACROS GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** TIPO DE DATOS GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** VARIABLES GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 **********************************************************************************************************************************/
void reproducir_audio( uint8_t );
void detener_audio();


#endif /* PRIMITIVAS_PR_AUDIO_H_ */
