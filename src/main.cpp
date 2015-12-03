#include <iostream>
#include "service.h"
#include "request.h"
#include "dispatcher.h"
#include "console_printer_request_body.h"

using namespace std;

int main()
{
	cout << "Starting MICRO modules" << endl;

	Dispatcher dispatcher;
	ConsolePrinterRequestBody body("Hello world");
	Request request('O',"console/output", &body);
	dispatcher.send(request);

	return 0;
}
