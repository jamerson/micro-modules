/*
 * console_printer.cpp
 *
 *  Created on: Dec 3, 2015
 *      Author: jamersonlima
 */

#include <iostream>
#include "console_printer.h"
#include "request.h"
#include "console_printer_request_body.h"

int ConsolePrinter::print(std::string message)
{
    std::cout << message << std::endl;

    return 0;
}

int ConsolePrinter::send(Request request)
{
    if(request.get_request_method() == 'O' && request.get_endpoint() == "output") {
        RequestBody * body = request.get_body();
        ConsolePrinterRequestBody * console_body = (ConsolePrinterRequestBody *)body;
        std::cout << "Console Printer Output " << console_body->get_message() << std::endl;

        return 0;
    }

    return 1;
}

