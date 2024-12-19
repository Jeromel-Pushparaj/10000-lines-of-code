**It is a Optimization Problem** - by the feasible solution there is  only one optimal solution
**Feasible solution -**  getting the solution according to constrains - it can have more than one solution 
		            ^
                     | 
These are the problems are called Optimization problem 

To Solve Optimization Problem there are three methods
1. Greedy Method
2. Dynamic Programming
3. Branch & bound

**Algorithm Gready( a, n ) a - array, n - Size**
{
	for i = 1 to n do
	{
		n = select(a);
		if feasible( n ) then
			sol = sol + n;
	}
}


Cons 
- it only focus on localy not globally

Problem - Coin change problem
[1, 6, 5, 9]
target 11
return minimum number of coin to acheive 11
![[Pasted image 20241206202242.png]]
problem - Jumps problem
![[Pasted image 20241206202844.png]]
Jumpgame () - Function
![[Pasted image 20241206203359.png]]


## NOTE: For some problem you couldn't able to get the optimal solution because of it is only focus on locally
