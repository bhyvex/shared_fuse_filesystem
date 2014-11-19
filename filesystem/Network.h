#ifndef NETWORK_H
#define NETWORK_H

#include "../Message.h"

class Network {
    private:
        int _port;
        // Singleton class.
        static Network * _instance;
        Network() {};
    public:
        static Network * getInstance() {
            if (_instance == 0)
                _instance = new Network();
            return _instance;
        }      
        // This do the initial handshale with the server and set up the 
        // port number.
        void handShake();
        // TODO
        int send(Message *msg);
        // TODO
        int startListening();
        // TODO: Install Handler.
};
#endif
