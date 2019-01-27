/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "MEST" // diy fork from AlienFlight F1=STM32F103+GY-91
#define USE_TARGET_CONFIG

#define LED0_PIN                PB4
#define LED1_PIN                PB5

#define USE_BEEPER
#define BEEPER_PIN              PA12

#define USE_EXTI
//#define MPU_INT_EXTI            PC5
//#define DEBUG_MPU_DATA_READY_INTERRUPT
#define USE_MPU_DATA_READY_SIGNAL
#define ENSURE_MPU_DATA_READY_IS_LOW


#define USE_ACC
#define USE_ACC_SPI_MPU9250
#define ACC_MPU9250_ALIGN       CW270_DEG

#define USE_GYRO
#define USE_GYRO_SPI_MPU9250
#define GYRO_MPU9250_ALIGN      CW270_DEG

#define USE_MAG
#define USE_MAG_AK8963
#define MAG_AK8963_ALIGN        CW270_DEG

#define USE_BARO
#define USE_BARO_SPI_BMP280


#define BMP280_CS_PIN           PB11
#define MPU9250_CS_PIN          PB10

#define BMP280_SPI_INSTANCE     SPI1
#define MPU9250_SPI_INSTANCE    SPI1


#define USE_SPI

#define USE_SPI_DEVICE_1 //MPU9250 + BMP280
#define SPI1_NSS_PIN            PA4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PB14
#define SPI1_MOSI_PIN           PB15


#define USE_UART1
#define USE_UART2
#define SERIAL_PORT_COUNT       2

#define USE_I2C
#define USE_I2C_DEVICE_2
#define I2C_DEVICE              (I2CDEV_2)

/*
#define USE_ADC
#define CURRENT_METER_ADC_PIN   PB1
#define VBAT_ADC_PIN            PA4
#define RSSI_ADC_PIN            PA1
#define EXTERNAL1_ADC_PIN       PA5

#define BINDPLUG_PIN            PB5
*/
#define DEFAULT_FEATURES        FEATURE_MOTOR_STOP
#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SPEKTRUM2048
#define SERIALRX_UART           SERIAL_PORT_USART2
#define RX_CHANNELS_TAER

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

// IO - assuming all IOs on 48pin package
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         ( BIT(13) | BIT(14) | BIT(15) )

#define USABLE_TIMER_CHANNEL_COUNT 14
#define USED_TIMERS             ( TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) )
