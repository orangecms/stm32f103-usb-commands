#ifndef __MAIN_H
#define __MAIN_H

#include <stm32f10x.h>
#include <stm32f10x_gpio.h>
#include <stm32f10x_rcc.h>
#include <stm32f10x_usart.h>

#define CR '\r'
#define LF '\n'
#define CRLF "\r\n"

#define COMMAND_MAX_LENGTH 16

// commands
#define A1_ON  "a1 on"
#define A1_OFF "a1 off"
#define C13_ON  "c13 on"
#define C13_OFF "c13 off"
#define GET_VERSION "\x0B\x05"

// messages
#define UNKNOWN_COMMAND "unknown command"
#define COMMAND_TOO_LONG "command too long"
#define HELLO "Hello! :-)"
#define VERSION "PSLab V1.23"

#endif
