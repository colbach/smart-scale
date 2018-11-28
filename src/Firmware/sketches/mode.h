//
// Created by oliver on 28.11.18.
//

#ifndef SKETCH_NOV20A_MODE_H
#define SKETCH_NOV20A_MODE_H

struct mode{
    char *name;
    void (*setup)();
    void (*update)();

    mode() : setup(NULL), update(NULL), name(NULL){}
    mode(void (*setup)(), void (*update)(), char* name) : setup(setup), update(update), name(name){}
};

mode modes[10];
int next_mode = 0;
int selected_mode = 0;

#endif //SKETCH_NOV20A_MODE_H