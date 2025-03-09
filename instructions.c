#include "instructions.h"

#include "includes.h"

const struct instructions instructions = {
    .halt = 0x00,
    .nop = 0x10,

    .rrmovl = 0x20,
    .cmovle = 0x21,
    .cmovl = 0x22,
    .cmove = 0x23,
    .cmovne = 0x24,
    .cmovge = 0x25,
    .cmovg = 0x26,

    .irmovl = 0x30,
    .rmmovl = 0x40,
    .mrmovl = 0x50,

    .addl = 0x60,
    .subl = 0x61,
    .andl = 0x62,
    .xorl = 0x63,

    .jmp = 0x70,
    .jle = 0x71,
    .jl = 0x72,
    .je = 0x73,
    .jne = 0x74,
    .jge = 0x75,
    .jg = 0x76,

    .call = 0x80,
    .ret = 0x90,
    .pushl = 0xa0,
    .popl = 0xb0,
};
