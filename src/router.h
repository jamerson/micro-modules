#include <iostream>

class Router
{
    private:
        //queue that holds all the requests received and waiting to be consumed by the router 
        std::queue<Reques> requests_queue;
        
    public:
        //This method receives a request and add it to the internal queue
        void request(std::string route);
}