/* Write your PL/SQL query statement below */
select name as Employee from Employee e where salary>(select salary from Employee where id=e.managerId);