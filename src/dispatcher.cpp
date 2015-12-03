/*
 * dispatcher.cpp
 *
 *  Created on: Nov 30, 2015
 *      Author: jamersonlima
 */

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <stack>
#include "dispatcher.h"
#include "console_printer_request_body.h"
#include "request_body.h"

using namespace std;

int Dispatcher::send(Request request) {
    stack<string> tokens;
    string endpoint = request.get_endpoint();
    istringstream iss(endpoint);
    copy(istream_iterator<string>(iss),
         istream_iterator<string>(),
         ostream_iterator<string>(tokens, "/"));

    if(request.get_request_method() == 'O' && request.get_endpoint() == "console") {
        RequestBody * body = request.get_body();
        ConsolePrinterRequestBody * console_body = (ConsolePrinterRequestBody *)body;
        cout << "Console Printer Output " << console_body->get_message() << endl;

        return 0;
    }

    return 1;
}
