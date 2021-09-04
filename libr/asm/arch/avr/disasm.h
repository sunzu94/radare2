#ifndef AVR_DISASSEMBLER_H
#define AVR_DISASSEMBLER_H

int avr_decode (RAsm *a, char *out, ut64 addr, cut8 *buf, int len);

#endif /* AVR_DISASSEMBLER_H */
