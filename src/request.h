/*
 * request.h
 *
 *  Created on: Nov 25, 2015
 *      Author: jamersonlima
 */

#ifndef SRC_REQUEST_H_
#define SRC_REQUEST_H_

#include <iostream>
#include "request_body.h"

class Request {
private:
    char _request_method;
    std::string _endpoint;
    RequestBody *_body;

public:
    Request(char request_method, std::string endpoint, RequestBody *body);
    char get_request_method();
    std::string get_endpoint();
    RequestBody * get_body();
};

#endif /* SRC_REQUEST_H_ */
