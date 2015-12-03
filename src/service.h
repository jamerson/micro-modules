/*
 * service.h
 *
 *  Created on: Nov 25, 2015
 *      Author: jamersonlima
 */

#ifndef SRC_SERVICE_H_
#define SRC_SERVICE_H_

#include <iostream>
#include <queue>
#include "request.h"

class Service {
public:
	virtual int send(Request)=0;
};

#endif /* SRC_SERVICE_H_ */
