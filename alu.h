#ifndef ALU_H_
#define ALU_H_

/* Include directives: */
#include "cpu.h"

/********************************************************************************
* alu: Performs calculation with specified operands and returns the result.
*      The status flags SNZVC of the referenced status register are updated
*      in accordance with the result.
*
*      - operation: The operation to perform (OR, AND, XOR, ADD or SUB).
*      - a        : First operand.
*      - b        : Second operand.
*      - sr       : Reference to status register containing SNZVC flags.
********************************************************************************/
uint8_t alu(const uint8_t operation,
            const uint8_t a,
            const uint8_t b,
            uint8_t* sr);

#endif /* ALU_H_ */
