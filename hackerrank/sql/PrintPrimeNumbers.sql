/*
Problem Link: https://www.hackerrank.com/challenges/print-prime-numbers/problem
Solution contributed by: saurabh042

Write a query to print all prime numbers less than or equal to 1000. Print your result on a single line, and use the ampersand (&) 
character as your separator (instead of a space).
For example, the output for all prime numbers  would be:
2&3&5&7

*/
declare @start int
declare @end int
declare @loop int
set @start  =3
set @end = 1000

declare @result varchar(4000)
declare @isprime varchar(1)
set @result = '2&'
while @start <= @end
begin
    set @isprime = 'Y'
    set @loop = 2
    while @loop <= @start/2
    begin
        IF @start% @loop = 0
        begin
            set @isprime = 'N'
        end
        set @loop = @loop + 1
    end
    if @isprime = 'Y'
    begin 
        set @result += cast(@start as varchar(4)) + '&';
    end
    set @start = @start + 2
end

select substring(@result, 1, len(@result)-1)
