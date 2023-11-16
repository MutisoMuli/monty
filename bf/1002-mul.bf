# BrainF*ck script for multiplying two numbers
# The result must be a single-digit number (less than 10).

# For example, with input 42: 4 is stored in block #1, 2 in block #2.
# Block 0 holds the result.
# Block 1 contains the value to multiply.
# Block 2 stores the number of times to multiply.

# Read input into blocks 1 and 2.
# Subtract 48 from each character ('0').
# Loop while block 2 is not equal to 0,
# adding the value of block 1 to block 0 each time.

# BLOCK 0	BLOCK 1		BLOCK 2		BLOCK 3 	BLOCK4
# 0		4		1		0 		

>,------------------------------------------------ # read into #1
>,------------------------------------------------ # read into #2
[<[>>+<<<+>-]>>[<<+>>-] COPY BLOCK 1 INTO BLOCK 3 AND 0 THEN COPY BLOCK 3 BACK TO BLOCK 1
<-] MOVE BLOCK TO BLOCK 2 AND DECREASE (DONE WITH ONE ITERATION)

# MOVE TO BLOCK 0 AND INCREASE BY ASCII '0' (DEC 48)
<<++++++++++++++++++++++++++++++++++++++++++++++++.
