
#ifndef EX3_COMMAND_H
#define EX3_COMMAND_H

class Command {
public:
    virtual int execute() = 0;
    virtual ~Command() {}
};

#endif //EX3_COMMAND_H