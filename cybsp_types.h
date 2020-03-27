/***************************************************************************//**
* \file CY8CPROTO-064B0S3/cybsp_types.h
*
* Description:
* Provides APIs for interacting with the hardware contained on the Cypress
* CY8CPROTO-064B0S3 kit.
*
********************************************************************************
* \copyright
* Copyright 2018-2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#pragma once

#if defined(CY_USING_HAL)
#include "cyhal_pin_package.h"
#endif
#if defined(COMPONENT_BSP_DESIGN_MODUS) || defined(COMPONENT_CUSTOM_DESIGN_MODUS)
#include "cycfg.h"
#endif

#if defined(__cplusplus)
extern "C" {
#endif

/**
* \addtogroup group_bsp_settings BSP Settings
* \{
*
* <div class="category">Peripheral Default HAL Settings:</div>
* | Resource | Parameter | Value | Remarks |
* | :------: | :-------: | :---: | :------ |
* | ADC      | VREF      | 1.2 V | |
* | ^        | Measurement type | Single Ended | |
* | ^        | Input voltage range | 0 to 2.4 V (0 to 2*VREF) | |
* | ^        | Output range | 0x000 to 0x7FF | |
* | DAC      | Reference source | VDDA | |
* | ^        | Input range | 0x000 to 0xFFF | |
* | ^        | Output range | 0 to VDDA | |
* | ^        | Output type | Unbuffered output | |
* | I2C      | Role | Master | Configurable to slave mode through HAL function |
* | ^        | Data rate | 100 kbps | Configurable through HAL function |
* | ^        | Drive mode of SCL & SDA pins | Open Drain (drives low) | External pull-up resistors are required |
* | LpTimer  | Uses WCO (32.768 kHz) as clock source & MCWDT as counter. 1 count = 1/32768 second or 32768 counts = 1 second. |||
* | SPI      | Data rate | 100 kpbs | Configurable through HAL function |
* | ^        | Slave select polarity | Active low | |
* | UART     | Flow control | No flow control | Configurable through HAL function |
* | ^        | Data format | 8N1 | Configurable through HAL function |
* | ^        | Baud rate | 115200 | Configurable through HAL function |
*/
/** \} group_bsp_settings */

/**
* \addtogroup group_bsp_pin_state Pin States
* \{
*/

/** Pin state for the LED on. */
#ifndef CYBSP_LED_STATE_ON
#define CYBSP_LED_STATE_ON          (0U)
#endif
/** Pin state for the LED off. */
#ifndef CYBSP_LED_STATE_OFF
#define CYBSP_LED_STATE_OFF         (1U)
#endif

/** Pin state for when a button is pressed. */
#ifndef CYBSP_BTN_PRESSED
#define CYBSP_BTN_PRESSED           (0U)
#endif
/** Pin state for when a button is released. */
#ifndef CYBSP_BTN_OFF
#define CYBSP_BTN_OFF               (1U)
#endif

/** \} group_bsp_pin_state */

#if defined(CY_USING_HAL)


/**
* \addtogroup group_bsp_pins_comm Communication Pins
* \{
*/

/** Pin: UART RX */
#ifndef CYBSP_UART_RX
#define CYBSP_UART_RX               (P5_0)
#endif
/** Pin: UART TX */
#ifndef CYBSP_UART_TX
#define CYBSP_UART_TX               (P5_1)
#endif

/** Pin: UART RX */
#ifndef CYBSP_DEBUG_UART_RX
#define CYBSP_DEBUG_UART_RX         (P5_0)
#endif
/** Pin: UART TX */
#ifndef CYBSP_DEBUG_UART_TX
#define CYBSP_DEBUG_UART_TX         (P5_1)
#endif

/** Pin: I2C SCL */
#ifndef CYBSP_I2C_SCL
#define CYBSP_I2C_SCL               (P6_4)
#endif
/** Pin: I2C SDA */
#ifndef CYBSP_I2C_SDA
#define CYBSP_I2C_SDA               (P6_5)
#endif

/** Pin: SWDIO */
#ifndef CYBSP_SWDIO
#define CYBSP_SWDIO                 (P6_6)
#endif
/** Pin: SWDCK */
#ifndef CYBSP_SWDCK
#define CYBSP_SWDCK                 (P6_7)
#endif
/** Pin: SWO */
#ifndef CYBSP_SWO
#define CYBSP_SWO                   (P6_4)
#endif

/** Pin: QUAD SPI SS */
#ifndef CYBSP_QSPI_SS
#define CYBSP_QSPI_SS               (P11_2)
#endif
/** Pin: QUAD SPI D3 */
#ifndef CYBSP_QSPI_D3
#define CYBSP_QSPI_D3               (P11_3)
#endif
/** Pin: QUAD SPI D2 */
#ifndef CYBSP_QSPI_D2
#define CYBSP_QSPI_D2               (P11_4)
#endif
/** Pin: QUAD SPI D1 */
#ifndef CYBSP_QSPI_D1
#define CYBSP_QSPI_D1               (P11_5)
#endif
/** Pin: QUAD SPI D0 */
#ifndef CYBSP_QSPI_D0
#define CYBSP_QSPI_D0               (P11_6)
#endif
/** Pin: QUAD SPI SCK */
#ifndef CYBSP_QSPI_SCK
#define CYBSP_QSPI_SCK              (P11_7)
#endif

/** \} group_bsp_pins_comm */


/**
* \addtogroup group_bsp_pins_led LED Pins
* \{
*/

/** LED 3; User LED1 (Red) */
#ifndef CYBSP_LED3
#define CYBSP_LED3                  (P2_7)
#endif
/** LED 4; User LED2 (Green) */
#ifndef CYBSP_LED4
#define CYBSP_LED4                  (P3_1)
#endif

/** LED 3; User LED1 */
#ifndef CYBSP_USER_LED1
#define CYBSP_USER_LED1             (CYBSP_LED3)
#endif
/** LED 4; User LED2 */
#ifndef CYBSP_USER_LED2
#define CYBSP_USER_LED2             (CYBSP_LED4)
#endif
/** LED 3; User LED1 */
#ifndef CYBSP_USER_LED
#define CYBSP_USER_LED              (CYBSP_USER_LED1)
#endif

/** \} group_bsp_pins_led */

/**
* \addtogroup group_bsp_pins_btn Button Pins
* \{
*/

/** Switch 2; User Button 1 */
#ifndef CYBSP_SW2
#define CYBSP_SW2                   (P0_4)
#endif

/** Switch 2; User Button 1 */
#ifndef CYBSP_USER_BTN1
#define CYBSP_USER_BTN1             (CYBSP_SW2)
#endif
/** Switch 2; User Button 1 */
#ifndef CYBSP_USER_BTN
#define CYBSP_USER_BTN              (CYBSP_USER_BTN1)
#endif

/** \} group_bsp_pins_btn */




#endif /* defined(CY_USING_HAL) */

#if defined(__cplusplus)
}
#endif