/*
 * dispatcher.h
 *
 *  Created on: Nov 30, 2015
 *      Author: jamersonlima
 */

#ifndef SRC_DISPATCHER_H_
#define SRC_DISPATCHER_H_

#include "service.h"

class Dispatcher: public Service {
public:
    int send(Request request);
};

#endif /* SRC_DISPATCHER_H_ */
