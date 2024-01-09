# Write your MySQL query statement below
select employee.name, bonus.bonus from employee left join bonus on employee.empid=bonus.empid where bonus.bonus is null or bonus.bonus<1000;