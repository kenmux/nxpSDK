/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_


/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/* PTA18 (number AC19), UART0_TX */
#define BOARD_UART0_TX_PERIPHERAL                                        LPUART0   /*!< Device name: LPUART0 */
#define BOARD_UART0_TX_SIGNAL                                          lpuart_tx   /*!< LPUART0 signal: lpuart_tx */
#define BOARD_UART0_TX_PIN_NAME                                            PTA18   /*!< Pin name */
#define BOARD_UART0_TX_PIN_FUNCTION_ID                   IOMUXC_PTA18_LPUART0_TX   /*!< Pin function id */
#define BOARD_UART0_TX_LABEL                                          "UART0_TX"   /*!< Label */
#define BOARD_UART0_TX_NAME                                           "UART0_TX"   /*!< Identifier name */

/* PTA19 (number AB19), UART0_RX */
#define BOARD_UART0_RX_PERIPHERAL                                        LPUART0   /*!< Device name: LPUART0 */
#define BOARD_UART0_RX_SIGNAL                                          lpuart_rx   /*!< LPUART0 signal: lpuart_rx */
#define BOARD_UART0_RX_PIN_NAME                                            PTA19   /*!< Pin name */
#define BOARD_UART0_RX_PIN_FUNCTION_ID                   IOMUXC_PTA19_LPUART0_RX   /*!< Pin function id */
#define BOARD_UART0_RX_LABEL                                          "UART0_RX"   /*!< Label */
#define BOARD_UART0_RX_NAME                                           "UART0_RX"   /*!< Identifier name */

/* PTA3 (number AF14), VOL+ */
#define BOARD_VOL_UP_PERIPHERAL                                              PTA   /*!< Device name: PTA */
#define BOARD_VOL_UP_SIGNAL                                                 port   /*!< PTA signal: port */
#define BOARD_VOL_UP_CHANNEL                                                   3   /*!< PTA port channel: 3 */
#define BOARD_VOL_UP_PIN_NAME                                               PTA3   /*!< Pin name */
#define BOARD_VOL_UP_PIN_FUNCTION_ID                            IOMUXC_PTA3_PTA3   /*!< Pin function id */
#define BOARD_VOL_UP_LABEL                                                "VOL+"   /*!< Label */
#define BOARD_VOL_UP_NAME                                               "VOL_UP"   /*!< Identifier name */

/* PTB12 (number AC8), I2C3_SCL */
#define BOARD_I2C3_SCL_PERIPHERAL                                         LPI2C3   /*!< Device name: LPI2C3 */
#define BOARD_I2C3_SCL_SIGNAL                                          lpi2c_scl   /*!< LPI2C3 signal: lpi2c_scl */
#define BOARD_I2C3_SCL_PIN_NAME                                            PTB12   /*!< Pin name */
#define BOARD_I2C3_SCL_PIN_FUNCTION_ID                   IOMUXC_PTB12_LPI2C3_SCL   /*!< Pin function id */
#define BOARD_I2C3_SCL_LABEL                                          "I2C3_SCL"   /*!< Label */
#define BOARD_I2C3_SCL_NAME                                           "I2C3_SCL"   /*!< Identifier name */

/* PTB13 (number AD8), I2C3_SDA */
#define BOARD_I2C3_SDA_PERIPHERAL                                         LPI2C3   /*!< Device name: LPI2C3 */
#define BOARD_I2C3_SDA_SIGNAL                                          lpi2c_sda   /*!< LPI2C3 signal: lpi2c_sda */
#define BOARD_I2C3_SDA_PIN_NAME                                            PTB13   /*!< Pin name */
#define BOARD_I2C3_SDA_PIN_FUNCTION_ID                   IOMUXC_PTB13_LPI2C3_SDA   /*!< Pin function id */
#define BOARD_I2C3_SDA_LABEL                                          "I2C3_SDA"   /*!< Label */
#define BOARD_I2C3_SDA_NAME                                           "I2C3_SDA"   /*!< Identifier name */

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif


/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);                                 /*!< Function assigned for the core: Cortex-M4[cm4] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_I2C_ConfigurePins(void);                        /*!< Function assigned for the core: Cortex-M4[cm4] */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
