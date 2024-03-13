Nested loops

Program to calculate the average grade of our user.  
user will be entering 3 grades. We use i+1 in the do  
loop because we're asking the user to enter the  
grades starting with 1, not grade zero.  
The do while makes sure that the user enters  
a valid grade. It must be between 1 and 5.  
It keeps looping on the same grade if the user  
entered a grade of say 9, or 6.

If I don't initialize sum, say like this:  
 int grade, sum;

it gives a high result like this, instead of an error  
saying that sum cannot be calculated:

Enter grade 1: 3  
Enter grade 2: 2  
Enter grade 3: 5  
Sum = 32769  
Avg grade= 10923

If I do initialize sum properly, like this:  
 int grade, sum = 0;

Now, it gives the correct result:  
Enter grade 1: 3  
Enter grade 2: 2  
Enter grade 3: 5  
Sum = 10  
Avg grade= 3.33333
