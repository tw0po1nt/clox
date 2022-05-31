//
// Created by Matthew Watt on 1/3/22.
//

#ifndef CLOX_COMPILER_H
#define CLOX_COMPILER_H

#include "object.h"
#include "vm.h"

bool compile(const char* source, Chunk* chunk);

#endif //CLOX_COMPILER_H
