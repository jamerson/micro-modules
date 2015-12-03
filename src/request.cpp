/*
 * request.cpp
 *
 *  Created on: Nov 25, 2015
 *      Author: jamersonlima
 */

#include <iostream>
#include "request.h"
#include "request_body.h"

Request::Request(char request_method, std::string endpoint, RequestBody *body): _request_method(request_method), _endpoint(endpoint), _body(body) {}

char Request::get_request_method(){
    return _request_method;
}

RequestBody * Request::get_body(){
    return _body;
}

std::string Request::get_endpoint(){
    return _endpoint;
}
