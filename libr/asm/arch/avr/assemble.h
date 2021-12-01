/*
 * assemble.h
 *
 *  Created on: 1 déc. 2021
 *      Author: gogo
 */

#ifndef LIBR_ASM_ARCH_AVR_ASSEMBLE_H_
#define LIBR_ASM_ARCH_AVR_ASSEMBLE_H_

#define MAX_TOKEN_SIZE 32
#define TOKEN_DELIM " ,\t"

int avr_encode (RAsm *a, RAsmOp *ao, const char *str);
int assemble_operand(RAsm *a, const char *operand, int type, uint32_t *res);
uint16_t packDataByMask(uint16_t data, uint16_t mask);
int search_instruction(RAsm *a, char instr[3][MAX_TOKEN_SIZE], int args);
int parse_specialreg(const char *reg);
int getnum(RAsm *a, const char *s);


#endif /* LIBR_ASM_ARCH_AVR_ASSEMBLE_H_ */
