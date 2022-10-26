num = int(input("Enter a number: "))

sum = 0

temp = num
# getting error undefine tempp variable.
while tempp > 0:
  # getting error for ; .
   digit = temp % 10 ;
   sum += digit ** 3
   temp //= 10

# display the result
if num == sum:
  #getting error with printf undefine.
   printf(num,"is an Armstrong number")
else:
  #getting error with printf undefine.
   printf(num,"is not an Armstrong number")
