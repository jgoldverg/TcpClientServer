#ifndef GLOBAL_H_
#define GLOBAL_H_


#define HOSTNAME_LEN 128
#define PATH_LEN 256

#include "../include/logger.h"
#include <map>
#include <vector>
#include <string>

enum class Commands {AUTHOR, IP, PORT, LIST, STATISTICS, BLOCKED};

const std::map <std::string, Commands> global_cmd_map = {{"AUTHOR", Commands::AUTHOR}, {"IP", Commands::IP}, {"PORT",Commands::PORT}, {"LIST",Commands::LIST}, {"STATISTICS",Commands::STATISTICS}, {"BLOCKED",Commands::BLOCKED}};

#endif
