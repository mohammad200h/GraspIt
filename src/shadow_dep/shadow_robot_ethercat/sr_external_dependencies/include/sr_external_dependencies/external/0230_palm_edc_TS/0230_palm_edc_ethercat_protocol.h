//
// ? 2010 Shadow Robot Company Limited.
//
// FileName:        this_node.h
// Dependencies:
// Processor:       PIC32
// Compiler:        MPLAB? C32
//
//  +------------------------------------------------------------------------+
//  | This file is part of The Shadow Robot PIC32 firmware code base.        |
//  |                                                                        |
//  | It is free software: you can redistribute it and/or modify             |
//  | it under the terms of the GNU General Public License as published by   |
//  | the Free Software Foundation, either version 3 of the License, or      |
//  | (at your option) any later version.                                    |
//  |                                                                        |
//  | It is distributed in the hope that it will be useful,                  |
//  | but WITHOUT ANY WARRANTY; without even the implied warranty of         |
//  | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          |
//  | GNU General Public License for more details.                           |
//  |                                                                        |
//  | You should have received a copy of the GNU General Public License      |
//  | along with this code repository. The text of the license can be found  |
//  | in Pic32/License/gpl.txt. If not, see <http://www.gnu.org/licenses/>.  |
//  +------------------------------------------------------------------------+
//
//
//
//  Doxygen
//  -------
//
//! @file
//!
//! The term "Command" means data going from the ROS PC to the Node on the robot
//! Previously known as "Incoming"
//!
//! The term "Status"  means data going from Node on the robot the to the ROS PC
//! Previously known as "Outgoing"
//!
//!
//! @addtogroup
//

#ifndef PALM_EDC_0230_ETHERCAT_PROTOCOL_H_INCLUDED
#define PALM_EDC_0230_ETHERCAT_PROTOCOL_H_INCLUDED

#include "../0220_palm_edc/0220_palm_edc_ethercat_protocol.h"

//! These are the data sent from the Palm to the host.
typedef struct
{
    EDC_COMMAND                 EDC_command;                        //!< This tells us the contents of the data below.
                                                                    //!< This value should be identical to the EDC_command
                                                                    //!< value which arrived from the host in the previous
                                                                    //!< EtherCAT packet

    //  Joint data & Mid/Prox Tactile data  //
    int16u					    sensors[SENSORS_NUM_0220+1];        //!<          74 bytes
    TACTILE_SENSOR_MID_PROX     tactile_mid_prox[5];                //!< 16*5  =  80 bytes
                                                                    //!< TOTAL = 154 bytes

    //  Fingertip Tactile data  //
    int32u                      tactile_data_type;                  //!<           4 bytes
    int16u                      tactile_data_valid;                 //!<           2 bytes          (Bit 0: FF. Bit 4: TH.)
    TACTILE_SENSOR_STATUS_v2    tactile[5];                         //!<  32*5 = 160 bytes
                                                                    //!< TOTAL = 166 bytes

    //  Aux SPI port data  //
    int32u                      aux_spi_data_type;                  //!<           4 bytes
    AUX_SPI_SENSOR              aux_spi_sensor;                     //!<          32 bytes
                                                                    //!< TOTAL =  36 bytes


    //  Motor data  //
    FROM_MOTOR_DATA_TYPE        motor_data_type;                    //!< Which data does motor[] contain?
                                                                    //!< This value should agree with the previous value
                                                                    //!< in ETHERCAT_DATA_STRUCTURE_0230_PALM_EDC_COMMAND
    int16s                      which_motors;                       //!< 0: Even motor numbers.  1: Odd motor numbers
                                                                    //!< This value should agree with the previous value
                                                                    //!< in ETHERCAT_DATA_STRUCTURE_0230_PALM_EDC_COMMAND

    int32u                      which_motor_data_arrived;           //!< Bit N set when motor CAN message arrives. Ideally, bits 0..19 get set
    int32u                      which_motor_data_had_errors;        //!< Bit N set when motor sends bad CAN message Ideally, no bits get set.

    MOTOR_DATA_PACKET           motor_data_packet[10];              //!< Data for 10 motors only. (Even ones or Odd ones)
                                                                    //!< 40 bytes
                                                                    //  TOTAL MOTOR DATA = 54 bytes


    int16u                      idle_time_us;                       //!< The idle time from when the palm has finished dealing with one EtherCAT
							    									//!< packet, and the next packet arriving. Ideally, this number should be more than 50.

} __attribute__((packed)) ETHERCAT_DATA_STRUCTURE_0230_PALM_EDC_STATUS;

#define STATUS_HEADER_START     0
#define STATUS_TACTILE_START    (offsetof(ETHERCAT_DATA_STRUCTURE_0230_PALM_EDC_STATUS, tactile_data_type))
#define STATUS_AUX_START        (offsetof(ETHERCAT_DATA_STRUCTURE_0230_PALM_EDC_STATUS, aux_spi_data_type))
#define STATUS_MOTOR_START      (offsetof(ETHERCAT_DATA_STRUCTURE_0230_PALM_EDC_STATUS,   motor_data_type))
#define STATUS_IDLETIME_START   (offsetof(ETHERCAT_DATA_STRUCTURE_0230_PALM_EDC_STATUS,      idle_time_us))

#define STATUS_TOTAL_LENGTH     (sizeof(ETHERCAT_DATA_STRUCTURE_0230_PALM_EDC_STATUS))
#define STATUS_JOINTS_LENGTH    (STATUS_TACTILE_START  - STATUS_HEADER_START)
#define STATUS_TACTILE_LENGTH   (STATUS_AUX_START      - STATUS_TACTILE_START)
#define STATUS_AUX_LENGTH       (STATUS_MOTOR_START    - STATUS_AUX_START)
#define STATUS_MOTOR_LENGTH     (STATUS_IDLETIME_START - STATUS_MOTOR_START)
#define STATUS_IDLETIME_LENGTH  (STATUS_TOTAL_LENGTH   - STATUS_IDLETIME_START)



//! These are the data sent by the host.
typedef struct
{
    EDC_COMMAND             EDC_command;                        //!< Header [0]:18  What type of data should the palm send back in the next packet?
                                                                //!< ------

    FROM_MOTOR_DATA_TYPE    from_motor_data_type;               //!< Which data does the host want from the motors?
    int16s                  which_motors;                       //!< Which motors does the host want to read?
                                                                //!< 0: Even motor numbers.  1: Odd motor numbers

    TO_MOTOR_DATA_TYPE      to_motor_data_type;                 //!< Request for specific motor data
    int32u                   tactile_data_type;                 //!< Request for specific tactile data
    int32u                       aux_data_type;                 //!< Request for specific aux data

    
    int16s                  motor_data[NUM_MOTORS];             //!< Motor Data [18]:40  Data to send to motors. Typically torque/PWM demands, or configs.

} __attribute__((packed)) ETHERCAT_DATA_STRUCTURE_0230_PALM_EDC_COMMAND;


#define PALM_0230_ETHERCAT_COMMAND_HEADER_SIZE  (  sizeof(EDC_COMMAND)          +   \
                                                   sizeof(FROM_MOTOR_DATA_TYPE) +   \
                                                   sizeof(int16s)               +   \
                                                   sizeof(TO_MOTOR_DATA_TYPE)   +   \
                                                   sizeof(int32u)               )

#define PALM_0230_ETHERCAT_STATUS_DATA_SIZE       sizeof(ETHERCAT_DATA_STRUCTURE_0230_PALM_EDC_STATUS)
#define PALM_0230_ETHERCAT_COMMAND_DATA_SIZE      sizeof(ETHERCAT_DATA_STRUCTURE_0230_PALM_EDC_COMMAND)

                                                    //  Now we need to be *sure* that the Host and the Slave definitely
                                                    //  agree on the size of the EtherCAT packets, even if the host is a
                                                    //  64-bit machine or something. So we have these calculated sizes.
                                                    //  The host and slave can ASSERT that the sizeof() the packets
                                                    //  matches the agreed sizes.
#define ETHERCAT_STATUS_0230_AGREED_SIZE     416    //! This is the size of the Status  EtherCAT packet (Status + CAN packet)
#define ETHERCAT_COMMAND_0230_AGREED_SIZE    62     //! This is the size of the Command EtherCAT packet (Status + CAN packet)



//! | ETHERCAT_COMMAND_DATA | ETHERCAT_CAN_BRIDGE_DATA_COMMAND | ETHERCAT_STATUS_DATA | ETHERCAT_CAN_BRIDGE_DATA_STATUS |
//! |                       |                                  |                      |
//! |                       |                                  |                      ETHERCAT_CAN_BRIDGE_DATA_STATUS_ADDRESS
//! |                       |                                  |
//! |                       |                                  ETHERCAT_STATUS_DATA_ADDRESS
//! |                       |
//! |                       ETHERCAT_CAN_BRIDGE_DATA_COMMAND_ADDRESS
//! |
//! ETHERCAT_COMMAND_DATA_ADDRESS
//!
//!

#define PALM_0230_ETHERCAT_COMMAND_DATA_ADDRESS               0x1000
#define PALM_0230_ETHERCAT_CAN_BRIDGE_DATA_COMMAND_ADDRESS    (PALM_0230_ETHERCAT_COMMAND_DATA_ADDRESS            + PALM_0230_ETHERCAT_COMMAND_DATA_SIZE)

#define PALM_0230_ETHERCAT_STATUS_DATA_ADDRESS                (PALM_0230_ETHERCAT_CAN_BRIDGE_DATA_COMMAND_ADDRESS + ETHERCAT_CAN_BRIDGE_DATA_SIZE)
#define PALM_0230_ETHERCAT_CAN_BRIDGE_DATA_STATUS_ADDRESS     (PALM_0230_ETHERCAT_STATUS_DATA_ADDRESS             + PALM_0230_ETHERCAT_STATUS_DATA_SIZE)



#endif
