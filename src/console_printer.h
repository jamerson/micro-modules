/*
 * console_printer.h
 *
 *  Created on: Dec 3, 2015
 *      Author: jamersonlima
 */

#ifndef SRC_CONSOLE_PRINTER_H_
#define SRC_CONSOLE_PRINTER_H_

#include <iostream>
#include "service.h"

class ConsolePrinter: public Service {
private:
    int print(std::string);
public:
    int send(Request);
};

#endif /* SRC_CONSOLE_PRINTER_H_ */
