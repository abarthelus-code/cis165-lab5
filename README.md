# cis165-lab5

Why must a percentage be divided by 100 before using it in a formula?
- It must be divided by 100 so that the percentage becomes a decimal so that it can be used in the formulas.

How does pow represent exponentiation?
- Pow represents it because pow just raises something to a power like a exponent.

What does the number of compounding periods change in the savings formula?
- It changes the interest in the formulas

How is an annual interest rate converted to a monthly rate?
- The annual is divided by 100 to make it a decimal so it can be divided by 12 to get a monthly rate.

Why should double be used for these calculations?
- double is used because the formula involves decimals

Why should calculations use full precision when money is displayed to two decimal places?
- It makes things more accurate.

How are the amount paid back and total interest calculated?
- Amount paid back is Monthy payments x Number of payments
- Total interest is Amount paid back - loan amount

Why are calculations stored in variables before being displayed?
- Makes everything more neat.

  Program and test	             Inputs	                    Expected results	         Actual results	          Match or correction
Compound interest —assigned 1000, 4.25%, 12	  intE:$43.34, Savings:$1043.34	     intE:$43.34, Savings:$1043.34         Match
Compound interest —changed  1250, 3.50%,24	intE:$44.49, Savings:$1294.49	       intE:$44.49, Savings:$1294.49         Match
Loan payment —assigned	    10000, 12%, 36	 MPay:$332.14 PaidBack:$11957.15 IntP:$1957.15                             Match
Loan payment —changed	       15000, 8%, 30   MPay:553.32 PaidBack:16599.75 IntP:1599.75                                Match

All values tested in the code.

To run in onlineGDB open the file on the site check to see if its on c++ then input values and run the code for both.
