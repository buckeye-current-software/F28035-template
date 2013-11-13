/*
 * all.h
 *
 *  Created on: Oct 29, 2013
 *      Author: Nathan
 */

#ifndef ALL_H_
#define ALL_H_

#include "DSP28x_Project.h"     // Device Headerfile and Examples Include File
#include "op.h"
#include "data.h"
#include "Init.h"
#include "SensorCov.h"
#include "Boot.h"
#include "PowerDown.h"
#include "common.h"
#include "main.h"
#include "stopwatch.h"
#include "clock.h"
#include "can.h"

extern ops_struct ops;
extern data_struct data;

//todo NATHAN set correct freq
#define CPU_FREQ_MHZ	60

#endif /* ALL_H_ */
