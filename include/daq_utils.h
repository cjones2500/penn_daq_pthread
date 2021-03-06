/** \file daq_utils.h */

#ifndef __DAQ_UTILS_H
#define __DAQ_UTILS_H

void sigint_func(int sig); //!< handles ctrl-C
void start_logging();
void stop_logging();
void SwapLongBlock(void* p, int32_t n); //!< handles changing endianness
void SwapShortBlock(void* p, int32_t n); //!< handles changing endianness

#endif
