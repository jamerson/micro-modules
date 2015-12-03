/*
 * console_printer_request_body.cpp
 *
 *  Created on: Nov 30, 2015
 *      Author: jamersonlima
 */

#include "console_printer_request_body.h"
#include <iostream>

ConsolePrinterRequestBody::ConsolePrinterRequestBody(std::string message) {
    _message = message;
}

std::string ConsolePrinterRequestBody::get_message() {
    return _message;
}

