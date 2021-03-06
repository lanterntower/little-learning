#pragma once

#include <unordered_map>
#include <string>
#include <vector>
#include <memory>
#include "DbClient.h"
#include "TaskQueue.h"
#include "comm_struct.h"
#include "DbProxy.h"
#include <signal.h>

using std::unordered_map;
using std::shared_ptr;
using std::make_shared;

struct DbServer
{
    DbServer() {
        signal(SIGPIPE, SIG_IGN);
    }

    void addClientIfNotExited(int fd, event_base* ev);
    shared_ptr<Client> getClient(int fd);
    void freeClient(int fd);

    static void eventLoop();
    static void dataUpdate_Entry();

private:
    static void acceptEventHandler(evutil_socket_t sockfd, short event_type, void* ev);
    static void reply(int nfd, short event_type, void* arg);

    static void handleTask(const Task& task, DbProxy& db);

private:
    unordered_map<int, shared_ptr<Client>> clients;
};