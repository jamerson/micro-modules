/*
 * console_printer_request_body.h
 *
 *  Created on: Nov 30, 2015
 *      Author: jamersonlima
 */

#ifndef SRC_CONSOLE_PRINTER_REQUEST_BODY_H_
#define SRC_CONSOLE_PRINTER_REQUEST_BODY_H_

#include <iostream>
#include "request_body.h"

class ConsolePrinterRequestBody: public RequestBody {
private:
    std::string _message;

public:
    ConsolePrinterRequestBody(std::string message);
    std::string get_message();
};

#endif /* SRC_CONSOLE_PRINTER_REQUEST_BODY_H_ */
